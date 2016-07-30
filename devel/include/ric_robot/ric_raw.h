// Generated by gencpp from file ric_robot/ric_raw.msg
// DO NOT EDIT!


#ifndef RIC_ROBOT_MESSAGE_RIC_RAW_H
#define RIC_ROBOT_MESSAGE_RIC_RAW_H


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
struct ric_raw_
{
  typedef ric_raw_<ContainerAllocator> Type;

  ric_raw_()
    : orientation()
    , linear_acceleration()
    , angular_velocity()
    , magnetometer()
    , encoders()
    , urf()  {
      orientation.assign(0.0);

      linear_acceleration.assign(0);

      angular_velocity.assign(0);

      magnetometer.assign(0);

      encoders.assign(0);

      urf.assign(0.0);
  }
  ric_raw_(const ContainerAllocator& _alloc)
    : orientation()
    , linear_acceleration()
    , angular_velocity()
    , magnetometer()
    , encoders()
    , urf()  {
      orientation.assign(0.0);

      linear_acceleration.assign(0);

      angular_velocity.assign(0);

      magnetometer.assign(0);

      encoders.assign(0);

      urf.assign(0.0);
  }



   typedef boost::array<float, 4>  _orientation_type;
  _orientation_type orientation;

   typedef boost::array<int16_t, 3>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef boost::array<int16_t, 3>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef boost::array<int16_t, 3>  _magnetometer_type;
  _magnetometer_type magnetometer;

   typedef boost::array<int32_t, 2>  _encoders_type;
  _encoders_type encoders;

   typedef boost::array<float, 3>  _urf_type;
  _urf_type urf;




  typedef boost::shared_ptr< ::ric_robot::ric_raw_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_robot::ric_raw_<ContainerAllocator> const> ConstPtr;

}; // struct ric_raw_

typedef ::ric_robot::ric_raw_<std::allocator<void> > ric_raw;

typedef boost::shared_ptr< ::ric_robot::ric_raw > ric_rawPtr;
typedef boost::shared_ptr< ::ric_robot::ric_raw const> ric_rawConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_robot::ric_raw_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_robot::ric_raw_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ric_robot::ric_raw_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_robot::ric_raw_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::ric_raw_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_robot::ric_raw_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::ric_raw_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_robot::ric_raw_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_robot::ric_raw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "717e58ef32c83e8c93ceae03d4826367";
  }

  static const char* value(const ::ric_robot::ric_raw_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x717e58ef32c83e8cULL;
  static const uint64_t static_value2 = 0x93ceae03d4826367ULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_robot::ric_raw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_robot/ric_raw";
  }

  static const char* value(const ::ric_robot::ric_raw_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_robot::ric_raw_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] orientation #qx,qy,qz,qw\n\
int16[3] linear_acceleration #ax,ay,az\n\
int16[3] angular_velocity #gx,gy,gz\n\
int16[3] magnetometer #mx,my,mz\n\
int32[2] encoders #left_ticks,right_ticks\n\
float32[3] urf #left_urf, rear_urf, right_urf\n\
\n\
\n\
";
  }

  static const char* value(const ::ric_robot::ric_raw_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_robot::ric_raw_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.orientation);
      stream.next(m.linear_acceleration);
      stream.next(m.angular_velocity);
      stream.next(m.magnetometer);
      stream.next(m.encoders);
      stream.next(m.urf);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ric_raw_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_robot::ric_raw_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_robot::ric_raw_<ContainerAllocator>& v)
  {
    s << indent << "orientation[]" << std::endl;
    for (size_t i = 0; i < v.orientation.size(); ++i)
    {
      s << indent << "  orientation[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.orientation[i]);
    }
    s << indent << "linear_acceleration[]" << std::endl;
    for (size_t i = 0; i < v.linear_acceleration.size(); ++i)
    {
      s << indent << "  linear_acceleration[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.linear_acceleration[i]);
    }
    s << indent << "angular_velocity[]" << std::endl;
    for (size_t i = 0; i < v.angular_velocity.size(); ++i)
    {
      s << indent << "  angular_velocity[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.angular_velocity[i]);
    }
    s << indent << "magnetometer[]" << std::endl;
    for (size_t i = 0; i < v.magnetometer.size(); ++i)
    {
      s << indent << "  magnetometer[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.magnetometer[i]);
    }
    s << indent << "encoders[]" << std::endl;
    for (size_t i = 0; i < v.encoders.size(); ++i)
    {
      s << indent << "  encoders[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.encoders[i]);
    }
    s << indent << "urf[]" << std::endl;
    for (size_t i = 0; i < v.urf.size(); ++i)
    {
      s << indent << "  urf[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.urf[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_ROBOT_MESSAGE_RIC_RAW_H