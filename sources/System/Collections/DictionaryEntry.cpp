/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/DictionaryEntry.h"

#include "CrossNetRuntime/Internal/Box.h"
#include "CrossNetRuntime/System/String.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYENTRY
namespace System
{
namespace Collections
{

void * * DictionaryEntry::s__InterfaceMap__ = NULL;

void DictionaryEntry::__RegisterId__()
{
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(::CrossNetRuntime::BoxedObject<System::Collections::DictionaryEntry>));
}

System::String * DictionaryEntry::ToString()
{
    return (System::String::__Create__(L"System::Collections::DictionaryEntry"));
}

System::Boolean  DictionaryEntry::Equals(System::Object * obj)
{
    DictionaryEntry * other = ::CrossNetRuntime::AsCast<DictionaryEntry>(obj);
    if (other == NULL)
    {
        return (false);
    }
    return ((mKey == other->mKey) && (mValue == other->mValue));
}

System::Int32    DictionaryEntry::GetHashCode()
{
    System::Int32 hashValue = 13;   // By default...
    if (mKey != NULL)
    {
        hashValue ^= mKey->GetHashCode();
    }
    return (hashValue);
}

}
}

#endif

