// Generated by gencpp from file ric_robot/ric_elevator_command.msg
// DO NOT EDIT!


#ifndef RIC_ROBOT_MESSAGE_RIC_ELEVATOR_COMMAND_H
#define RIC_ROBOT_MESSAGE_RIC_ELEVATOR_COMMAND_H


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
struct ric_elevator_command_
{
  typedef ric_elevator_command_<ContainerAllocator> Type;

  ric_elevator_command_()
    : pos(0.0)  {
    }
  ric_elevator_command_(const ContainerAllocator& _alloc)
    : pos(0.0)  {
    }



   typedef float _pos_type;
  _pos_type pos;




  typedef boost::shared_ptr< ::ric_robot::ric_elevator_command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_robot::ric_elevator_command_<ContainerAllocator> const> ConstPtr;

}; // struct ric_elevator_command_

typedef ::ric_robot::ric_elevator_command_<std::allocator<void> > ric_elevator_command;

typedef boost::shared_ptr< ::ric_robot::ric_elevator_command > ric_elevator_commandPtr;
typedef boost::shared_ptr< ::ric_robot::ric_elevator_command const> ric_elevator_commandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_robot::ric_elevator_command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_robot::ric_elevator_command_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_robot::ric_elevator_command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::ric_elevator_command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::ric_elevator_command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6fb6507bc71350dd1c10d16c76b741e";
  }

  static const char* value(const ::ric_robot::ric_elevator_command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6fb6507bc71350dULL;
  static const uint64_t static_value2 = 0xd1c10d16c76b741eULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_robot/ric_elevator_command";
  }

  static const char* value(const ::ric_robot::ric_elevator_command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pos\n\
\n\
\n\
";
  }

  static const char* value(const ::ric_robot::ric_elevator_command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ric_elevator_command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_robot::ric_elevator_command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_robot::ric_elevator_command_<ContainerAllocator>& v)
  {
    s << indent << "pos: ";
    Printer<float>::stream(s, indent + "  ", v.pos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_ROBOT_MESSAGE_RIC_ELEVATOR_COMMAND_H