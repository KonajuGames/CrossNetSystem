/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/IDictionaryEnumerator.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR
void * * System::Collections::IDictionaryEnumerator::s__InterfaceMap__ = NULL;

void System::Collections::IDictionaryEnumerator::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterInterface();
}

#endif
