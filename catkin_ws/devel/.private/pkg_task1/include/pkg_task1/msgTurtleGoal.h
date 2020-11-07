// Generated by gencpp from file pkg_task1/msgTurtleGoal.msg
// DO NOT EDIT!


#ifndef PKG_TASK1_MESSAGE_MSGTURTLEGOAL_H
#define PKG_TASK1_MESSAGE_MSGTURTLEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pkg_task1
{
template <class ContainerAllocator>
struct msgTurtleGoal_
{
  typedef msgTurtleGoal_<ContainerAllocator> Type;

  msgTurtleGoal_()
    : distance(0)
    , angle(0)  {
    }
  msgTurtleGoal_(const ContainerAllocator& _alloc)
    : distance(0)
    , angle(0)  {
  (void)_alloc;
    }



   typedef int8_t _distance_type;
  _distance_type distance;

   typedef int8_t _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> const> ConstPtr;

}; // struct msgTurtleGoal_

typedef ::pkg_task1::msgTurtleGoal_<std::allocator<void> > msgTurtleGoal;

typedef boost::shared_ptr< ::pkg_task1::msgTurtleGoal > msgTurtleGoalPtr;
typedef boost::shared_ptr< ::pkg_task1::msgTurtleGoal const> msgTurtleGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pkg_task1::msgTurtleGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pkg_task1::msgTurtleGoal_<ContainerAllocator1> & lhs, const ::pkg_task1::msgTurtleGoal_<ContainerAllocator2> & rhs)
{
  return lhs.distance == rhs.distance &&
    lhs.angle == rhs.angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pkg_task1::msgTurtleGoal_<ContainerAllocator1> & lhs, const ::pkg_task1::msgTurtleGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pkg_task1

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f2f798034d31200675698594323e8ee";
  }

  static const char* value(const ::pkg_task1::msgTurtleGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f2f798034d31200ULL;
  static const uint64_t static_value2 = 0x675698594323e8eeULL;
};

template<class ContainerAllocator>
struct DataType< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pkg_task1/msgTurtleGoal";
  }

  static const char* value(const ::pkg_task1::msgTurtleGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal\n"
"int8 distance\n"
"int8 angle\n"
;
  }

  static const char* value(const ::pkg_task1::msgTurtleGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msgTurtleGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pkg_task1::msgTurtleGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pkg_task1::msgTurtleGoal_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<int8_t>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<int8_t>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PKG_TASK1_MESSAGE_MSGTURTLEGOAL_H
