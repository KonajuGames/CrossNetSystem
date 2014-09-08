/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/Specialized/StringCollection.h"
#include "CrossNetSystem/System/Collections/Specialized/StringEnumerator.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION

namespace System
{
namespace Collections
{
namespace Specialized
{

void * * StringCollection::s__InterfaceMap__ = NULL;

StringEnumerator * StringCollection::GetEnumerator()
{
    return (StringEnumerator::__Create__(this));
}

void StringCollection::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        {	Wrapper__IList::__GetId__(),        new Wrapper__IList          },
        {	Wrapper__ICollection::__GetId__(),  new Wrapper__ICollection    },
        {	Wrapper__IEnumerable::__GetId__(),  new Wrapper__IEnumerable	},
    };
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(StringCollection), info, sizeof(info) / sizeof(info[0]), NULL);
}

void StringCollection::AddRange(System::Array__G<System::String *> * values)
{
    int length = values->get_Length();
    mStrings.reserve(mStrings.size() + length);
    for (int i = 0 ; i < length ; ++i)
    {
        System::String * value = values->SingleDimensionItem(i);
        mStrings.push_back(value);
    }
}

}
}
}

#endif