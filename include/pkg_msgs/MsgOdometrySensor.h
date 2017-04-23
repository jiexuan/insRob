// Generated by gencpp from file pkg_msgs/MsgOdometrySensor.msg
// DO NOT EDIT!


#ifndef PKG_MSGS_MESSAGE_MSGODOMETRYSENSOR_H
#define PKG_MSGS_MESSAGE_MSGODOMETRYSENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pkg_msgs
{
template <class ContainerAllocator>
struct MsgOdometrySensor_
{
  typedef MsgOdometrySensor_<ContainerAllocator> Type;

  MsgOdometrySensor_()
    : header()
    , type()
    , vlf(0.0)
    , vlb(0.0)
    , vrf(0.0)
    , vrb(0.0)
    , vth(0.0)
    , th(0.0)  {
    }
  MsgOdometrySensor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(_alloc)
    , vlf(0.0)
    , vlb(0.0)
    , vrf(0.0)
    , vrb(0.0)
    , vth(0.0)
    , th(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef double _vlf_type;
  _vlf_type vlf;

   typedef double _vlb_type;
  _vlb_type vlb;

   typedef double _vrf_type;
  _vrf_type vrf;

   typedef double _vrb_type;
  _vrb_type vrb;

   typedef double _vth_type;
  _vth_type vth;

   typedef double _th_type;
  _th_type th;




  typedef boost::shared_ptr< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> const> ConstPtr;

}; // struct MsgOdometrySensor_

typedef ::pkg_msgs::MsgOdometrySensor_<std::allocator<void> > MsgOdometrySensor;

typedef boost::shared_ptr< ::pkg_msgs::MsgOdometrySensor > MsgOdometrySensorPtr;
typedef boost::shared_ptr< ::pkg_msgs::MsgOdometrySensor const> MsgOdometrySensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pkg_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pkg_msgs': ['/home/rhett/ws_nav/src/pkg_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52adc38bd2ece835ba339fd91a3a6713";
  }

  static const char* value(const ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52adc38bd2ece835ULL;
  static const uint64_t static_value2 = 0xba339fd91a3a6713ULL;
};

template<class ContainerAllocator>
struct DataType< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pkg_msgs/MsgOdometrySensor";
  }

  static const char* value(const ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
string type		\n\
float64 vlf\n\
float64 vlb\n\
float64 vrf\n\
float64 vrb\n\
float64 vth\n\
float64 th\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.vlf);
      stream.next(m.vlb);
      stream.next(m.vrf);
      stream.next(m.vrb);
      stream.next(m.vth);
      stream.next(m.th);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgOdometrySensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pkg_msgs::MsgOdometrySensor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "vlf: ";
    Printer<double>::stream(s, indent + "  ", v.vlf);
    s << indent << "vlb: ";
    Printer<double>::stream(s, indent + "  ", v.vlb);
    s << indent << "vrf: ";
    Printer<double>::stream(s, indent + "  ", v.vrf);
    s << indent << "vrb: ";
    Printer<double>::stream(s, indent + "  ", v.vrb);
    s << indent << "vth: ";
    Printer<double>::stream(s, indent + "  ", v.vth);
    s << indent << "th: ";
    Printer<double>::stream(s, indent + "  ", v.th);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PKG_MSGS_MESSAGE_MSGODOMETRYSENSOR_H
