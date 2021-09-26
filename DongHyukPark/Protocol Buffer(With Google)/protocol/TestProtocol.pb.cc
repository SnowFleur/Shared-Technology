// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TestProtocol.proto

#include "TestProtocol.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace TestProtocol {
constexpr CS_LOGIN_REQ::CS_LOGIN_REQ(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : packettype_(0)

  , packetsize_(0u){}
struct CS_LOGIN_REQDefaultTypeInternal {
  constexpr CS_LOGIN_REQDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CS_LOGIN_REQDefaultTypeInternal() {}
  union {
    CS_LOGIN_REQ _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CS_LOGIN_REQDefaultTypeInternal _CS_LOGIN_REQ_default_instance_;
constexpr SC_LOING_RES::SC_LOING_RES(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : packettype_(0)

  , packetsize_(0u)
  , sessionindex_(uint64_t{0u})
  , result_(false){}
struct SC_LOING_RESDefaultTypeInternal {
  constexpr SC_LOING_RESDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SC_LOING_RESDefaultTypeInternal() {}
  union {
    SC_LOING_RES _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SC_LOING_RESDefaultTypeInternal _SC_LOING_RES_default_instance_;
constexpr ECHO_SendChatMessage::ECHO_SendChatMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : packettype_(0)

  , packetsize_(0u)
  , sessionindex_(uint64_t{0u}){}
struct ECHO_SendChatMessageDefaultTypeInternal {
  constexpr ECHO_SendChatMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ECHO_SendChatMessageDefaultTypeInternal() {}
  union {
    ECHO_SendChatMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ECHO_SendChatMessageDefaultTypeInternal _ECHO_SendChatMessage_default_instance_;
}  // namespace TestProtocol
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_TestProtocol_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_TestProtocol_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_TestProtocol_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_TestProtocol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::CS_LOGIN_REQ, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::CS_LOGIN_REQ, packettype_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::CS_LOGIN_REQ, packetsize_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::SC_LOING_RES, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::SC_LOING_RES, packettype_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::SC_LOING_RES, packetsize_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::SC_LOING_RES, result_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::SC_LOING_RES, sessionindex_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::ECHO_SendChatMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TestProtocol::ECHO_SendChatMessage, packettype_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::ECHO_SendChatMessage, packetsize_),
  PROTOBUF_FIELD_OFFSET(::TestProtocol::ECHO_SendChatMessage, sessionindex_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TestProtocol::CS_LOGIN_REQ)},
  { 7, -1, sizeof(::TestProtocol::SC_LOING_RES)},
  { 16, -1, sizeof(::TestProtocol::ECHO_SendChatMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TestProtocol::_CS_LOGIN_REQ_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TestProtocol::_SC_LOING_RES_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TestProtocol::_ECHO_SendChatMessage_default_instance_),
};

const char descriptor_table_protodef_TestProtocol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022TestProtocol.proto\022\014TestProtocol\"H\n\014CS"
  "_LOGIN_REQ\022$\n\npacketType\030\001 \001(\0162\020.TestPro"
  "tocol.PT\022\022\n\npacketSize\030\002 \001(\r\"n\n\014SC_LOING"
  "_RES\022$\n\npacketType\030\001 \001(\0162\020.TestProtocol."
  "PT\022\022\n\npacketSize\030\002 \001(\r\022\016\n\006result\030\003 \001(\010\022\024"
  "\n\014sessionIndex\030\004 \001(\004\"f\n\024ECHO_SendChatMes"
  "sage\022$\n\npacketType\030\001 \001(\0162\020.TestProtocol."
  "PT\022\022\n\npacketSize\030\002 \001(\r\022\024\n\014sessionIndex\030\003"
  " \001(\004*H\n\002PT\022\023\n\017PT_CS_LOING_REQ\020\000\022\023\n\017PT_SC"
  "_LOING_RES\020\001\022\030\n\024PT_ECHO_SEND_MESSAGE\020\002b\006"
  "proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_TestProtocol_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TestProtocol_2eproto = {
  false, false, 406, descriptor_table_protodef_TestProtocol_2eproto, "TestProtocol.proto", 
  &descriptor_table_TestProtocol_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_TestProtocol_2eproto::offsets,
  file_level_metadata_TestProtocol_2eproto, file_level_enum_descriptors_TestProtocol_2eproto, file_level_service_descriptors_TestProtocol_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_TestProtocol_2eproto_getter() {
  return &descriptor_table_TestProtocol_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_TestProtocol_2eproto(&descriptor_table_TestProtocol_2eproto);
namespace TestProtocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PT_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_TestProtocol_2eproto);
  return file_level_enum_descriptors_TestProtocol_2eproto[0];
}
bool PT_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class CS_LOGIN_REQ::_Internal {
 public:
};

CS_LOGIN_REQ::CS_LOGIN_REQ(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TestProtocol.CS_LOGIN_REQ)
}
CS_LOGIN_REQ::CS_LOGIN_REQ(const CS_LOGIN_REQ& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&packettype_, &from.packettype_,
    static_cast<size_t>(reinterpret_cast<char*>(&packetsize_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(packetsize_));
  // @@protoc_insertion_point(copy_constructor:TestProtocol.CS_LOGIN_REQ)
}

inline void CS_LOGIN_REQ::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&packettype_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&packetsize_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(packetsize_));
}

CS_LOGIN_REQ::~CS_LOGIN_REQ() {
  // @@protoc_insertion_point(destructor:TestProtocol.CS_LOGIN_REQ)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void CS_LOGIN_REQ::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void CS_LOGIN_REQ::ArenaDtor(void* object) {
  CS_LOGIN_REQ* _this = reinterpret_cast< CS_LOGIN_REQ* >(object);
  (void)_this;
}
void CS_LOGIN_REQ::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CS_LOGIN_REQ::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CS_LOGIN_REQ::Clear() {
// @@protoc_insertion_point(message_clear_start:TestProtocol.CS_LOGIN_REQ)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&packettype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&packetsize_) -
      reinterpret_cast<char*>(&packettype_)) + sizeof(packetsize_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CS_LOGIN_REQ::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .TestProtocol.PT packetType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_packettype(static_cast<::TestProtocol::PT>(val));
        } else goto handle_unusual;
        continue;
      // uint32 packetSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          packetsize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CS_LOGIN_REQ::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestProtocol.CS_LOGIN_REQ)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_packettype(), target);
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_packetsize(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestProtocol.CS_LOGIN_REQ)
  return target;
}

size_t CS_LOGIN_REQ::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestProtocol.CS_LOGIN_REQ)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_packettype());
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_packetsize());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CS_LOGIN_REQ::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CS_LOGIN_REQ::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CS_LOGIN_REQ::GetClassData() const { return &_class_data_; }

void CS_LOGIN_REQ::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<CS_LOGIN_REQ *>(to)->MergeFrom(
      static_cast<const CS_LOGIN_REQ &>(from));
}


void CS_LOGIN_REQ::MergeFrom(const CS_LOGIN_REQ& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestProtocol.CS_LOGIN_REQ)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_packettype() != 0) {
    _internal_set_packettype(from._internal_packettype());
  }
  if (from._internal_packetsize() != 0) {
    _internal_set_packetsize(from._internal_packetsize());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CS_LOGIN_REQ::CopyFrom(const CS_LOGIN_REQ& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestProtocol.CS_LOGIN_REQ)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CS_LOGIN_REQ::IsInitialized() const {
  return true;
}

void CS_LOGIN_REQ::InternalSwap(CS_LOGIN_REQ* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CS_LOGIN_REQ, packetsize_)
      + sizeof(CS_LOGIN_REQ::packetsize_)
      - PROTOBUF_FIELD_OFFSET(CS_LOGIN_REQ, packettype_)>(
          reinterpret_cast<char*>(&packettype_),
          reinterpret_cast<char*>(&other->packettype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CS_LOGIN_REQ::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_TestProtocol_2eproto_getter, &descriptor_table_TestProtocol_2eproto_once,
      file_level_metadata_TestProtocol_2eproto[0]);
}

// ===================================================================

class SC_LOING_RES::_Internal {
 public:
};

SC_LOING_RES::SC_LOING_RES(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TestProtocol.SC_LOING_RES)
}
SC_LOING_RES::SC_LOING_RES(const SC_LOING_RES& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&packettype_, &from.packettype_,
    static_cast<size_t>(reinterpret_cast<char*>(&result_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(result_));
  // @@protoc_insertion_point(copy_constructor:TestProtocol.SC_LOING_RES)
}

inline void SC_LOING_RES::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&packettype_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&result_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(result_));
}

SC_LOING_RES::~SC_LOING_RES() {
  // @@protoc_insertion_point(destructor:TestProtocol.SC_LOING_RES)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SC_LOING_RES::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SC_LOING_RES::ArenaDtor(void* object) {
  SC_LOING_RES* _this = reinterpret_cast< SC_LOING_RES* >(object);
  (void)_this;
}
void SC_LOING_RES::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SC_LOING_RES::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SC_LOING_RES::Clear() {
// @@protoc_insertion_point(message_clear_start:TestProtocol.SC_LOING_RES)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&packettype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&result_) -
      reinterpret_cast<char*>(&packettype_)) + sizeof(result_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SC_LOING_RES::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .TestProtocol.PT packetType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_packettype(static_cast<::TestProtocol::PT>(val));
        } else goto handle_unusual;
        continue;
      // uint32 packetSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          packetsize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool result = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          result_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 sessionIndex = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          sessionindex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SC_LOING_RES::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestProtocol.SC_LOING_RES)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_packettype(), target);
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_packetsize(), target);
  }

  // bool result = 3;
  if (this->_internal_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_result(), target);
  }

  // uint64 sessionIndex = 4;
  if (this->_internal_sessionindex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_sessionindex(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestProtocol.SC_LOING_RES)
  return target;
}

size_t SC_LOING_RES::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestProtocol.SC_LOING_RES)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_packettype());
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_packetsize());
  }

  // uint64 sessionIndex = 4;
  if (this->_internal_sessionindex() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sessionindex());
  }

  // bool result = 3;
  if (this->_internal_result() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SC_LOING_RES::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SC_LOING_RES::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SC_LOING_RES::GetClassData() const { return &_class_data_; }

void SC_LOING_RES::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<SC_LOING_RES *>(to)->MergeFrom(
      static_cast<const SC_LOING_RES &>(from));
}


void SC_LOING_RES::MergeFrom(const SC_LOING_RES& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestProtocol.SC_LOING_RES)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_packettype() != 0) {
    _internal_set_packettype(from._internal_packettype());
  }
  if (from._internal_packetsize() != 0) {
    _internal_set_packetsize(from._internal_packetsize());
  }
  if (from._internal_sessionindex() != 0) {
    _internal_set_sessionindex(from._internal_sessionindex());
  }
  if (from._internal_result() != 0) {
    _internal_set_result(from._internal_result());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SC_LOING_RES::CopyFrom(const SC_LOING_RES& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestProtocol.SC_LOING_RES)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SC_LOING_RES::IsInitialized() const {
  return true;
}

void SC_LOING_RES::InternalSwap(SC_LOING_RES* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SC_LOING_RES, result_)
      + sizeof(SC_LOING_RES::result_)
      - PROTOBUF_FIELD_OFFSET(SC_LOING_RES, packettype_)>(
          reinterpret_cast<char*>(&packettype_),
          reinterpret_cast<char*>(&other->packettype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SC_LOING_RES::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_TestProtocol_2eproto_getter, &descriptor_table_TestProtocol_2eproto_once,
      file_level_metadata_TestProtocol_2eproto[1]);
}

// ===================================================================

class ECHO_SendChatMessage::_Internal {
 public:
};

ECHO_SendChatMessage::ECHO_SendChatMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:TestProtocol.ECHO_SendChatMessage)
}
ECHO_SendChatMessage::ECHO_SendChatMessage(const ECHO_SendChatMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&packettype_, &from.packettype_,
    static_cast<size_t>(reinterpret_cast<char*>(&sessionindex_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(sessionindex_));
  // @@protoc_insertion_point(copy_constructor:TestProtocol.ECHO_SendChatMessage)
}

inline void ECHO_SendChatMessage::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&packettype_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&sessionindex_) -
    reinterpret_cast<char*>(&packettype_)) + sizeof(sessionindex_));
}

ECHO_SendChatMessage::~ECHO_SendChatMessage() {
  // @@protoc_insertion_point(destructor:TestProtocol.ECHO_SendChatMessage)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ECHO_SendChatMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ECHO_SendChatMessage::ArenaDtor(void* object) {
  ECHO_SendChatMessage* _this = reinterpret_cast< ECHO_SendChatMessage* >(object);
  (void)_this;
}
void ECHO_SendChatMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ECHO_SendChatMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ECHO_SendChatMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:TestProtocol.ECHO_SendChatMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&packettype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sessionindex_) -
      reinterpret_cast<char*>(&packettype_)) + sizeof(sessionindex_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ECHO_SendChatMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .TestProtocol.PT packetType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_packettype(static_cast<::TestProtocol::PT>(val));
        } else goto handle_unusual;
        continue;
      // uint32 packetSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          packetsize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 sessionIndex = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          sessionindex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ECHO_SendChatMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestProtocol.ECHO_SendChatMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_packettype(), target);
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_packetsize(), target);
  }

  // uint64 sessionIndex = 3;
  if (this->_internal_sessionindex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_sessionindex(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestProtocol.ECHO_SendChatMessage)
  return target;
}

size_t ECHO_SendChatMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestProtocol.ECHO_SendChatMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .TestProtocol.PT packetType = 1;
  if (this->_internal_packettype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_packettype());
  }

  // uint32 packetSize = 2;
  if (this->_internal_packetsize() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_packetsize());
  }

  // uint64 sessionIndex = 3;
  if (this->_internal_sessionindex() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sessionindex());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ECHO_SendChatMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ECHO_SendChatMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ECHO_SendChatMessage::GetClassData() const { return &_class_data_; }

void ECHO_SendChatMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ECHO_SendChatMessage *>(to)->MergeFrom(
      static_cast<const ECHO_SendChatMessage &>(from));
}


void ECHO_SendChatMessage::MergeFrom(const ECHO_SendChatMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestProtocol.ECHO_SendChatMessage)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_packettype() != 0) {
    _internal_set_packettype(from._internal_packettype());
  }
  if (from._internal_packetsize() != 0) {
    _internal_set_packetsize(from._internal_packetsize());
  }
  if (from._internal_sessionindex() != 0) {
    _internal_set_sessionindex(from._internal_sessionindex());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ECHO_SendChatMessage::CopyFrom(const ECHO_SendChatMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestProtocol.ECHO_SendChatMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ECHO_SendChatMessage::IsInitialized() const {
  return true;
}

void ECHO_SendChatMessage::InternalSwap(ECHO_SendChatMessage* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ECHO_SendChatMessage, sessionindex_)
      + sizeof(ECHO_SendChatMessage::sessionindex_)
      - PROTOBUF_FIELD_OFFSET(ECHO_SendChatMessage, packettype_)>(
          reinterpret_cast<char*>(&packettype_),
          reinterpret_cast<char*>(&other->packettype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ECHO_SendChatMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_TestProtocol_2eproto_getter, &descriptor_table_TestProtocol_2eproto_once,
      file_level_metadata_TestProtocol_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace TestProtocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TestProtocol::CS_LOGIN_REQ* Arena::CreateMaybeMessage< ::TestProtocol::CS_LOGIN_REQ >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestProtocol::CS_LOGIN_REQ >(arena);
}
template<> PROTOBUF_NOINLINE ::TestProtocol::SC_LOING_RES* Arena::CreateMaybeMessage< ::TestProtocol::SC_LOING_RES >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestProtocol::SC_LOING_RES >(arena);
}
template<> PROTOBUF_NOINLINE ::TestProtocol::ECHO_SendChatMessage* Arena::CreateMaybeMessage< ::TestProtocol::ECHO_SendChatMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestProtocol::ECHO_SendChatMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>