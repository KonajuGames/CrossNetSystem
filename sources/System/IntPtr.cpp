/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/IntPtr.h"

#include "CrossNetRuntime/Internal/BaseTypes.h"
#include "CrossNetSystem/System/Globalization/CultureInfo.h"

#ifndef CN_NO_SYSTEM_INTPTR

/*
System::String * System::IntPtr::ToString()
{
    // Same code as Int32.ToString()
    System::Char  text[16];
    _snwprintf_s(text, CN_ARRAY_SIZE(text), CN_ARRAY_SIZE(text), L"%d", m_value);
    return (System::String::__Create__(text));
}
*/

::System::IntPtr System::IntPtr::Zero;
::System::Boolean System::IntPtr::IsNull()
{
    return ((this->m_value == NULL));
}
void System::IntPtr::__ctor__(::System::Int32 value)
{
    this->m_value = (CrossNetRuntime::ReinterpretCast<::System::Void *>(value));
}
::System::IntPtr::IntPtr(::System::Int32 value)
{
    __ctor__( value);
}
::System::IntPtr::IntPtr(void * value)
{
    __ctor__( (::System::Int32)value);
}
void System::IntPtr::__ctor__(::System::Int64 value)
{
    this->m_value = (CrossNetRuntime::ReinterpretCast<::System::Void *>((CrossNetRuntime::UnsafeCast<::System::Int32>(value))));
}
::System::IntPtr::IntPtr(::System::Int64 value)
{
    __ctor__( value);
}
void System::IntPtr::__ctor__(CrossNetRuntime::PointerWrapper<::System::Void *> value)
{
    this->m_value = value;
}
::System::IntPtr::IntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value)
{
    __ctor__( value);
}
/*
 * Not implemented yet...
 *
void System::IntPtr::__ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context)
{
    ::System::Int64 num = info->GetInt64(::System::String::__Create__(L"value"));
    if ((((::System::IntPtr::get_Size() == 4)) && ((((num > 2147483647)) || ((num < INT_MIN))))))
    {
        throw (::System::ArgumentException::__Create__(::System::Environment::GetResourceString(::System::String::__Create__(L"Serialization_InvalidPtrValue"))));
    }
    this->m_value = (CrossNetRuntime::ReinterpretCast<::System::Void *>(num));
}
*/
/*
::System::IntPtr::IntPtr(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context)
{
    __ctor__( info,  context);
}
*/
::System::Void System::IntPtr::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo * /*info*/, ::System::Runtime::Serialization::StreamingContext /*context*/)
{
    CROSSNET_NOT_IMPLEMENTED();
/*
    if ((info == NULL))
    {
        throw (::System::ArgumentNullException::__Create__(::System::String::__Create__(L"info")));
    }
    info->AddValue(::System::String::__Create__(L"value"), (CrossNetRuntime::UnsafeCast<::System::Int64>((CrossNetRuntime::ReinterpretCast<::System::Int32>(this->m_value)))));
*/
}

::System::Boolean System::IntPtr::Equals(::System::Object * obj)
{
    if (CrossNetRuntime::IsCast<::System::IntPtr>(obj))
    {
        ::System::IntPtr ptr = (CrossNetRuntime::Unbox<::System::IntPtr>(obj));
        return ((this->m_value == ptr.m_value));
    }
    return (false);
}
::System::Int32 System::IntPtr::GetHashCode()
{
    return ((CrossNetRuntime::UnsafeCast<::System::Int32>((CrossNetRuntime::ReinterpretCast<::System::UInt64>(this->m_value)))));
}
::System::Int32 System::IntPtr::ToInt32()
{
    return ((CrossNetRuntime::ReinterpretCast<::System::Int32>(this->m_value)));
}
::System::Int64 System::IntPtr::ToInt64()
{
    return ((CrossNetRuntime::UnsafeCast<::System::Int64>((CrossNetRuntime::ReinterpretCast<::System::Int32>(this->m_value)))));
}
::System::String * System::IntPtr::ToString()
{
    ::System::Int32 num = (CrossNetRuntime::ReinterpretCast<::System::Int32>(this->m_value));
    return (CrossNetRuntime::GenWrapperConvert(num).ToString(CrossNetRuntime::InterfaceCast<::System::IFormatProvider>(::System::Globalization::CultureInfo::get_InvariantCulture())));
}
::System::String * System::IntPtr::ToString(::System::String * format)
{
    ::System::Int32 num = (CrossNetRuntime::ReinterpretCast<::System::Int32>(this->m_value));
    return (CrossNetRuntime::GenWrapperConvert(num).ToString(format, CrossNetRuntime::InterfaceCast<::System::IFormatProvider>(::System::Globalization::CultureInfo::get_InvariantCulture())));
}
::System::IntPtr System::IntPtr::op_Explicit__System__IntPtr(::System::Int32 value)
{
    return ((::System::IntPtr(value)));
}
::System::IntPtr System::IntPtr::op_Explicit__System__IntPtr(::System::Int64 value)
{
    return ((::System::IntPtr(value)));
}
::System::IntPtr System::IntPtr::op_Explicit__System__IntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value)
{
//    return ((::System::IntPtr(::CrossNetRuntime::CreatePointerWrapper(value))));
    return ((::System::IntPtr(value)));
}
::System::Void * System::IntPtr::op_Explicit__System__Void__P__(::System::IntPtr value)
{
    return (value.ToPointer());
}
::System::Int32 System::IntPtr::op_Explicit__System__Int32(::System::IntPtr value)
{
    return ((CrossNetRuntime::ReinterpretCast<::System::Int32>(value.m_value)));
}
::System::Int64 System::IntPtr::op_Explicit__System__Int64(::System::IntPtr value)
{
    return ((CrossNetRuntime::UnsafeCast<::System::Int64>((CrossNetRuntime::ReinterpretCast<::System::Int32>(value.m_value)))));
}
::System::Boolean System::IntPtr::op_Equality(::System::IntPtr value1, ::System::IntPtr value2)
{
    return ((value1.m_value == value2.m_value));
}
::System::Boolean System::IntPtr::op_Inequality(::System::IntPtr value1, ::System::IntPtr value2)
{
    return ((value1.m_value != value2.m_value));
}
::System::Int32 System::IntPtr::get_Size()
{
    return (4);
}
::System::Byte * System::IntPtr::ToPointer()
{
    return static_cast<::System::Byte *>(this->m_value);
}
System::IntPtr::IntPtr()
{
    __ctor__();
}
void System::IntPtr::__ctor__()
{
    m_value = 0;
}
void * * System::IntPtr::s__InterfaceMap__ = NULL;
void System::IntPtr::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	::System::IntPtr::Wrapper__ISerializable::__GetId__(), new ::System::IntPtr::Wrapper__ISerializable	}
    };
    void * * interfaceMap = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(CrossNetRuntime::BoxedObject<::System::IntPtr >), info, 1);
    ::System::IntPtr::s__InterfaceMap__ = interfaceMap;
}

#endif

