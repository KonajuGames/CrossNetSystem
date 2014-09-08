/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/IDictionary.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARY
void * * System::Collections::IDictionary::s__InterfaceMap__ = NULL;

void System::Collections::IDictionary::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterInterface();
}

#endif

