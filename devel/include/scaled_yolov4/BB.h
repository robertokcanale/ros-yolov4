// Generated by gencpp from file scaled_yolov4/BB.msg
// DO NOT EDIT!


#ifndef SCALED_YOLOV4_MESSAGE_BB_H
#define SCALED_YOLOV4_MESSAGE_BB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scaled_yolov4
{
template <class ContainerAllocator>
struct BB_
{
  typedef BB_<ContainerAllocator> Type;

  BB_()
    : obj_class()
    , confidence(0.0)
    , coordinates()  {
    }
  BB_(const ContainerAllocator& _alloc)
    : obj_class(_alloc)
    , confidence(0.0)
    , coordinates(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _obj_class_type;
  _obj_class_type obj_class;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _coordinates_type;
  _coordinates_type coordinates;





  typedef boost::shared_ptr< ::scaled_yolov4::BB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scaled_yolov4::BB_<ContainerAllocator> const> ConstPtr;

}; // struct BB_

typedef ::scaled_yolov4::BB_<std::allocator<void> > BB;

typedef boost::shared_ptr< ::scaled_yolov4::BB > BBPtr;
typedef boost::shared_ptr< ::scaled_yolov4::BB const> BBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scaled_yolov4::BB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scaled_yolov4::BB_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::scaled_yolov4::BB_<ContainerAllocator1> & lhs, const ::scaled_yolov4::BB_<ContainerAllocator2> & rhs)
{
  return lhs.obj_class == rhs.obj_class &&
    lhs.confidence == rhs.confidence &&
    lhs.coordinates == rhs.coordinates;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::scaled_yolov4::BB_<ContainerAllocator1> & lhs, const ::scaled_yolov4::BB_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace scaled_yolov4

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::scaled_yolov4::BB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scaled_yolov4::BB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scaled_yolov4::BB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scaled_yolov4::BB_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scaled_yolov4::BB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scaled_yolov4::BB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scaled_yolov4::BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfc87673751af1dddbaefa01947e8324";
  }

  static const char* value(const ::scaled_yolov4::BB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdfc87673751af1ddULL;
  static const uint64_t static_value2 = 0xdbaefa01947e8324ULL;
};

template<class ContainerAllocator>
struct DataType< ::scaled_yolov4::BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scaled_yolov4/BB";
  }

  static const char* value(const ::scaled_yolov4::BB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scaled_yolov4::BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string obj_class\n"
"float32 confidence\n"
"float32[] coordinates\n"
;
  }

  static const char* value(const ::scaled_yolov4::BB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scaled_yolov4::BB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obj_class);
      stream.next(m.confidence);
      stream.next(m.coordinates);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scaled_yolov4::BB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scaled_yolov4::BB_<ContainerAllocator>& v)
  {
    s << indent << "obj_class: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.obj_class);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "coordinates[]" << std::endl;
    for (size_t i = 0; i < v.coordinates.size(); ++i)
    {
      s << indent << "  coordinates[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.coordinates[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCALED_YOLOV4_MESSAGE_BB_H
