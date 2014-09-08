/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Exception.h"

#ifndef CN_NO_SYSTEM_EXCEPTION

namespace System
{
void * * Exception::s__InterfaceMap__ = NULL;

void Exception::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__ISerializable::__GetId__(),    new Wrapper__ISerializable   },
        {	Wrapper___Exception::__GetId__(),       new Wrapper___Exception     },
    };
    void * * interfaceMap = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Exception), info, sizeof(info) / sizeof(info[0]), NULL);
    s__InterfaceMap__ = interfaceMap;
}

System::String * Exception::ToString()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

int Exception::GetHashCode()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (0);
}

System::Type * Exception::GetType()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

bool Exception::Equals(System::Object *)
{
    CROSSNET_NOT_IMPLEMENTED();
    return (false);
}

System::String * Exception::get_Message()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (ToString());
}

System::Exception * Exception::GetBaseException()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (this);
}

System::String * Exception::get_StackTrace()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

System::String * Exception::get_HelpLink()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

void Exception::set_HelpLink(System::String *)
{
    CROSSNET_NOT_IMPLEMENTED();
}

System::String * Exception::get_Source()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

void Exception::set_Source(System::String *)
{
    CROSSNET_NOT_IMPLEMENTED();
}

void Exception::GetObjectData(System::Runtime::Serialization::SerializationInfo *, System::Runtime::Serialization::StreamingContext)
{
    CROSSNET_NOT_IMPLEMENTED();
}

System::Exception * Exception::get_InnerException()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (this);
}

System::Reflection::MethodBase * Exception::get_TargetSite()
{
    CROSSNET_NOT_IMPLEMENTED();
    return (NULL);
}

}

#endif
