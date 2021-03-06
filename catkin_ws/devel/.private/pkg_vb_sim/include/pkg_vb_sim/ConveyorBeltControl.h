// Generated by gencpp from file pkg_vb_sim/ConveyorBeltControl.msg
// DO NOT EDIT!


#ifndef PKG_VB_SIM_MESSAGE_CONVEYORBELTCONTROL_H
#define PKG_VB_SIM_MESSAGE_CONVEYORBELTCONTROL_H

#include <ros/service_traits.h>


#include <pkg_vb_sim/ConveyorBeltControlRequest.h>
#include <pkg_vb_sim/ConveyorBeltControlResponse.h>


namespace pkg_vb_sim
{

struct ConveyorBeltControl
{

typedef ConveyorBeltControlRequest Request;
typedef ConveyorBeltControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ConveyorBeltControl
} // namespace pkg_vb_sim


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pkg_vb_sim::ConveyorBeltControl > {
  static const char* value()
  {
    return "8b0e8e2d213d4fc4d0fcb5152aec2d9d";
  }

  static const char* value(const ::pkg_vb_sim::ConveyorBeltControl&) { return value(); }
};

template<>
struct DataType< ::pkg_vb_sim::ConveyorBeltControl > {
  static const char* value()
  {
    return "pkg_vb_sim/ConveyorBeltControl";
  }

  static const char* value(const ::pkg_vb_sim::ConveyorBeltControl&) { return value(); }
};


// service_traits::MD5Sum< ::pkg_vb_sim::ConveyorBeltControlRequest> should match
// service_traits::MD5Sum< ::pkg_vb_sim::ConveyorBeltControl >
template<>
struct MD5Sum< ::pkg_vb_sim::ConveyorBeltControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pkg_vb_sim::ConveyorBeltControl >::value();
  }
  static const char* value(const ::pkg_vb_sim::ConveyorBeltControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pkg_vb_sim::ConveyorBeltControlRequest> should match
// service_traits::DataType< ::pkg_vb_sim::ConveyorBeltControl >
template<>
struct DataType< ::pkg_vb_sim::ConveyorBeltControlRequest>
{
  static const char* value()
  {
    return DataType< ::pkg_vb_sim::ConveyorBeltControl >::value();
  }
  static const char* value(const ::pkg_vb_sim::ConveyorBeltControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pkg_vb_sim::ConveyorBeltControlResponse> should match
// service_traits::MD5Sum< ::pkg_vb_sim::ConveyorBeltControl >
template<>
struct MD5Sum< ::pkg_vb_sim::ConveyorBeltControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pkg_vb_sim::ConveyorBeltControl >::value();
  }
  static const char* value(const ::pkg_vb_sim::ConveyorBeltControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pkg_vb_sim::ConveyorBeltControlResponse> should match
// service_traits::DataType< ::pkg_vb_sim::ConveyorBeltControl >
template<>
struct DataType< ::pkg_vb_sim::ConveyorBeltControlResponse>
{
  static const char* value()
  {
    return DataType< ::pkg_vb_sim::ConveyorBeltControl >::value();
  }
  static const char* value(const ::pkg_vb_sim::ConveyorBeltControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PKG_VB_SIM_MESSAGE_CONVEYORBELTCONTROL_H
