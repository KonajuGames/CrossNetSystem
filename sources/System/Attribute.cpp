/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Attribute.h"

#ifndef CN_NO_SYSTEM_ATTRIBUTE

namespace System
{
void * * Attribute::s__InterfaceMap__ = NULL;

void Attribute::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Attribute));
}

}

#endif
