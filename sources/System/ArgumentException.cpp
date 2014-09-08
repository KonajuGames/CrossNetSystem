/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/ArgumentException.h"

#ifndef CN_NO_SYSTEM_ARGUMENTEXCEPTION

namespace System
{
void * * ArgumentException::s__InterfaceMap__ = NULL;

void ArgumentException::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__ISerializable::__GetId__(),    new Wrapper__ISerializable   },
        {	Wrapper___Exception::__GetId__(),       new Wrapper___Exception     },
    };
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::ArgumentException), info, sizeof(info) / sizeof(info[0]), System::Exception::__GetInterfaceMap__());
}

::System::ArgumentException * System::ArgumentException::__Create__(::System::String * /*message*/)
{
    ::System::ArgumentException * pointer = new ArgumentException();
    pointer->m__InterfaceMap__ = __GetInterfaceMap__();
    return (pointer);
}

}

#endif
