// Generated by gencpp from file ric_board/get_devsResponse.msg
// DO NOT EDIT!


#ifndef RIC_BOARD_MESSAGE_GET_DEVSRESPONSE_H
#define RIC_BOARD_MESSAGE_GET_DEVSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ric_board/MonitorDevs.h>

namespace ric_board
{
template <class ContainerAllocator>
struct get_devsResponse_
{
  typedef get_devsResponse_<ContainerAllocator> Type;

  get_devsResponse_()
    : devs()  {
    }
  get_devsResponse_(const ContainerAllocator& _alloc)
    : devs(_alloc)  {
    }



   typedef  ::ric_board::MonitorDevs_<ContainerAllocator>  _devs_type;
  _devs_type devs;




  typedef boost::shared_ptr< ::ric_board::get_devsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_board::get_devsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_devsResponse_

typedef ::ric_board::get_devsResponse_<std::allocator<void> > get_devsResponse;

typedef boost::shared_ptr< ::ric_board::get_devsResponse > get_devsResponsePtr;
typedef boost::shared_ptr< ::ric_board::get_devsResponse const> get_devsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_board::get_devsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_board::get_devsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ric_board

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'ric_board': ['/users/studs/bsc/2015/barakgo/catkin_ws/src/ric_board/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::get_devsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::get_devsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::get_devsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::get_devsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::get_devsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::get_devsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_board::get_devsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c766509cdbff5519fdf3ea936e26495";
  }

  static const char* value(const ::ric_board::get_devsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c766509cdbff551ULL;
  static const uint64_t static_value2 = 0x9fdf3ea936e26495ULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_board::get_devsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_board/get_devsResponse";
  }

  static const char* value(const ::ric_board::get_devsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_board::get_devsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MonitorDevs devs\n\
\n\
\n\
================================================================================\n\
MSG: ric_board/MonitorDevs\n\
ric_board/DevStatus[] devs\n\
\n\
================================================================================\n\
MSG: ric_board/DevStatus\n\
string devName\n\
int8 type\n\
float32[] values\n\
\n\
";
  }

  static const char* value(const ::ric_board::get_devsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_board::get_devsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.devs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct get_devsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_board::get_devsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_board::get_devsResponse_<ContainerAllocator>& v)
  {
    s << indent << "devs: ";
    s << std::endl;
    Printer< ::ric_board::MonitorDevs_<ContainerAllocator> >::stream(s, indent + "  ", v.devs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_BOARD_MESSAGE_GET_DEVSRESPONSE_H
