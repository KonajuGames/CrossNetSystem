/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/NotSupportedException.h"

#ifndef CN_NO_SYSTEM_NOTSUPPORTEDEXCEPTION

namespace System
{
void * * NotSupportedException::s__InterfaceMap__ = NULL;

void NotSupportedException::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__ISerializable::__GetId__(),    new Wrapper__ISerializable   },
        {	Wrapper___Exception::__GetId__(),       new Wrapper___Exception     },
    };
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::NotSupportedException), info, sizeof(info) / sizeof(info[0]), System::Exception::__GetInterfaceMap__());
}

}

#endif
