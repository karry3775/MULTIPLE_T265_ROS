// Generated by gencpp from file multi_pub_package/stateMsg.msg
// DO NOT EDIT!


#ifndef MULTI_PUB_PACKAGE_MESSAGE_STATEMSG_H
#define MULTI_PUB_PACKAGE_MESSAGE_STATEMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multi_pub_package
{
template <class ContainerAllocator>
struct stateMsg_
{
  typedef stateMsg_<ContainerAllocator> Type;

  stateMsg_()
    : sN1(0.0)
    , x1(0.0)
    , y1(0.0)
    , yaw1(0.0)
    , sN2(0.0)
    , x2(0.0)
    , y2(0.0)
    , yaw2(0.0)  {
    }
  stateMsg_(const ContainerAllocator& _alloc)
    : sN1(0.0)
    , x1(0.0)
    , y1(0.0)
    , yaw1(0.0)
    , sN2(0.0)
    , x2(0.0)
    , y2(0.0)
    , yaw2(0.0)  {
  (void)_alloc;
    }



   typedef double _sN1_type;
  _sN1_type sN1;

   typedef double _x1_type;
  _x1_type x1;

   typedef double _y1_type;
  _y1_type y1;

   typedef double _yaw1_type;
  _yaw1_type yaw1;

   typedef double _sN2_type;
  _sN2_type sN2;

   typedef double _x2_type;
  _x2_type x2;

   typedef double _y2_type;
  _y2_type y2;

   typedef double _yaw2_type;
  _yaw2_type yaw2;





  typedef boost::shared_ptr< ::multi_pub_package::stateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_pub_package::stateMsg_<ContainerAllocator> const> ConstPtr;

}; // struct stateMsg_

typedef ::multi_pub_package::stateMsg_<std::allocator<void> > stateMsg;

typedef boost::shared_ptr< ::multi_pub_package::stateMsg > stateMsgPtr;
typedef boost::shared_ptr< ::multi_pub_package::stateMsg const> stateMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_pub_package::stateMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_pub_package::stateMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multi_pub_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'multi_pub_package': ['/home/kartik/REALSENSE/multi_cam_ws/src/multi_pub_package/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multi_pub_package::stateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_pub_package::stateMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_pub_package::stateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_pub_package::stateMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_pub_package::stateMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_pub_package::stateMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_pub_package::stateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf8f7c0f25f41a1e73275e44245843a9";
  }

  static const char* value(const ::multi_pub_package::stateMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf8f7c0f25f41a1eULL;
  static const uint64_t static_value2 = 0x73275e44245843a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_pub_package::stateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_pub_package/stateMsg";
  }

  static const char* value(const ::multi_pub_package::stateMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_pub_package::stateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 sN1\n"
"float64 x1\n"
"float64 y1\n"
"float64 yaw1\n"
"float64 sN2\n"
"float64 x2\n"
"float64 y2\n"
"float64 yaw2\n"
;
  }

  static const char* value(const ::multi_pub_package::stateMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_pub_package::stateMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sN1);
      stream.next(m.x1);
      stream.next(m.y1);
      stream.next(m.yaw1);
      stream.next(m.sN2);
      stream.next(m.x2);
      stream.next(m.y2);
      stream.next(m.yaw2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct stateMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_pub_package::stateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_pub_package::stateMsg_<ContainerAllocator>& v)
  {
    s << indent << "sN1: ";
    Printer<double>::stream(s, indent + "  ", v.sN1);
    s << indent << "x1: ";
    Printer<double>::stream(s, indent + "  ", v.x1);
    s << indent << "y1: ";
    Printer<double>::stream(s, indent + "  ", v.y1);
    s << indent << "yaw1: ";
    Printer<double>::stream(s, indent + "  ", v.yaw1);
    s << indent << "sN2: ";
    Printer<double>::stream(s, indent + "  ", v.sN2);
    s << indent << "x2: ";
    Printer<double>::stream(s, indent + "  ", v.x2);
    s << indent << "y2: ";
    Printer<double>::stream(s, indent + "  ", v.y2);
    s << indent << "yaw2: ";
    Printer<double>::stream(s, indent + "  ", v.yaw2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_PUB_PACKAGE_MESSAGE_STATEMSG_H