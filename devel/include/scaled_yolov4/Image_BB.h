// Generated by gencpp from file scaled_yolov4/Image_BB.msg
// DO NOT EDIT!


#ifndef SCALED_YOLOV4_MESSAGE_IMAGE_BB_H
#define SCALED_YOLOV4_MESSAGE_IMAGE_BB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <scaled_yolov4/BB.h>

namespace scaled_yolov4
{
template <class ContainerAllocator>
struct Image_BB_
{
  typedef Image_BB_<ContainerAllocator> Type;

  Image_BB_()
    : bb_number(0)
    , bb_array()  {
    }
  Image_BB_(const ContainerAllocator& _alloc)
    : bb_number(0)
    , bb_array(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _bb_number_type;
  _bb_number_type bb_number;

   typedef std::vector< ::scaled_yolov4::BB_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::scaled_yolov4::BB_<ContainerAllocator> >::other >  _bb_array_type;
  _bb_array_type bb_array;





  typedef boost::shared_ptr< ::scaled_yolov4::Image_BB_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scaled_yolov4::Image_BB_<ContainerAllocator> const> ConstPtr;

}; // struct Image_BB_

typedef ::scaled_yolov4::Image_BB_<std::allocator<void> > Image_BB;

typedef boost::shared_ptr< ::scaled_yolov4::Image_BB > Image_BBPtr;
typedef boost::shared_ptr< ::scaled_yolov4::Image_BB const> Image_BBConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scaled_yolov4::Image_BB_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scaled_yolov4::Image_BB_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::scaled_yolov4::Image_BB_<ContainerAllocator1> & lhs, const ::scaled_yolov4::Image_BB_<ContainerAllocator2> & rhs)
{
  return lhs.bb_number == rhs.bb_number &&
    lhs.bb_array == rhs.bb_array;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::scaled_yolov4::Image_BB_<ContainerAllocator1> & lhs, const ::scaled_yolov4::Image_BB_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace scaled_yolov4

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scaled_yolov4::Image_BB_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scaled_yolov4::Image_BB_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scaled_yolov4::Image_BB_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e36224c45647457f9e206d30e8546220";
  }

  static const char* value(const ::scaled_yolov4::Image_BB_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe36224c45647457fULL;
  static const uint64_t static_value2 = 0x9e206d30e8546220ULL;
};

template<class ContainerAllocator>
struct DataType< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scaled_yolov4/Image_BB";
  }

  static const char* value(const ::scaled_yolov4::Image_BB_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 bb_number\n"
"scaled_yolov4/BB[] bb_array\n"
"================================================================================\n"
"MSG: scaled_yolov4/BB\n"
"string obj_class\n"
"float32 confidence\n"
"float32[] coordinates\n"
;
  }

  static const char* value(const ::scaled_yolov4::Image_BB_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bb_number);
      stream.next(m.bb_array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Image_BB_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scaled_yolov4::Image_BB_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scaled_yolov4::Image_BB_<ContainerAllocator>& v)
  {
    s << indent << "bb_number: ";
    Printer<int16_t>::stream(s, indent + "  ", v.bb_number);
    s << indent << "bb_array[]" << std::endl;
    for (size_t i = 0; i < v.bb_array.size(); ++i)
    {
      s << indent << "  bb_array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::scaled_yolov4::BB_<ContainerAllocator> >::stream(s, indent + "    ", v.bb_array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCALED_YOLOV4_MESSAGE_IMAGE_BB_H