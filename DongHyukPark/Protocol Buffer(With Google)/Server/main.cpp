#pragma once

//Only Used x64
#ifdef _DEBUG
//#pragma comment(lib,"..\\Libs\\Basic-SnowNetCore\\Lib\\Debug\\Basic-SnowNetCore.lib")
    #pragma comment(lib,"Debug\\Basic-SnowNetCore.lib")
    #pragma comment(lib,"Debug\\libprotobufd.lib")
#else
    #pragma comment(lib,"Release\\Basic-SnowNetCore.lib")
    #pragma comment(lib,"Releaseg\\libprotobufd.lib")
#endif // _DEBUG


#define SERVER_ADDDR "127.0.0.1"
constexpr int PORT      = 9000;
const int BUFFER_SIZE   = 1024;

#include<WindowsHeader.h>
#include<SnowThread.h>
#include<iostream>
#include"Server.h"


int main() {

    CServer server;
    while (true)Sleep(100);
}