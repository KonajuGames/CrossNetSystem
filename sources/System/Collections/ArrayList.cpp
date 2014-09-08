/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/ArrayList.h"

#include "CrossNetRuntime/System/Array.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_ARRAYLIST
namespace System
{
namespace Collections
{

void * * ArrayList::s__InterfaceMap__ = NULL;
void * * ArrayList::ArrayListEnumerator::s__InterfaceMap__ = NULL;

void ArrayList::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        CN_IMPLEMENT(ArrayList__IList),
        CN_IMPLEMENT(ArrayList__ICollection),
        CN_IMPLEMENT(ArrayList__ICloneable),
        CN_IMPLEMENT(ArrayList__IEnumerable),
    };

    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(ArrayList), info, sizeof(info) / sizeof(info[0]));
}

void ArrayList::ArrayListEnumerator::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        CN_IMPLEMENT(Wrapper__IEnumerator),
    };

    // TODO: Finish
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(ArrayListEnumerator), info, sizeof(info) / sizeof(info[0]), NULL);
}

ArrayList::ArrayList()
{
    // Do nothing...
}

System::Object * ArrayList::Clone()
{
    ArrayList * cloned = __Create__();
    cloned->mValues = mValues;
    return (cloned);
}

void ArrayList::CopyTo(Array * array)
{
    CROSSNET_ASSERT(array->get_Length() >= (int)mValues.size(), "");

    std::vector<System::Object *>::iterator itBegin = mValues.begin();
    std::vector<System::Object *>::iterator itEnd = mValues.end();

    std::vector<System::Object *>::iterator it = itBegin;
    int i = 0;
    while (it != itEnd)
    {
        System::Object * obj = *it++;
        array->SetValue(obj, i++);
    }
}

}
}

#endif

