// Generated by gencpp from file isee_synchronize/refLLAUpdate.msg
// DO NOT EDIT!


#ifndef ISEE_SYNCHRONIZE_MESSAGE_REFLLAUPDATE_H
#define ISEE_SYNCHRONIZE_MESSAGE_REFLLAUPDATE_H

#include <ros/service_traits.h>


#include <isee_synchronize/refLLAUpdateRequest.h>
#include <isee_synchronize/refLLAUpdateResponse.h>


namespace isee_synchronize
{

struct refLLAUpdate
{

typedef refLLAUpdateRequest Request;
typedef refLLAUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct refLLAUpdate
} // namespace isee_synchronize


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::isee_synchronize::refLLAUpdate > {
  static const char* value()
  {
    return "b307ff2c781bd2350d5c9875e1ae9b16";
  }

  static const char* value(const ::isee_synchronize::refLLAUpdate&) { return value(); }
};

template<>
struct DataType< ::isee_synchronize::refLLAUpdate > {
  static const char* value()
  {
    return "isee_synchronize/refLLAUpdate";
  }

  static const char* value(const ::isee_synchronize::refLLAUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::isee_synchronize::refLLAUpdateRequest> should match 
// service_traits::MD5Sum< ::isee_synchronize::refLLAUpdate > 
template<>
struct MD5Sum< ::isee_synchronize::refLLAUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::isee_synchronize::refLLAUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::refLLAUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::isee_synchronize::refLLAUpdateRequest> should match 
// service_traits::DataType< ::isee_synchronize::refLLAUpdate > 
template<>
struct DataType< ::isee_synchronize::refLLAUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::isee_synchronize::refLLAUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::refLLAUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::isee_synchronize::refLLAUpdateResponse> should match 
// service_traits::MD5Sum< ::isee_synchronize::refLLAUpdate > 
template<>
struct MD5Sum< ::isee_synchronize::refLLAUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::isee_synchronize::refLLAUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::refLLAUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::isee_synchronize::refLLAUpdateResponse> should match 
// service_traits::DataType< ::isee_synchronize::refLLAUpdate > 
template<>
struct DataType< ::isee_synchronize::refLLAUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::isee_synchronize::refLLAUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::refLLAUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ISEE_SYNCHRONIZE_MESSAGE_REFLLAUPDATE_H
