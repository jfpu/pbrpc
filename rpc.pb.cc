// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rpc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace RPC {

namespace {

const ::google::protobuf::Descriptor* RpcRequestData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcRequestData_reflection_ = NULL;
const ::google::protobuf::Descriptor* RpcResponseData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcResponseData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rpc_2eproto() {
  protobuf_AddDesc_rpc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rpc.proto");
  GOOGLE_CHECK(file != NULL);
  RpcRequestData_descriptor_ = file->message_type(0);
  static const int RpcRequestData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequestData, call_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequestData, srv_method_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequestData, content_),
  };
  RpcRequestData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RpcRequestData_descriptor_,
      RpcRequestData::default_instance_,
      RpcRequestData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequestData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequestData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RpcRequestData));
  RpcResponseData_descriptor_ = file->message_type(1);
  static const int RpcResponseData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcResponseData, call_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcResponseData, content_),
  };
  RpcResponseData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RpcResponseData_descriptor_,
      RpcResponseData::default_instance_,
      RpcResponseData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcResponseData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcResponseData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RpcResponseData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rpc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RpcRequestData_descriptor_, &RpcRequestData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RpcResponseData_descriptor_, &RpcResponseData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rpc_2eproto() {
  delete RpcRequestData::default_instance_;
  delete RpcRequestData_reflection_;
  delete RpcResponseData::default_instance_;
  delete RpcResponseData_reflection_;
}

void protobuf_AddDesc_rpc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\trpc.proto\022\003RPC\032 google/protobuf/descri"
    "ptor.proto\"K\n\016RpcRequestData\022\017\n\007call_id\030"
    "\001 \002(\r\022\027\n\017srv_method_code\030\002 \002(\r\022\017\n\007conten"
    "t\030\003 \002(\014\"3\n\017RpcResponseData\022\017\n\007call_id\030\001 "
    "\002(\r\022\017\n\007content\030\002 \002(\014:;\n\021global_service_i"
    "d\022\037.google.protobuf.ServiceOptions\030\350\007 \002("
    "\r:8\n\017local_method_id\022\036.google.protobuf.M"
    "ethodOptions\030\350\007 \002(\rB\003\200\001\001", 304);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpc.proto", &protobuf_RegisterTypes);
  RpcRequestData::default_instance_ = new RpcRequestData();
  RpcResponseData::default_instance_ = new RpcResponseData();
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::ServiceOptions::default_instance(),
    1000, 13, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    1000, 13, false, false);
  RpcRequestData::default_instance_->InitAsDefaultInstance();
  RpcResponseData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rpc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rpc_2eproto {
  StaticDescriptorInitializer_rpc_2eproto() {
    protobuf_AddDesc_rpc_2eproto();
  }
} static_descriptor_initializer_rpc_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RpcRequestData::kCallIdFieldNumber;
const int RpcRequestData::kSrvMethodCodeFieldNumber;
const int RpcRequestData::kContentFieldNumber;
#endif  // !_MSC_VER

RpcRequestData::RpcRequestData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RpcRequestData::InitAsDefaultInstance() {
}

RpcRequestData::RpcRequestData(const RpcRequestData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RpcRequestData::SharedCtor() {
  _cached_size_ = 0;
  call_id_ = 0u;
  srv_method_code_ = 0u;
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcRequestData::~RpcRequestData() {
  SharedDtor();
}

void RpcRequestData::SharedDtor() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (this != default_instance_) {
  }
}

void RpcRequestData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcRequestData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcRequestData_descriptor_;
}

const RpcRequestData& RpcRequestData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rpc_2eproto();  return *default_instance_;
}

RpcRequestData* RpcRequestData::default_instance_ = NULL;

RpcRequestData* RpcRequestData::New() const {
  return new RpcRequestData;
}

void RpcRequestData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    call_id_ = 0u;
    srv_method_code_ = 0u;
    if (has_content()) {
      if (content_ != &::google::protobuf::internal::kEmptyString) {
        content_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RpcRequestData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 call_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &call_id_)));
          set_has_call_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_srv_method_code;
        break;
      }
      
      // required uint32 srv_method_code = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_srv_method_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &srv_method_code_)));
          set_has_srv_method_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_content;
        break;
      }
      
      // required bytes content = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RpcRequestData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 call_id = 1;
  if (has_call_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->call_id(), output);
  }
  
  // required uint32 srv_method_code = 2;
  if (has_srv_method_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->srv_method_code(), output);
  }
  
  // required bytes content = 3;
  if (has_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->content(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RpcRequestData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 call_id = 1;
  if (has_call_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->call_id(), target);
  }
  
  // required uint32 srv_method_code = 2;
  if (has_srv_method_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->srv_method_code(), target);
  }
  
  // required bytes content = 3;
  if (has_content()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->content(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RpcRequestData::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 call_id = 1;
    if (has_call_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->call_id());
    }
    
    // required uint32 srv_method_code = 2;
    if (has_srv_method_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->srv_method_code());
    }
    
    // required bytes content = 3;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->content());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcRequestData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RpcRequestData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RpcRequestData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RpcRequestData::MergeFrom(const RpcRequestData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_call_id()) {
      set_call_id(from.call_id());
    }
    if (from.has_srv_method_code()) {
      set_srv_method_code(from.srv_method_code());
    }
    if (from.has_content()) {
      set_content(from.content());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RpcRequestData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcRequestData::CopyFrom(const RpcRequestData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcRequestData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void RpcRequestData::Swap(RpcRequestData* other) {
  if (other != this) {
    std::swap(call_id_, other->call_id_);
    std::swap(srv_method_code_, other->srv_method_code_);
    std::swap(content_, other->content_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RpcRequestData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcRequestData_descriptor_;
  metadata.reflection = RpcRequestData_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RpcResponseData::kCallIdFieldNumber;
const int RpcResponseData::kContentFieldNumber;
#endif  // !_MSC_VER

RpcResponseData::RpcResponseData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RpcResponseData::InitAsDefaultInstance() {
}

RpcResponseData::RpcResponseData(const RpcResponseData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RpcResponseData::SharedCtor() {
  _cached_size_ = 0;
  call_id_ = 0u;
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcResponseData::~RpcResponseData() {
  SharedDtor();
}

void RpcResponseData::SharedDtor() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (this != default_instance_) {
  }
}

void RpcResponseData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcResponseData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcResponseData_descriptor_;
}

const RpcResponseData& RpcResponseData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rpc_2eproto();  return *default_instance_;
}

RpcResponseData* RpcResponseData::default_instance_ = NULL;

RpcResponseData* RpcResponseData::New() const {
  return new RpcResponseData;
}

void RpcResponseData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    call_id_ = 0u;
    if (has_content()) {
      if (content_ != &::google::protobuf::internal::kEmptyString) {
        content_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RpcResponseData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 call_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &call_id_)));
          set_has_call_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_content;
        break;
      }
      
      // required bytes content = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RpcResponseData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 call_id = 1;
  if (has_call_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->call_id(), output);
  }
  
  // required bytes content = 2;
  if (has_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->content(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RpcResponseData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 call_id = 1;
  if (has_call_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->call_id(), target);
  }
  
  // required bytes content = 2;
  if (has_content()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->content(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RpcResponseData::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 call_id = 1;
    if (has_call_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->call_id());
    }
    
    // required bytes content = 2;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->content());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcResponseData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RpcResponseData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RpcResponseData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RpcResponseData::MergeFrom(const RpcResponseData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_call_id()) {
      set_call_id(from.call_id());
    }
    if (from.has_content()) {
      set_content(from.content());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RpcResponseData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcResponseData::CopyFrom(const RpcResponseData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcResponseData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void RpcResponseData::Swap(RpcResponseData* other) {
  if (other != this) {
    std::swap(call_id_, other->call_id_);
    std::swap(content_, other->content_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RpcResponseData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcResponseData_descriptor_;
  metadata.reflection = RpcResponseData_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
  global_service_id(kGlobalServiceIdFieldNumber, 0u);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
  local_method_id(kLocalMethodIdFieldNumber, 0u);

// @@protoc_insertion_point(namespace_scope)

}  // namespace RPC

// @@protoc_insertion_point(global_scope)
