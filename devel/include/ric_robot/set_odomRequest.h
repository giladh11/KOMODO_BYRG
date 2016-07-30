// Generated by gencpp from file ric_robot/set_odomRequest.msg
// DO NOT EDIT!


#ifndef RIC_ROBOT_MESSAGE_SET_ODOMREQUEST_H
#define RIC_ROBOT_MESSAGE_SET_ODOMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ric_robot
{
template <class ContainerAllocator>
struct set_odomRequest_
{
  typedef set_odomRequest_<ContainerAllocator> Type;

  set_odomRequest_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  set_odomRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;




  typedef boost::shared_ptr< ::ric_robot::set_odomRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_robot::set_odomRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_odomRequest_

typedef ::ric_robot::set_odomRequest_<std::allocator<void> > set_odomRequest;

typedef boost::shared_ptr< ::ric_robot::set_odomRequest > set_odomRequestPtr;
typedef boost::shared_ptr< ::ric_robot::set_odomRequest const> set_odomRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_robot::set_odomRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_robot::set_odomRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ric_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ric_robot': ['/users/studs/bsc/2015/barakgo/catkin_ws/src/ric_robot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ric_robot::set_odomRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_robot::set_odomRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::set_odomRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::set_odomRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::set_odomRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::set_odomRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_robot::set_odomRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::ric_robot::set_odomRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa130bc60ee651385ULL;
  static const uint64_t static_value2 = 0x5dc62ea83fcc5b20ULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_robot::set_odomRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_robot/set_odomRequest";
  }

  static const char* value(const ::ric_robot::set_odomRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_robot::set_odomRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 theta\n\
";
  }

  static const char* value(const ::ric_robot::set_odomRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_robot::set_odomRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct set_odomRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_robot::set_odomRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_robot::set_odomRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_ROBOT_MESSAGE_SET_ODOMREQUEST_H
