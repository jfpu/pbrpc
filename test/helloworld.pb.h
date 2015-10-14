// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: helloworld.proto

#ifndef PROTOBUF_helloworld_2eproto__INCLUDED
#define PROTOBUF_helloworld_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/service.h>
#include "rpc.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_helloworld_2eproto();
void protobuf_AssignDesc_helloworld_2eproto();
void protobuf_ShutdownFile_helloworld_2eproto();

class FooRequest;
class FooResponse;

// ===================================================================

class FooRequest : public ::google::protobuf::Message {
 public:
  FooRequest();
  virtual ~FooRequest();
  
  FooRequest(const FooRequest& from);
  
  inline FooRequest& operator=(const FooRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const FooRequest& default_instance();
  
  void Swap(FooRequest* other);
  
  // implements Message ----------------------------------------------
  
  FooRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FooRequest& from);
  void MergeFrom(const FooRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string text = 1;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 1;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  
  // optional int32 times = 2;
  inline bool has_times() const;
  inline void clear_times();
  static const int kTimesFieldNumber = 2;
  inline ::google::protobuf::int32 times() const;
  inline void set_times(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:FooRequest)
 private:
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_times();
  inline void clear_has_times();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* text_;
  ::google::protobuf::int32 times_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_helloworld_2eproto();
  friend void protobuf_AssignDesc_helloworld_2eproto();
  friend void protobuf_ShutdownFile_helloworld_2eproto();
  
  void InitAsDefaultInstance();
  static FooRequest* default_instance_;
};
// -------------------------------------------------------------------

class FooResponse : public ::google::protobuf::Message {
 public:
  FooResponse();
  virtual ~FooResponse();
  
  FooResponse(const FooResponse& from);
  
  inline FooResponse& operator=(const FooResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const FooResponse& default_instance();
  
  void Swap(FooResponse* other);
  
  // implements Message ----------------------------------------------
  
  FooResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FooResponse& from);
  void MergeFrom(const FooResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string text = 1;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 1;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  
  // optional bool result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline bool result() const;
  inline void set_result(bool value);
  
  // @@protoc_insertion_point(class_scope:FooResponse)
 private:
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_result();
  inline void clear_has_result();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* text_;
  bool result_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_helloworld_2eproto();
  friend void protobuf_AssignDesc_helloworld_2eproto();
  friend void protobuf_ShutdownFile_helloworld_2eproto();
  
  void InitAsDefaultInstance();
  static FooResponse* default_instance_;
};
// ===================================================================

class EchoService_Stub;

class EchoService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline EchoService() {};
 public:
  virtual ~EchoService();
  
  typedef EchoService_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void Foo(::google::protobuf::RpcController* controller,
                       const ::FooRequest* request,
                       ::FooResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void FooSecond(::google::protobuf::RpcController* controller,
                       const ::FooRequest* request,
                       ::FooResponse* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoService);
};

class EchoService_Stub : public EchoService {
 public:
  EchoService_Stub(::google::protobuf::RpcChannel* channel);
  EchoService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~EchoService_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements EchoService ------------------------------------------
  
  void Foo(::google::protobuf::RpcController* controller,
                       const ::FooRequest* request,
                       ::FooResponse* response,
                       ::google::protobuf::Closure* done);
  void FooSecond(::google::protobuf::RpcController* controller,
                       const ::FooRequest* request,
                       ::FooResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoService_Stub);
};


// ===================================================================


// ===================================================================

// FooRequest

// required string text = 1;
inline bool FooRequest::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FooRequest::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FooRequest::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FooRequest::clear_text() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& FooRequest::text() const {
  return *text_;
}
inline void FooRequest::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void FooRequest::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void FooRequest::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FooRequest::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  return text_;
}
inline ::std::string* FooRequest::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 times = 2;
inline bool FooRequest::has_times() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FooRequest::set_has_times() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FooRequest::clear_has_times() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FooRequest::clear_times() {
  times_ = 0;
  clear_has_times();
}
inline ::google::protobuf::int32 FooRequest::times() const {
  return times_;
}
inline void FooRequest::set_times(::google::protobuf::int32 value) {
  set_has_times();
  times_ = value;
}

// -------------------------------------------------------------------

// FooResponse

// required string text = 1;
inline bool FooResponse::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FooResponse::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FooResponse::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FooResponse::clear_text() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& FooResponse::text() const {
  return *text_;
}
inline void FooResponse::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void FooResponse::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void FooResponse::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FooResponse::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  return text_;
}
inline ::std::string* FooResponse::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool result = 2;
inline bool FooResponse::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FooResponse::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FooResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FooResponse::clear_result() {
  result_ = false;
  clear_has_result();
}
inline bool FooResponse::result() const {
  return result_;
}
inline void FooResponse::set_result(bool value) {
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_helloworld_2eproto__INCLUDED
