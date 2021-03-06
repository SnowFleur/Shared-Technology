#include "Graphics.h"

bool Graphics::Initialize(HWND hwnd, int width, int height)
{
    this->windowWidth = width;
    this->windowHeight = height;
    this->fpsTimer.Start();

    if (!InitializeDirectX(hwnd))
        return false;

    if (!InitializeShaders())
        return false;

	if (!InitializeScene())
		return false;

    //SepUp ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(this->device.Get(), this->deviceContext.Get());
    ImGui::StyleColorsDark();

    return true;
}

void Graphics::RenderFrame()
{

    float bgcolor[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    this->deviceContext->ClearRenderTargetView(this->renderTargetView.Get(), bgcolor);
    this->deviceContext->ClearDepthStencilView(this->depthStencilView.Get(), D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

    this->deviceContext->IASetInputLayout(this->vertexshader.GetInputLayout());
    this->deviceContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY::D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    this->deviceContext->RSSetState(this->rasterizerState.Get());
    this->deviceContext->OMSetDepthStencilState(this->depthStencilState.Get(), 0);

    this->deviceContext->OMSetBlendState(this->blendState.Get(), NULL, 0xFFFFFFF);

    this->deviceContext->PSSetSamplers(0, 1, this->samplerState.GetAddressOf());

    this->deviceContext->VSSetShader(vertexshader.GetShader(), NULL, 0);
    this->deviceContext->PSSetShader(pixelshader.GetShader(), NULL, 0);
 
    UINT offset = 0;
    

    static float alpha = 0.1f;
    {//pave texture
        //Update Constant Buffer
        static float translationOffset[3] = { 0, 0, -1.0f };
        XMMATRIX world = XMMatrixTranslation(translationOffset[0], translationOffset[1], translationOffset[2]);
        cb_vs_vertexshader.data.mat = world * camera.GetViewMatrix() * camera.GetProjectionMatrix();
        cb_vs_vertexshader.data.mat = DirectX::XMMatrixTranspose(cb_vs_vertexshader.data.mat);//행렬 연산을 위해서 행렬 전치 column format

        if (!cb_vs_vertexshader.ApplyChanges())
            return;
        this->deviceContext->VSSetConstantBuffers(0, 1, this->cb_vs_vertexshader.GetAddressOf());



        this->cb_ps_pixelshader.data.alpha = alpha;//pixelshader alpha value set
        this->cb_ps_pixelshader.ApplyChanges();//변경적용
        this->deviceContext->PSSetConstantBuffers(0, 1, this->cb_ps_pixelshader.GetAddressOf());


        //사각형 그리기
        this->deviceContext->PSSetShaderResources(0, 1, this->pavementTexture.GetAddressOf());
        this->deviceContext->IASetVertexBuffers(0, 1, vertexBuffer.GetAddressOf(), vertexBuffer.StridePtr(), &offset);
        this->deviceContext->IASetIndexBuffer(indiciesBuffer.Get(), DXGI_FORMAT_R32_UINT, 0);
        this->deviceContext->RSSetState(this->rasterizerState_CullFront.Get());
        this->deviceContext->DrawIndexed(indiciesBuffer.BufferSize(), 0, 0);
        this->deviceContext->RSSetState(this->rasterizerState.Get());
        this->deviceContext->DrawIndexed(indiciesBuffer.BufferSize(), 0, 0);
    }
    

    //Drow Text
    static int fpsCounter = 0;
    static std::string fpsString = "FPS : 0";
    fpsCounter++;
    if(fpsTimer.GetMilisecondsElapsed() > 1000.0f)
    {
        fpsString = "FPS : " + std::to_string(fpsCounter);
        fpsCounter = 0;
        fpsTimer.Restart();
    }
    spriteBatch->Begin();
    spriteFont->DrawString(spriteBatch.get(), StringConverter::StringToWide(fpsString).c_str(), DirectX::XMFLOAT2(0, 0), DirectX::Colors::White, 0.0f, DirectX::XMFLOAT2(0, 0), DirectX::XMFLOAT2(1.0f, 1.0f));
    spriteBatch->End();

    static int counter = 0;
    //Start ImGui frame
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    //Create ImGui Window
    ImGui::Begin("Test");
    if (ImGui::Button("Click Me!"))
        counter++;
    std::string clickCount = "Click Count : " + std::to_string(counter);
    ImGui::Text(clickCount.c_str());
    //ImGui::DragFloat3("Translation X/Y/Z", translationOffset, 0.1f, -5.0f, 5.0f);
    ImGui::DragFloat("Alpha", &alpha, 0.1f, 0.0f, 1.0f);
    ImGui::End();
    //Assemble Together Draw Data
    ImGui::Render();
    //Render Draw Data
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    this->swapChain->Present(0, NULL);
}

bool Graphics::InitializeDirectX(HWND hwnd)
{
    try
    {
        std::vector<AdapterData> adapters = AdapterReader::GetAdaptders();

        if (adapters.size() < 1)
        {
            ErrorLogger::Log("No IDXGI Adapters found.");
            return false;
        }

        DXGI_SWAP_CHAIN_DESC scd = { 0 };

        scd.BufferDesc.Width = this->windowWidth;
        scd.BufferDesc.Height = this->windowHeight;
        scd.BufferDesc.RefreshRate.Numerator = 60;
        scd.BufferDesc.RefreshRate.Denominator = 1;
        scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
        scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

        scd.SampleDesc.Count = 1;
        scd.SampleDesc.Quality = 0;

        scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        scd.BufferCount = 1;//스크린 버퍼 갯수
        scd.OutputWindow = hwnd;
        scd.Windowed = TRUE;
        scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

        HRESULT hr;
        hr = D3D11CreateDeviceAndSwapChain(
            adapters[0].pAdapter, //IDXGI adapter
            D3D_DRIVER_TYPE_UNKNOWN,
            NULL, //소프트웨어 드라이버 type
            NULL, //flag Runtime layer
            NULL, //Feature levels array
            0,    //of feature levels in array
            D3D11_SDK_VERSION,
            &scd, //swapchain description
            this->swapChain.GetAddressOf(), //SwapChain Address
            this->device.GetAddressOf(),    //Device Address
            NULL, //Supported feature level
            this->deviceContext.GetAddressOf()); // DeviceContext Address

        COM_ERROR_IF_FAILED(hr, "Failed to create device and SwapChain.");

        Microsoft::WRL::ComPtr<ID3D11Texture2D> BackBuffer;
        hr = this->swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<void**>(BackBuffer.GetAddressOf()));
        COM_ERROR_IF_FAILED(hr, "GetBuffer Failed.");

        hr = this->device->CreateRenderTargetView(BackBuffer.Get(), NULL, this->renderTargetView.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed Create RenderTargetView.");

        //Describe Depth/Stencil Buffer
        CD3D11_TEXTURE2D_DESC depthStencilTextureDesc(
            DXGI_FORMAT_D24_UNORM_S8_UINT,
            this->windowWidth,
            this->windowHeight);
        depthStencilTextureDesc.MipLevels = 1;
        depthStencilTextureDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

        hr = this->device->CreateTexture2D(&depthStencilTextureDesc, NULL, this->depthStencilBuffer.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create depth stencil buffer.");

        hr = this->device->CreateDepthStencilView(this->depthStencilBuffer.Get(), NULL, this->depthStencilView.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create depth stencil view.");

        this->deviceContext->OMSetRenderTargets(1, this->renderTargetView.GetAddressOf(), this->depthStencilView.Get());

        //create depth stencil state
        CD3D11_DEPTH_STENCIL_DESC depthStencilStateDesc(D3D11_DEFAULT);
        depthStencilStateDesc.DepthFunc = D3D11_COMPARISON_FUNC::D3D11_COMPARISON_LESS_EQUAL;

        hr = this->device->CreateDepthStencilState(&depthStencilStateDesc, this->depthStencilState.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create depth stencil state.");

        //Create & Set viewport
        CD3D11_VIEWPORT viewport(0.0f, 0.0f, 
            static_cast<float>(this->windowWidth),
            static_cast<float>(this->windowHeight));
        this->deviceContext->RSSetViewports(1, &viewport);

        //Create Rasterizer State
        CD3D11_RASTERIZER_DESC rasterizerDesc(D3D11_DEFAULT);
        hr = this->device->CreateRasterizerState(&rasterizerDesc, this->rasterizerState.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create rasterizer state.");

        //Create Rasterizer State for Culling Front
        CD3D11_RASTERIZER_DESC rasterizer_CullFrontDesc(D3D11_DEFAULT);rasterizer_CullFrontDesc.CullMode = D3D11_CULL_MODE::D3D11_CULL_FRONT;//앞면 제거
        rasterizer_CullFrontDesc.FrontCounterClockwise = FALSE;//반시계 방향
        hr = this->device->CreateRasterizerState(&rasterizer_CullFrontDesc, this->rasterizerState_CullFront.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create rasterizer state.");


        //Create Blend State
        D3D11_BLEND_DESC blendDesc = { 0 };

        D3D11_RENDER_TARGET_BLEND_DESC rtbd = { 0 };

        rtbd.BlendEnable = true;
        rtbd.SrcBlend = D3D11_BLEND::D3D11_BLEND_SRC_ALPHA;
        rtbd.DestBlend = D3D11_BLEND::D3D11_BLEND_INV_SRC_ALPHA;
        rtbd.BlendOp = D3D11_BLEND_OP::D3D11_BLEND_OP_ADD;
        rtbd.SrcBlendAlpha = D3D11_BLEND::D3D11_BLEND_ONE;
        rtbd.DestBlendAlpha = D3D11_BLEND::D3D11_BLEND_ZERO;
        rtbd.BlendOpAlpha = D3D11_BLEND_OP::D3D11_BLEND_OP_ADD;
        rtbd.RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE::D3D11_COLOR_WRITE_ENABLE_ALL;

        blendDesc.RenderTarget[0] = rtbd;

        hr = this->device->CreateBlendState(&blendDesc, this->blendState.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create blend state");


        //Font Initialize
        spriteBatch = std::make_unique<DirectX::SpriteBatch>(this->deviceContext.Get());
        spriteFont = std::make_unique<DirectX::SpriteFont>(this->device.Get(), L"Data\\Fonts\\comic_sans_ms_16.spritefont");

        CD3D11_SAMPLER_DESC sampDesc(D3D11_DEFAULT);
        sampDesc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
        sampDesc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
        sampDesc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
        hr = this->device->CreateSamplerState(&sampDesc, this->samplerState.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to create sampler state.");

    }
    catch (COMException& exception)
    {
        ErrorLogger::Log(exception);
        return false;
    }

    return true;
}

bool Graphics::InitializeShaders()
{
    std::wstring shaderfolder = L"";
#pragma region DetermineShaderPath
    if (IsDebuggerPresent() == TRUE)
    {
#ifdef _DEBUG //디버그 모드
    #ifdef _WIN64
        shaderfolder = L"..\\x64\\Debug\\";
    #else
        shaderfolder = L"..\\Debug\\";
    #endif
    #else
    #ifdef _WIN64
		shaderfolder = L"..\\x64\\Release\\";
    #else
		shaderfolder = L"..\\Release\\";
    #endif
#endif // _DEBUG //디버그 모드
    }

	D3D11_INPUT_ELEMENT_DESC layout[] = {
		{"POSITION", 0, DXGI_FORMAT::DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT::DXGI_FORMAT_R32G32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_CLASSIFICATION::D3D11_INPUT_PER_VERTEX_DATA, 0}
	};

	UINT numElements = ARRAYSIZE(layout);

    if (!vertexshader.Initialize(this->device, shaderfolder + L"VertexShader.cso", layout, numElements))
        return false;

	if (!pixelshader.Initialize(this->device, shaderfolder + L"PixelShader.cso"))
		return false;


    return true;
}

bool Graphics::InitializeScene()
{
    try
    {
        Vertex v[] =
        {
            Vertex(-0.5f, -0.5f, -0.5f, 0.0f, 1.0f),//front bl [0]
            Vertex(-0.5f, 0.5f, -0.5f, 0.0f, 0.0f),//front tl  [1]
            Vertex(0.5f, 0.5f, -0.5f, 1.0f, 0.0f),//front tr   [2]
            Vertex(0.5f, -0.5f, -0.5f, 1.0f, 1.0f),//front br  [3]
            Vertex(-0.5f, -0.5f, 0.5f, 0.0f, 1.0f),//back bl [4]
            Vertex(-0.5f, 0.5f, 0.5f, 0.0f, 0.0f),//back tl  [5]
            Vertex(0.5f, 0.5f, 0.5f, 1.0f, 0.0f),//back tr   [6]
            Vertex(0.5f, -0.5f, 0.5f, 1.0f, 1.0f),//back br  [7]
        };

        //Load Vertex Data
        HRESULT hr = this->vertexBuffer.Initialize(this->device.Get(), v, ARRAYSIZE(v));
        COM_ERROR_IF_FAILED(hr, "Failed to Create vertex buffer.");

        DWORD indices[] = {
            0, 1, 2, //FRONT
            0, 2, 3, //FRONT
            4, 7, 6, //BACK 
            4, 6, 5, //BACK
            3, 2, 6, //RIGHT SIDE
            3, 6, 7, //RIGHT SIDE
            4, 5, 1, //LEFT SIDE
            4, 1, 0, //LEFT SIDE
            1, 5, 6, //TOP
            1, 6, 2, //TOP
            0, 3, 7, //BOTTOM
            0, 7, 4, //BOTTOM
        };

        //Load Index Data
        hr = this->indiciesBuffer.Initialize(this->device.Get(), indices, ARRAYSIZE(indices));
        COM_ERROR_IF_FAILED(hr, "Failed to Create indices buffer.");
        
        //Load Texture
        hr = DirectX::CreateWICTextureFromFile(this->device.Get(), L"Data\\Textures\\seamless_grass.jpg", nullptr, grassTexture.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to Create wic texture from file.");

        hr = DirectX::CreateWICTextureFromFile(this->device.Get(), L"Data\\Textures\\pinksquare.jpg", nullptr, pinkTexture.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to Create wic texture from file.");

        hr = DirectX::CreateWICTextureFromFile(this->device.Get(), L"Data\\Textures\\seamless_pavement.jpg", nullptr, pavementTexture.GetAddressOf());
        COM_ERROR_IF_FAILED(hr, "Failed to Create wic texture from file.");


        //Initialize Constant Buffer(s)
        hr = this->cb_vs_vertexshader.Initialize(this->device.Get(), this->deviceContext.Get());
        COM_ERROR_IF_FAILED(hr, "Failed to Create constant buffer.");

        //Initialize Constant Buffer(s)
        hr = this->cb_ps_pixelshader.Initialize(this->device.Get(), this->deviceContext.Get());
        COM_ERROR_IF_FAILED(hr, "Failed to Create constant buffer.");

        camera.SetPosition(0.0f, 0.0f, -2.0f);
        camera.SetProjectionValues(90.0f, static_cast<float>(windowWidth) / static_cast<float>(windowHeight), 0.1f, 1000.0f);
    }
    catch (COMException& exception)
    {
        ErrorLogger::Log(exception);
        return false;
    }
    return true;
}