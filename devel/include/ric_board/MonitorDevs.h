// Generated by gencpp from file ric_board/MonitorDevs.msg
// DO NOT EDIT!


#ifndef RIC_BOARD_MESSAGE_MONITORDEVS_H
#define RIC_BOARD_MESSAGE_MONITORDEVS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ric_board/DevStatus.h>

namespace ric_board
{
template <class ContainerAllocator>
struct MonitorDevs_
{
  typedef MonitorDevs_<ContainerAllocator> Type;

  MonitorDevs_()
    : devs()  {
    }
  MonitorDevs_(const ContainerAllocator& _alloc)
    : devs(_alloc)  {
    }



   typedef std::vector< ::ric_board::DevStatus_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ric_board::DevStatus_<ContainerAllocator> >::other >  _devs_type;
  _devs_type devs;




  typedef boost::shared_ptr< ::ric_board::MonitorDevs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_board::MonitorDevs_<ContainerAllocator> const> ConstPtr;

}; // struct MonitorDevs_

typedef ::ric_board::MonitorDevs_<std::allocator<void> > MonitorDevs;

typedef boost::shared_ptr< ::ric_board::MonitorDevs > MonitorDevsPtr;
typedef boost::shared_ptr< ::ric_board::MonitorDevs const> MonitorDevsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_board::MonitorDevs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_board::MonitorDevs_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ric_board::MonitorDevs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::MonitorDevs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::MonitorDevs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::MonitorDevs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::MonitorDevs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::MonitorDevs_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_board::MonitorDevs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4abe1a9f2ea3d5e4b56e11eaa19a77e";
  }

  static const char* value(const ::ric_board::MonitorDevs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4abe1a9f2ea3d5eULL;
  static const uint64_t static_value2 = 0x4b56e11eaa19a77eULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_board::MonitorDevs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_board/MonitorDevs";
  }

  static const char* value(const ::ric_board::MonitorDevs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_board::MonitorDevs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_board/DevStatus[] devs\n\
\n\
================================================================================\n\
MSG: ric_board/DevStatus\n\
string devName\n\
int8 type\n\
float32[] values\n\
\n\
";
  }

  static const char* value(const ::ric_board::MonitorDevs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_board::MonitorDevs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.devs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MonitorDevs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_board::MonitorDevs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_board::MonitorDevs_<ContainerAllocator>& v)
  {
    s << indent << "devs[]" << std::endl;
    for (size_t i = 0; i < v.devs.size(); ++i)
    {
      s << indent << "  devs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ric_board::DevStatus_<ContainerAllocator> >::stream(s, indent + "    ", v.devs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_BOARD_MESSAGE_MONITORDEVS_H
