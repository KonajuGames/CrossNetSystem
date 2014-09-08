/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/Specialized/StringEnumerator.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR
namespace System
{
namespace Collections
{
namespace Specialized
{

void * * StringEnumerator::s__InterfaceMap__ = NULL;

void StringEnumerator::__RegisterId__()
{
    void * * interfaceMap = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(StringEnumerator));
    s__InterfaceMap__ = interfaceMap;
}

}
}
}
#endif
