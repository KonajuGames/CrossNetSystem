/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/IFormatProvider.h"

#ifndef CN_NO_SYSTEM_IFORMATPROVIDER
namespace System
{
void * * IFormatProvider::s__InterfaceMap__ = NULL;

void IFormatProvider::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterInterface();
}

}
#endif
