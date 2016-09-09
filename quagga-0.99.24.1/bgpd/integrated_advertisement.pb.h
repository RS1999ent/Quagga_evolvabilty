// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: integrated_advertisement.proto

#ifndef PROTOBUF_integrated_5fadvertisement_2eproto__INCLUDED
#define PROTOBUF_integrated_5fadvertisement_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_integrated_5fadvertisement_2eproto();
void protobuf_AssignDesc_integrated_5fadvertisement_2eproto();
void protobuf_ShutdownFile_integrated_5fadvertisement_2eproto();

class IntegratedAdvertisement;
class PathGroupDescriptor;
class HopDescriptor;
class KeyValue;

enum Protocol {
  P_UNKNOWN = 0,
  P_WISER = 1,
  P_PATHLETS = 2,
  P_BASELINE = 3
};
bool Protocol_IsValid(int value);
const Protocol Protocol_MIN = P_UNKNOWN;
const Protocol Protocol_MAX = P_BASELINE;
const int Protocol_ARRAYSIZE = Protocol_MAX + 1;

const ::google::protobuf::EnumDescriptor* Protocol_descriptor();
inline const ::std::string& Protocol_Name(Protocol value) {
  return ::google::protobuf::internal::NameOfEnum(
    Protocol_descriptor(), value);
}
inline bool Protocol_Parse(
    const ::std::string& name, Protocol* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Protocol>(
    Protocol_descriptor(), name, value);
}
// ===================================================================

class IntegratedAdvertisement : public ::google::protobuf::Message {
 public:
  IntegratedAdvertisement();
  virtual ~IntegratedAdvertisement();

  IntegratedAdvertisement(const IntegratedAdvertisement& from);

  inline IntegratedAdvertisement& operator=(const IntegratedAdvertisement& from) {
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
  static const IntegratedAdvertisement& default_instance();

  void Swap(IntegratedAdvertisement* other);

  // implements Message ----------------------------------------------

  IntegratedAdvertisement* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IntegratedAdvertisement& from);
  void MergeFrom(const IntegratedAdvertisement& from);
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

  // repeated .PathGroupDescriptor path_descriptors = 1;
  inline int path_descriptors_size() const;
  inline void clear_path_descriptors();
  static const int kPathDescriptorsFieldNumber = 1;
  inline const ::PathGroupDescriptor& path_descriptors(int index) const;
  inline ::PathGroupDescriptor* mutable_path_descriptors(int index);
  inline ::PathGroupDescriptor* add_path_descriptors();
  inline const ::google::protobuf::RepeatedPtrField< ::PathGroupDescriptor >&
      path_descriptors() const;
  inline ::google::protobuf::RepeatedPtrField< ::PathGroupDescriptor >*
      mutable_path_descriptors();

  // repeated .HopDescriptor hop_descriptors = 2;
  inline int hop_descriptors_size() const;
  inline void clear_hop_descriptors();
  static const int kHopDescriptorsFieldNumber = 2;
  inline const ::HopDescriptor& hop_descriptors(int index) const;
  inline ::HopDescriptor* mutable_hop_descriptors(int index);
  inline ::HopDescriptor* add_hop_descriptors();
  inline const ::google::protobuf::RepeatedPtrField< ::HopDescriptor >&
      hop_descriptors() const;
  inline ::google::protobuf::RepeatedPtrField< ::HopDescriptor >*
      mutable_hop_descriptors();

  // @@protoc_insertion_point(class_scope:IntegratedAdvertisement)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::PathGroupDescriptor > path_descriptors_;
  ::google::protobuf::RepeatedPtrField< ::HopDescriptor > hop_descriptors_;
  friend void  protobuf_AddDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_AssignDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_ShutdownFile_integrated_5fadvertisement_2eproto();

  void InitAsDefaultInstance();
  static IntegratedAdvertisement* default_instance_;
};
// -------------------------------------------------------------------

class PathGroupDescriptor : public ::google::protobuf::Message {
 public:
  PathGroupDescriptor();
  virtual ~PathGroupDescriptor();

  PathGroupDescriptor(const PathGroupDescriptor& from);

  inline PathGroupDescriptor& operator=(const PathGroupDescriptor& from) {
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
  static const PathGroupDescriptor& default_instance();

  void Swap(PathGroupDescriptor* other);

  // implements Message ----------------------------------------------

  PathGroupDescriptor* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PathGroupDescriptor& from);
  void MergeFrom(const PathGroupDescriptor& from);
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

  // optional .Protocol protocol = 1;
  inline bool has_protocol() const;
  inline void clear_protocol();
  static const int kProtocolFieldNumber = 1;
  inline ::Protocol protocol() const;
  inline void set_protocol(::Protocol value);

  // repeated .KeyValue key_values = 2;
  inline int key_values_size() const;
  inline void clear_key_values();
  static const int kKeyValuesFieldNumber = 2;
  inline const ::KeyValue& key_values(int index) const;
  inline ::KeyValue* mutable_key_values(int index);
  inline ::KeyValue* add_key_values();
  inline const ::google::protobuf::RepeatedPtrField< ::KeyValue >&
      key_values() const;
  inline ::google::protobuf::RepeatedPtrField< ::KeyValue >*
      mutable_key_values();

  // @@protoc_insertion_point(class_scope:PathGroupDescriptor)
 private:
  inline void set_has_protocol();
  inline void clear_has_protocol();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::KeyValue > key_values_;
  int protocol_;
  friend void  protobuf_AddDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_AssignDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_ShutdownFile_integrated_5fadvertisement_2eproto();

  void InitAsDefaultInstance();
  static PathGroupDescriptor* default_instance_;
};
// -------------------------------------------------------------------

class HopDescriptor : public ::google::protobuf::Message {
 public:
  HopDescriptor();
  virtual ~HopDescriptor();

  HopDescriptor(const HopDescriptor& from);

  inline HopDescriptor& operator=(const HopDescriptor& from) {
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
  static const HopDescriptor& default_instance();

  void Swap(HopDescriptor* other);

  // implements Message ----------------------------------------------

  HopDescriptor* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HopDescriptor& from);
  void MergeFrom(const HopDescriptor& from);
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

  // optional .Protocol protocol = 1;
  inline bool has_protocol() const;
  inline void clear_protocol();
  static const int kProtocolFieldNumber = 1;
  inline ::Protocol protocol() const;
  inline void set_protocol(::Protocol value);

  // repeated .KeyValue key_values = 2;
  inline int key_values_size() const;
  inline void clear_key_values();
  static const int kKeyValuesFieldNumber = 2;
  inline const ::KeyValue& key_values(int index) const;
  inline ::KeyValue* mutable_key_values(int index);
  inline ::KeyValue* add_key_values();
  inline const ::google::protobuf::RepeatedPtrField< ::KeyValue >&
      key_values() const;
  inline ::google::protobuf::RepeatedPtrField< ::KeyValue >*
      mutable_key_values();

  // @@protoc_insertion_point(class_scope:HopDescriptor)
 private:
  inline void set_has_protocol();
  inline void clear_has_protocol();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::KeyValue > key_values_;
  int protocol_;
  friend void  protobuf_AddDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_AssignDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_ShutdownFile_integrated_5fadvertisement_2eproto();

  void InitAsDefaultInstance();
  static HopDescriptor* default_instance_;
};
// -------------------------------------------------------------------

class KeyValue : public ::google::protobuf::Message {
 public:
  KeyValue();
  virtual ~KeyValue();

  KeyValue(const KeyValue& from);

  inline KeyValue& operator=(const KeyValue& from) {
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
  static const KeyValue& default_instance();

  void Swap(KeyValue* other);

  // implements Message ----------------------------------------------

  KeyValue* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KeyValue& from);
  void MergeFrom(const KeyValue& from);
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

  // optional string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // optional string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:KeyValue)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* key_;
  ::std::string* value_;
  friend void  protobuf_AddDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_AssignDesc_integrated_5fadvertisement_2eproto();
  friend void protobuf_ShutdownFile_integrated_5fadvertisement_2eproto();

  void InitAsDefaultInstance();
  static KeyValue* default_instance_;
};
// ===================================================================


// ===================================================================

// IntegratedAdvertisement

// repeated .PathGroupDescriptor path_descriptors = 1;
inline int IntegratedAdvertisement::path_descriptors_size() const {
  return path_descriptors_.size();
}
inline void IntegratedAdvertisement::clear_path_descriptors() {
  path_descriptors_.Clear();
}
inline const ::PathGroupDescriptor& IntegratedAdvertisement::path_descriptors(int index) const {
  // @@protoc_insertion_point(field_get:IntegratedAdvertisement.path_descriptors)
  return path_descriptors_.Get(index);
}
inline ::PathGroupDescriptor* IntegratedAdvertisement::mutable_path_descriptors(int index) {
  // @@protoc_insertion_point(field_mutable:IntegratedAdvertisement.path_descriptors)
  return path_descriptors_.Mutable(index);
}
inline ::PathGroupDescriptor* IntegratedAdvertisement::add_path_descriptors() {
  // @@protoc_insertion_point(field_add:IntegratedAdvertisement.path_descriptors)
  return path_descriptors_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PathGroupDescriptor >&
IntegratedAdvertisement::path_descriptors() const {
  // @@protoc_insertion_point(field_list:IntegratedAdvertisement.path_descriptors)
  return path_descriptors_;
}
inline ::google::protobuf::RepeatedPtrField< ::PathGroupDescriptor >*
IntegratedAdvertisement::mutable_path_descriptors() {
  // @@protoc_insertion_point(field_mutable_list:IntegratedAdvertisement.path_descriptors)
  return &path_descriptors_;
}

// repeated .HopDescriptor hop_descriptors = 2;
inline int IntegratedAdvertisement::hop_descriptors_size() const {
  return hop_descriptors_.size();
}
inline void IntegratedAdvertisement::clear_hop_descriptors() {
  hop_descriptors_.Clear();
}
inline const ::HopDescriptor& IntegratedAdvertisement::hop_descriptors(int index) const {
  // @@protoc_insertion_point(field_get:IntegratedAdvertisement.hop_descriptors)
  return hop_descriptors_.Get(index);
}
inline ::HopDescriptor* IntegratedAdvertisement::mutable_hop_descriptors(int index) {
  // @@protoc_insertion_point(field_mutable:IntegratedAdvertisement.hop_descriptors)
  return hop_descriptors_.Mutable(index);
}
inline ::HopDescriptor* IntegratedAdvertisement::add_hop_descriptors() {
  // @@protoc_insertion_point(field_add:IntegratedAdvertisement.hop_descriptors)
  return hop_descriptors_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::HopDescriptor >&
IntegratedAdvertisement::hop_descriptors() const {
  // @@protoc_insertion_point(field_list:IntegratedAdvertisement.hop_descriptors)
  return hop_descriptors_;
}
inline ::google::protobuf::RepeatedPtrField< ::HopDescriptor >*
IntegratedAdvertisement::mutable_hop_descriptors() {
  // @@protoc_insertion_point(field_mutable_list:IntegratedAdvertisement.hop_descriptors)
  return &hop_descriptors_;
}

// -------------------------------------------------------------------

// PathGroupDescriptor

// optional .Protocol protocol = 1;
inline bool PathGroupDescriptor::has_protocol() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PathGroupDescriptor::set_has_protocol() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PathGroupDescriptor::clear_has_protocol() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PathGroupDescriptor::clear_protocol() {
  protocol_ = 0;
  clear_has_protocol();
}
inline ::Protocol PathGroupDescriptor::protocol() const {
  // @@protoc_insertion_point(field_get:PathGroupDescriptor.protocol)
  return static_cast< ::Protocol >(protocol_);
}
inline void PathGroupDescriptor::set_protocol(::Protocol value) {
  assert(::Protocol_IsValid(value));
  set_has_protocol();
  protocol_ = value;
  // @@protoc_insertion_point(field_set:PathGroupDescriptor.protocol)
}

// repeated .KeyValue key_values = 2;
inline int PathGroupDescriptor::key_values_size() const {
  return key_values_.size();
}
inline void PathGroupDescriptor::clear_key_values() {
  key_values_.Clear();
}
inline const ::KeyValue& PathGroupDescriptor::key_values(int index) const {
  // @@protoc_insertion_point(field_get:PathGroupDescriptor.key_values)
  return key_values_.Get(index);
}
inline ::KeyValue* PathGroupDescriptor::mutable_key_values(int index) {
  // @@protoc_insertion_point(field_mutable:PathGroupDescriptor.key_values)
  return key_values_.Mutable(index);
}
inline ::KeyValue* PathGroupDescriptor::add_key_values() {
  // @@protoc_insertion_point(field_add:PathGroupDescriptor.key_values)
  return key_values_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::KeyValue >&
PathGroupDescriptor::key_values() const {
  // @@protoc_insertion_point(field_list:PathGroupDescriptor.key_values)
  return key_values_;
}
inline ::google::protobuf::RepeatedPtrField< ::KeyValue >*
PathGroupDescriptor::mutable_key_values() {
  // @@protoc_insertion_point(field_mutable_list:PathGroupDescriptor.key_values)
  return &key_values_;
}

// -------------------------------------------------------------------

// HopDescriptor

// optional .Protocol protocol = 1;
inline bool HopDescriptor::has_protocol() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HopDescriptor::set_has_protocol() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HopDescriptor::clear_has_protocol() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HopDescriptor::clear_protocol() {
  protocol_ = 0;
  clear_has_protocol();
}
inline ::Protocol HopDescriptor::protocol() const {
  // @@protoc_insertion_point(field_get:HopDescriptor.protocol)
  return static_cast< ::Protocol >(protocol_);
}
inline void HopDescriptor::set_protocol(::Protocol value) {
  assert(::Protocol_IsValid(value));
  set_has_protocol();
  protocol_ = value;
  // @@protoc_insertion_point(field_set:HopDescriptor.protocol)
}

// repeated .KeyValue key_values = 2;
inline int HopDescriptor::key_values_size() const {
  return key_values_.size();
}
inline void HopDescriptor::clear_key_values() {
  key_values_.Clear();
}
inline const ::KeyValue& HopDescriptor::key_values(int index) const {
  // @@protoc_insertion_point(field_get:HopDescriptor.key_values)
  return key_values_.Get(index);
}
inline ::KeyValue* HopDescriptor::mutable_key_values(int index) {
  // @@protoc_insertion_point(field_mutable:HopDescriptor.key_values)
  return key_values_.Mutable(index);
}
inline ::KeyValue* HopDescriptor::add_key_values() {
  // @@protoc_insertion_point(field_add:HopDescriptor.key_values)
  return key_values_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::KeyValue >&
HopDescriptor::key_values() const {
  // @@protoc_insertion_point(field_list:HopDescriptor.key_values)
  return key_values_;
}
inline ::google::protobuf::RepeatedPtrField< ::KeyValue >*
HopDescriptor::mutable_key_values() {
  // @@protoc_insertion_point(field_mutable_list:HopDescriptor.key_values)
  return &key_values_;
}

// -------------------------------------------------------------------

// KeyValue

// optional string key = 1;
inline bool KeyValue::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void KeyValue::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void KeyValue::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void KeyValue::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& KeyValue::key() const {
  // @@protoc_insertion_point(field_get:KeyValue.key)
  return *key_;
}
inline void KeyValue::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set:KeyValue.key)
}
inline void KeyValue::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set_char:KeyValue.key)
}
inline void KeyValue::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:KeyValue.key)
}
inline ::std::string* KeyValue::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:KeyValue.key)
  return key_;
}
inline ::std::string* KeyValue::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void KeyValue::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:KeyValue.key)
}

// optional string value = 2;
inline bool KeyValue::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void KeyValue::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void KeyValue::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void KeyValue::clear_value() {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& KeyValue::value() const {
  // @@protoc_insertion_point(field_get:KeyValue.value)
  return *value_;
}
inline void KeyValue::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set:KeyValue.value)
}
inline void KeyValue::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set_char:KeyValue.value)
}
inline void KeyValue::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:KeyValue.value)
}
inline ::std::string* KeyValue::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:KeyValue.value)
  return value_;
}
inline ::std::string* KeyValue::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void KeyValue::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:KeyValue.value)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Protocol> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Protocol>() {
  return ::Protocol_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_integrated_5fadvertisement_2eproto__INCLUDED
