// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message.pb.hh"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace message {

namespace {

const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Node_MsgType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Node_NodeStatus_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_2eproto() {
  protobuf_AddDesc_message_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message.proto");
  GOOGLE_CHECK(file != NULL);
  Node_descriptor_ = file->message_type(0);
  static const int Node_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, sid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, pid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, alt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, kids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, restart_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, thread_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, domain_size_),
  };
  Node_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _has_bits_[0]),
      -1,
      -1,
      sizeof(Node),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _internal_metadata_),
      -1);
  Node_MsgType_descriptor_ = Node_descriptor_->enum_type(0);
  Node_NodeStatus_descriptor_ = Node_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Node_descriptor_, &Node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_2eproto() {
  delete Node::default_instance_;
  delete Node_reflection_;
}

void protobuf_AddDesc_message_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmessage.proto\022\007message\"\201\003\n\004Node\022#\n\004typ"
    "e\030\001 \002(\0162\025.message.Node.MsgType\022\013\n\003sid\030\002 "
    "\001(\005\022\013\n\003pid\030\003 \001(\005\022\013\n\003alt\030\004 \001(\005\022\014\n\004kids\030\005 "
    "\001(\005\022(\n\006status\030\006 \001(\0162\030.message.Node.NodeS"
    "tatus\022\022\n\nrestart_id\030\007 \001(\005\022\014\n\004time\030\010 \001(\004\022"
    "\021\n\tthread_id\030\t \001(\005\022\r\n\005label\030\n \001(\t\022\023\n\013dom"
    "ain_size\030\013 \001(\002\"(\n\007MsgType\022\010\n\004NODE\020\000\022\010\n\004D"
    "ONE\020\001\022\t\n\005START\020\002\"r\n\nNodeStatus\022\n\n\006SOLVED"
    "\020\000\022\n\n\006FAILED\020\001\022\n\n\006BRANCH\020\002\022\020\n\014UNDETERMIN"
    "ED\020\003\022\010\n\004STOP\020\004\022\n\n\006UNSTOP\020\005\022\013\n\007SKIPPED\020\006\022"
    "\013\n\007MERGING\020\007", 412);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message.proto", &protobuf_RegisterTypes);
  Node::default_instance_ = new Node();
  Node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_2eproto {
  StaticDescriptorInitializer_message_2eproto() {
    protobuf_AddDesc_message_2eproto();
  }
} static_descriptor_initializer_message_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Node_MsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_MsgType_descriptor_;
}
bool Node_MsgType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Node_MsgType Node::NODE;
const Node_MsgType Node::DONE;
const Node_MsgType Node::START;
const Node_MsgType Node::MsgType_MIN;
const Node_MsgType Node::MsgType_MAX;
const int Node::MsgType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Node_NodeStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_NodeStatus_descriptor_;
}
bool Node_NodeStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Node_NodeStatus Node::SOLVED;
const Node_NodeStatus Node::FAILED;
const Node_NodeStatus Node::BRANCH;
const Node_NodeStatus Node::UNDETERMINED;
const Node_NodeStatus Node::STOP;
const Node_NodeStatus Node::UNSTOP;
const Node_NodeStatus Node::SKIPPED;
const Node_NodeStatus Node::MERGING;
const Node_NodeStatus Node::NodeStatus_MIN;
const Node_NodeStatus Node::NodeStatus_MAX;
const int Node::NodeStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Node::kTypeFieldNumber;
const int Node::kSidFieldNumber;
const int Node::kPidFieldNumber;
const int Node::kAltFieldNumber;
const int Node::kKidsFieldNumber;
const int Node::kStatusFieldNumber;
const int Node::kRestartIdFieldNumber;
const int Node::kTimeFieldNumber;
const int Node::kThreadIdFieldNumber;
const int Node::kLabelFieldNumber;
const int Node::kDomainSizeFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.Node)
}

void Node::InitAsDefaultInstance() {
}

Node::Node(const Node& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.Node)
}

void Node::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  sid_ = 0;
  pid_ = 0;
  alt_ = 0;
  kids_ = 0;
  status_ = 0;
  restart_id_ = 0;
  time_ = GOOGLE_ULONGLONG(0);
  thread_id_ = 0;
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  domain_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  // @@protoc_insertion_point(destructor:message.Node)
  SharedDtor();
}

void Node::SharedDtor() {
  label_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New(::google::protobuf::Arena* arena) const {
  Node* n = new Node;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Node::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Node*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(type_, restart_id_);
  }
  if (_has_bits_[8 / 32] & 1792) {
    thread_id_ = 0;
    if (has_label()) {
      label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    domain_size_ = 0;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.Node)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.Node.MsgType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::Node_MsgType_IsValid(value)) {
            set_type(static_cast< ::message::Node_MsgType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sid;
        break;
      }

      // optional int32 sid = 2;
      case 2: {
        if (tag == 16) {
         parse_sid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sid_)));
          set_has_sid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_pid;
        break;
      }

      // optional int32 pid = 3;
      case 3: {
        if (tag == 24) {
         parse_pid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pid_)));
          set_has_pid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_alt;
        break;
      }

      // optional int32 alt = 4;
      case 4: {
        if (tag == 32) {
         parse_alt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &alt_)));
          set_has_alt();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_kids;
        break;
      }

      // optional int32 kids = 5;
      case 5: {
        if (tag == 40) {
         parse_kids:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &kids_)));
          set_has_kids();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_status;
        break;
      }

      // optional .message.Node.NodeStatus status = 6;
      case 6: {
        if (tag == 48) {
         parse_status:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::Node_NodeStatus_IsValid(value)) {
            set_status(static_cast< ::message::Node_NodeStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(6, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_restart_id;
        break;
      }

      // optional int32 restart_id = 7;
      case 7: {
        if (tag == 56) {
         parse_restart_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &restart_id_)));
          set_has_restart_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_time;
        break;
      }

      // optional uint64 time = 8;
      case 8: {
        if (tag == 64) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_thread_id;
        break;
      }

      // optional int32 thread_id = 9;
      case 9: {
        if (tag == 72) {
         parse_thread_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &thread_id_)));
          set_has_thread_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_label;
        break;
      }

      // optional string label = 10;
      case 10: {
        if (tag == 82) {
         parse_label:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->label().data(), this->label().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "message.Node.label");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(93)) goto parse_domain_size;
        break;
      }

      // optional float domain_size = 11;
      case 11: {
        if (tag == 93) {
         parse_domain_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &domain_size_)));
          set_has_domain_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.Node)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.Node)
  return false;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.Node)
  // required .message.Node.MsgType type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional int32 sid = 2;
  if (has_sid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sid(), output);
  }

  // optional int32 pid = 3;
  if (has_pid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->pid(), output);
  }

  // optional int32 alt = 4;
  if (has_alt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->alt(), output);
  }

  // optional int32 kids = 5;
  if (has_kids()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->kids(), output);
  }

  // optional .message.Node.NodeStatus status = 6;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->status(), output);
  }

  // optional int32 restart_id = 7;
  if (has_restart_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->restart_id(), output);
  }

  // optional uint64 time = 8;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->time(), output);
  }

  // optional int32 thread_id = 9;
  if (has_thread_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->thread_id(), output);
  }

  // optional string label = 10;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message.Node.label");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->label(), output);
  }

  // optional float domain_size = 11;
  if (has_domain_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->domain_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:message.Node)
}

::google::protobuf::uint8* Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.Node)
  // required .message.Node.MsgType type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional int32 sid = 2;
  if (has_sid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sid(), target);
  }

  // optional int32 pid = 3;
  if (has_pid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->pid(), target);
  }

  // optional int32 alt = 4;
  if (has_alt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->alt(), target);
  }

  // optional int32 kids = 5;
  if (has_kids()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->kids(), target);
  }

  // optional .message.Node.NodeStatus status = 6;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->status(), target);
  }

  // optional int32 restart_id = 7;
  if (has_restart_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->restart_id(), target);
  }

  // optional uint64 time = 8;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->time(), target);
  }

  // optional int32 thread_id = 9;
  if (has_thread_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->thread_id(), target);
  }

  // optional string label = 10;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message.Node.label");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->label(), target);
  }

  // optional float domain_size = 11;
  if (has_domain_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->domain_size(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.Node)
  return target;
}

int Node::ByteSize() const {
  int total_size = 0;

  // required .message.Node.MsgType type = 1;
  if (has_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }
  if (_has_bits_[1 / 32] & 254) {
    // optional int32 sid = 2;
    if (has_sid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sid());
    }

    // optional int32 pid = 3;
    if (has_pid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pid());
    }

    // optional int32 alt = 4;
    if (has_alt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->alt());
    }

    // optional int32 kids = 5;
    if (has_kids()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->kids());
    }

    // optional .message.Node.NodeStatus status = 6;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // optional int32 restart_id = 7;
    if (has_restart_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->restart_id());
    }

    // optional uint64 time = 8;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->time());
    }

  }
  if (_has_bits_[8 / 32] & 1792) {
    // optional int32 thread_id = 9;
    if (has_thread_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->thread_id());
    }

    // optional string label = 10;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->label());
    }

    // optional float domain_size = 11;
    if (has_domain_size()) {
      total_size += 1 + 4;
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_sid()) {
      set_sid(from.sid());
    }
    if (from.has_pid()) {
      set_pid(from.pid());
    }
    if (from.has_alt()) {
      set_alt(from.alt());
    }
    if (from.has_kids()) {
      set_kids(from.kids());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_restart_id()) {
      set_restart_id(from.restart_id());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_thread_id()) {
      set_thread_id(from.thread_id());
    }
    if (from.has_label()) {
      set_has_label();
      label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
    }
    if (from.has_domain_size()) {
      set_domain_size(from.domain_size());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Node::Swap(Node* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Node::InternalSwap(Node* other) {
  std::swap(type_, other->type_);
  std::swap(sid_, other->sid_);
  std::swap(pid_, other->pid_);
  std::swap(alt_, other->alt_);
  std::swap(kids_, other->kids_);
  std::swap(status_, other->status_);
  std::swap(restart_id_, other->restart_id_);
  std::swap(time_, other->time_);
  std::swap(thread_id_, other->thread_id_);
  label_.Swap(&other->label_);
  std::swap(domain_size_, other->domain_size_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Node

// required .message.Node.MsgType type = 1;
 bool Node::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void Node::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
 void Node::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
 void Node::clear_type() {
  type_ = 0;
  clear_has_type();
}
 ::message::Node_MsgType Node::type() const {
  // @@protoc_insertion_point(field_get:message.Node.type)
  return static_cast< ::message::Node_MsgType >(type_);
}
 void Node::set_type(::message::Node_MsgType value) {
  assert(::message::Node_MsgType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:message.Node.type)
}

// optional int32 sid = 2;
 bool Node::has_sid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void Node::set_has_sid() {
  _has_bits_[0] |= 0x00000002u;
}
 void Node::clear_has_sid() {
  _has_bits_[0] &= ~0x00000002u;
}
 void Node::clear_sid() {
  sid_ = 0;
  clear_has_sid();
}
 ::google::protobuf::int32 Node::sid() const {
  // @@protoc_insertion_point(field_get:message.Node.sid)
  return sid_;
}
 void Node::set_sid(::google::protobuf::int32 value) {
  set_has_sid();
  sid_ = value;
  // @@protoc_insertion_point(field_set:message.Node.sid)
}

// optional int32 pid = 3;
 bool Node::has_pid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void Node::set_has_pid() {
  _has_bits_[0] |= 0x00000004u;
}
 void Node::clear_has_pid() {
  _has_bits_[0] &= ~0x00000004u;
}
 void Node::clear_pid() {
  pid_ = 0;
  clear_has_pid();
}
 ::google::protobuf::int32 Node::pid() const {
  // @@protoc_insertion_point(field_get:message.Node.pid)
  return pid_;
}
 void Node::set_pid(::google::protobuf::int32 value) {
  set_has_pid();
  pid_ = value;
  // @@protoc_insertion_point(field_set:message.Node.pid)
}

// optional int32 alt = 4;
 bool Node::has_alt() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
 void Node::set_has_alt() {
  _has_bits_[0] |= 0x00000008u;
}
 void Node::clear_has_alt() {
  _has_bits_[0] &= ~0x00000008u;
}
 void Node::clear_alt() {
  alt_ = 0;
  clear_has_alt();
}
 ::google::protobuf::int32 Node::alt() const {
  // @@protoc_insertion_point(field_get:message.Node.alt)
  return alt_;
}
 void Node::set_alt(::google::protobuf::int32 value) {
  set_has_alt();
  alt_ = value;
  // @@protoc_insertion_point(field_set:message.Node.alt)
}

// optional int32 kids = 5;
 bool Node::has_kids() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
 void Node::set_has_kids() {
  _has_bits_[0] |= 0x00000010u;
}
 void Node::clear_has_kids() {
  _has_bits_[0] &= ~0x00000010u;
}
 void Node::clear_kids() {
  kids_ = 0;
  clear_has_kids();
}
 ::google::protobuf::int32 Node::kids() const {
  // @@protoc_insertion_point(field_get:message.Node.kids)
  return kids_;
}
 void Node::set_kids(::google::protobuf::int32 value) {
  set_has_kids();
  kids_ = value;
  // @@protoc_insertion_point(field_set:message.Node.kids)
}

// optional .message.Node.NodeStatus status = 6;
 bool Node::has_status() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
 void Node::set_has_status() {
  _has_bits_[0] |= 0x00000020u;
}
 void Node::clear_has_status() {
  _has_bits_[0] &= ~0x00000020u;
}
 void Node::clear_status() {
  status_ = 0;
  clear_has_status();
}
 ::message::Node_NodeStatus Node::status() const {
  // @@protoc_insertion_point(field_get:message.Node.status)
  return static_cast< ::message::Node_NodeStatus >(status_);
}
 void Node::set_status(::message::Node_NodeStatus value) {
  assert(::message::Node_NodeStatus_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:message.Node.status)
}

// optional int32 restart_id = 7;
 bool Node::has_restart_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
 void Node::set_has_restart_id() {
  _has_bits_[0] |= 0x00000040u;
}
 void Node::clear_has_restart_id() {
  _has_bits_[0] &= ~0x00000040u;
}
 void Node::clear_restart_id() {
  restart_id_ = 0;
  clear_has_restart_id();
}
 ::google::protobuf::int32 Node::restart_id() const {
  // @@protoc_insertion_point(field_get:message.Node.restart_id)
  return restart_id_;
}
 void Node::set_restart_id(::google::protobuf::int32 value) {
  set_has_restart_id();
  restart_id_ = value;
  // @@protoc_insertion_point(field_set:message.Node.restart_id)
}

// optional uint64 time = 8;
 bool Node::has_time() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
 void Node::set_has_time() {
  _has_bits_[0] |= 0x00000080u;
}
 void Node::clear_has_time() {
  _has_bits_[0] &= ~0x00000080u;
}
 void Node::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
 ::google::protobuf::uint64 Node::time() const {
  // @@protoc_insertion_point(field_get:message.Node.time)
  return time_;
}
 void Node::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:message.Node.time)
}

// optional int32 thread_id = 9;
 bool Node::has_thread_id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
 void Node::set_has_thread_id() {
  _has_bits_[0] |= 0x00000100u;
}
 void Node::clear_has_thread_id() {
  _has_bits_[0] &= ~0x00000100u;
}
 void Node::clear_thread_id() {
  thread_id_ = 0;
  clear_has_thread_id();
}
 ::google::protobuf::int32 Node::thread_id() const {
  // @@protoc_insertion_point(field_get:message.Node.thread_id)
  return thread_id_;
}
 void Node::set_thread_id(::google::protobuf::int32 value) {
  set_has_thread_id();
  thread_id_ = value;
  // @@protoc_insertion_point(field_set:message.Node.thread_id)
}

// optional string label = 10;
 bool Node::has_label() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
 void Node::set_has_label() {
  _has_bits_[0] |= 0x00000200u;
}
 void Node::clear_has_label() {
  _has_bits_[0] &= ~0x00000200u;
}
 void Node::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_label();
}
 const ::std::string& Node::label() const {
  // @@protoc_insertion_point(field_get:message.Node.label)
  return label_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Node::set_label(const ::std::string& value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:message.Node.label)
}
 void Node::set_label(const char* value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:message.Node.label)
}
 void Node::set_label(const char* value, size_t size) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:message.Node.label)
}
 ::std::string* Node::mutable_label() {
  set_has_label();
  // @@protoc_insertion_point(field_mutable:message.Node.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Node::release_label() {
  clear_has_label();
  return label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Node::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    set_has_label();
  } else {
    clear_has_label();
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:message.Node.label)
}

// optional float domain_size = 11;
 bool Node::has_domain_size() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
 void Node::set_has_domain_size() {
  _has_bits_[0] |= 0x00000400u;
}
 void Node::clear_has_domain_size() {
  _has_bits_[0] &= ~0x00000400u;
}
 void Node::clear_domain_size() {
  domain_size_ = 0;
  clear_has_domain_size();
}
 float Node::domain_size() const {
  // @@protoc_insertion_point(field_get:message.Node.domain_size)
  return domain_size_;
}
 void Node::set_domain_size(float value) {
  set_has_domain_size();
  domain_size_ = value;
  // @@protoc_insertion_point(field_set:message.Node.domain_size)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
