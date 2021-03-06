// Generated by gencpp from file inertial_sense/GNSSObsVec.msg
// DO NOT EDIT!


#ifndef INERTIAL_SENSE_MESSAGE_GNSSOBSVEC_H
#define INERTIAL_SENSE_MESSAGE_GNSSOBSVEC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <inertial_sense/GTime.h>
#include <inertial_sense/GNSSObservation.h>

namespace inertial_sense
{
template <class ContainerAllocator>
struct GNSSObsVec_
{
  typedef GNSSObsVec_<ContainerAllocator> Type;

  GNSSObsVec_()
    : header()
    , time()
    , obs()  {
    }
  GNSSObsVec_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time(_alloc)
    , obs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::inertial_sense::GTime_<ContainerAllocator>  _time_type;
  _time_type time;

   typedef std::vector< ::inertial_sense::GNSSObservation_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::inertial_sense::GNSSObservation_<ContainerAllocator> >::other >  _obs_type;
  _obs_type obs;





  typedef boost::shared_ptr< ::inertial_sense::GNSSObsVec_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inertial_sense::GNSSObsVec_<ContainerAllocator> const> ConstPtr;

}; // struct GNSSObsVec_

typedef ::inertial_sense::GNSSObsVec_<std::allocator<void> > GNSSObsVec;

typedef boost::shared_ptr< ::inertial_sense::GNSSObsVec > GNSSObsVecPtr;
typedef boost::shared_ptr< ::inertial_sense::GNSSObsVec const> GNSSObsVecConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inertial_sense::GNSSObsVec_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace inertial_sense

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'inertial_sense': ['/home/zyw/catkin_ws/src/isee_camvox/inertial-sense-ros/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inertial_sense::GNSSObsVec_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inertial_sense::GNSSObsVec_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inertial_sense::GNSSObsVec_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d228e847dabfc151b595c858b8d03b94";
  }

  static const char* value(const ::inertial_sense::GNSSObsVec_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd228e847dabfc151ULL;
  static const uint64_t static_value2 = 0xb595c858b8d03b94ULL;
};

template<class ContainerAllocator>
struct DataType< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inertial_sense/GNSSObsVec";
  }

  static const char* value(const ::inertial_sense::GNSSObsVec_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
GTime time              # time of all contained observations (UTC Time w/o Leap Seconds)\n\
GNSSObservation[] obs   # Vector of observations\n\
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
\n\
================================================================================\n\
MSG: inertial_sense/GTime\n\
int64 time\n\
float64 sec\n\
================================================================================\n\
MSG: inertial_sense/GNSSObservation\n\
std_msgs/Header header\n\
GTime time              # time of observation\n\
uint8 sat 		# satellite number\n\
uint8 rcv 		# receiver number\n\
uint8 SNR 		# Signal Strength (0.25 dBHz)\n\
uint8 LLI 		# Loss-of-Lock Indicator (bit1=loss-of-lock, bit2=half-cycle-invalid)\n\
uint8 code 		# code indicator (BeiDou: CODE_L1I, Other: CODE_L1C )\n\
uint8 qualL 	# Estimated carrier phase measurement standard deviation (0.004 cycles)\n\
uint8 qualP 	# Estimated pseudorange measurement standard deviation (0.01 m)\n\
float64 L      	# observation data carrier-phase (cycle)\n\
float64 P      	# observation data pseudorange (m)\n\
float32 D      	# observation data doppler frequency (0.002 Hz)\n\
";
  }

  static const char* value(const ::inertial_sense::GNSSObsVec_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time);
      stream.next(m.obs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GNSSObsVec_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inertial_sense::GNSSObsVec_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inertial_sense::GNSSObsVec_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time: ";
    s << std::endl;
    Printer< ::inertial_sense::GTime_<ContainerAllocator> >::stream(s, indent + "  ", v.time);
    s << indent << "obs[]" << std::endl;
    for (size_t i = 0; i < v.obs.size(); ++i)
    {
      s << indent << "  obs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::inertial_sense::GNSSObservation_<ContainerAllocator> >::stream(s, indent + "    ", v.obs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INERTIAL_SENSE_MESSAGE_GNSSOBSVEC_H
