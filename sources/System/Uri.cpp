/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Uri.h"

#ifndef CN_NO_SYSTEM_URI
namespace System
{
void * * Uri::s__InterfaceMap__ = NULL;

void Uri::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Uri));
}
}
#endif
