// Generated by gencpp from file robotics_demo/PositionService.msg
// DO NOT EDIT!


#ifndef ROBOTICS_DEMO_MESSAGE_POSITIONSERVICE_H
#define ROBOTICS_DEMO_MESSAGE_POSITIONSERVICE_H

#include <ros/service_traits.h>


#include <robotics_demo/PositionServiceRequest.h>
#include <robotics_demo/PositionServiceResponse.h>


namespace robotics_demo
{

struct PositionService
{

typedef PositionServiceRequest Request;
typedef PositionServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PositionService
} // namespace robotics_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotics_demo::PositionService > {
  static const char* value()
  {
    return "b2629d4cbee41789622cf2931b4df30e";
  }

  static const char* value(const ::robotics_demo::PositionService&) { return value(); }
};

template<>
struct DataType< ::robotics_demo::PositionService > {
  static const char* value()
  {
    return "robotics_demo/PositionService";
  }

  static const char* value(const ::robotics_demo::PositionService&) { return value(); }
};


// service_traits::MD5Sum< ::robotics_demo::PositionServiceRequest> should match
// service_traits::MD5Sum< ::robotics_demo::PositionService >
template<>
struct MD5Sum< ::robotics_demo::PositionServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotics_demo::PositionService >::value();
  }
  static const char* value(const ::robotics_demo::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotics_demo::PositionServiceRequest> should match
// service_traits::DataType< ::robotics_demo::PositionService >
template<>
struct DataType< ::robotics_demo::PositionServiceRequest>
{
  static const char* value()
  {
    return DataType< ::robotics_demo::PositionService >::value();
  }
  static const char* value(const ::robotics_demo::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotics_demo::PositionServiceResponse> should match
// service_traits::MD5Sum< ::robotics_demo::PositionService >
template<>
struct MD5Sum< ::robotics_demo::PositionServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotics_demo::PositionService >::value();
  }
  static const char* value(const ::robotics_demo::PositionServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotics_demo::PositionServiceResponse> should match
// service_traits::DataType< ::robotics_demo::PositionService >
template<>
struct DataType< ::robotics_demo::PositionServiceResponse>
{
  static const char* value()
  {
    return DataType< ::robotics_demo::PositionService >::value();
  }
  static const char* value(const ::robotics_demo::PositionServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTICS_DEMO_MESSAGE_POSITIONSERVICE_H