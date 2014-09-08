/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/NotImplementedException.h"

#ifndef CN_NO_SYSTEM_NOTIMPLEMENTEDEXCEPTION

namespace System
{
void * * NotImplementedException::s__InterfaceMap__ = NULL;

void NotImplementedException::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__ISerializable::__GetId__(),    new Wrapper__ISerializable   },
        {	Wrapper___Exception::__GetId__(),       new Wrapper___Exception     },
    };
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::NotImplementedException), info, sizeof(info) / sizeof(info[0]), System::Exception::__GetInterfaceMap__());
}

}

#endif
