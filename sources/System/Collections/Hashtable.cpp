/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Collections/Hashtable.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_HASHTABLE
void * * System::Collections::Hashtable::s__InterfaceMap__ = NULL;
void * * System::Collections::Hashtable::DictionaryEnumerator::s__InterfaceMap__ = NULL;

void System::Collections::Hashtable::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        CN_IMPLEMENT(Hashtable__IDictionary),
        CN_IMPLEMENT(Hashtable__ICollection),
        CN_IMPLEMENT(Hashtable__IEnumerable),
        CN_IMPLEMENT(Hashtable__ICloneable),
    };

    // TODO: Finish
    void * * interfaceMap = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Collections::Hashtable), info, sizeof(info) / sizeof(info[0]), NULL);
    s__InterfaceMap__ = interfaceMap;
}

void System::Collections::Hashtable::DictionaryEnumerator::__RegisterId__()
{
    CrossNetRuntime::InterfaceInfo info[] = 
    {
        CN_IMPLEMENT(Wrapper__IDictionaryEnumerator),
        CN_IMPLEMENT(Wrapper__IEnumerator),
    };

    // TODO: Finish
    s__InterfaceMap__ = CrossNetRuntime::InterfaceMapper::RegisterObject(sizeof(System::Collections::Hashtable::DictionaryEnumerator), info, sizeof(info) / sizeof(info[0]), NULL);
}

System::Collections::DictionaryEntry     System::Collections::Hashtable::DictionaryEnumerator::get_Entry()
{
    return (DictionaryEntry(mIt->first, mIt->second));
}

System::Object *    System::Collections::Hashtable::DictionaryEnumerator::get_Key()
{
    return (mIt->first);
}

System::Object *    System::Collections::Hashtable::DictionaryEnumerator::get_Value()
{
    return (mIt->second);
}
bool                System::Collections::Hashtable::DictionaryEnumerator::MoveNext()
{
    if (mWaitOne)
    {
        mWaitOne = false;
        return (true);
    }

    if (mIt != mEnd)
    {
        ++mIt;
        return (mIt != mEnd);
    }
    return (false);
}

System::Object *    System::Collections::Hashtable::DictionaryEnumerator::get_Current()
{
    if (mIt != mEnd)
    {
        return (CrossNetRuntime::Box<::System::Object>(DictionaryEntry(mIt->first, mIt->second)));
    }
    return (NULL);
}
void                System::Collections::Hashtable::DictionaryEnumerator::Reset()
{
    mIt = mHashtable->mMap.begin();
    mWaitOne = true;
}

System::Collections::ICollection * System::Collections::Hashtable::get_Keys()
{
    int size = mMap.size();
    System::Array__G<System::Object *> * array = System::Array__G<System::Object *>::__Create__(size);
    MyHashMap::const_iterator it, end;
    end = mMap.end();
    int index = 0;
    for (it = mMap.begin() ; it != end ; ++it, ++index)
    {
        array->Item(index) = it->first;
    }
    return CrossNetRuntime::FastCast<System::Collections::ICollection>(array);
}

System::Collections::ICollection * System::Collections::Hashtable::get_Values()
{
    int size = mMap.size();
    System::Array__G<System::Object *> * array = System::Array__G<System::Object *>::__Create__(size);
    MyHashMap::const_iterator it, end;
    end = mMap.end();
    int index = 0;
    for (it = mMap.begin() ; it != end ; ++it, ++index)
    {
        array->Item(index) = it->second;
    }
    return CrossNetRuntime::FastCast<System::Collections::ICollection>(array);
}

void System::Collections::Hashtable::Add(System::Object * key, class System::Object * value)
{
    // TODO: This implementation should throw an exception if the key exists already...
    mMap[key] = value;
}

System::Object * System::Collections::Hashtable::get_Item(System::Object * key)
{
    MyHashMap::const_iterator it = mMap.find(key);
    if (it != mMap.end())
    {
        return (it->second);
    }
    return (NULL);
}

System::Object * System::Collections::Hashtable::set_Item(System::Object * key, System::Object * value)
{
    mMap[key] = value;
    return (value);
}

System::Boolean System::Collections::Hashtable::Contains(System::Object * key)
{
    MyHashMap::const_iterator it = mMap.find(key);
    return (it != mMap.end());
}

System::Boolean System::Collections::Hashtable::ContainsKey(System::Object * key)
{
    MyHashMap::const_iterator it = mMap.find(key);
    return (it != mMap.end());
}

System::Collections::IDictionaryEnumerator * System::Collections::Hashtable::GetEnumerator()
{
    return CrossNetRuntime::FastCast<System::Collections::IDictionaryEnumerator>(DictionaryEnumerator::__Create__(this));
}

System::Collections::IEnumerator * System::Collections::Hashtable::IEnumerable__GetEnumerator()
{
    IDictionaryEnumerator * enumerator = GetEnumerator();
    return (CrossNetRuntime::FastCast<System::Collections::IEnumerator>(enumerator));
}

System::Collections::Hashtable::DictionaryEnumerator * System::Collections::Hashtable::DictionaryEnumerator::__Create__(System::Collections::Hashtable * hashtable)
{
    return (new DictionaryEnumerator(hashtable));
}

System::Collections::Hashtable::DictionaryEnumerator::DictionaryEnumerator(System::Collections::Hashtable * hashtable)
    :   mHashtable(hashtable),
        mIt(hashtable->mMap.begin()),
        mEnd(hashtable->mMap.end()),
        mWaitOne(true)
{
    m__InterfaceMap__ = __GetInterfaceMap__();
}

void    System::Collections::Hashtable::__Trace__(unsigned char currentMark)
{
    // For hashtable, it's easy as each key / value is actually a System::Object
    //  Thus guaranteeing that they implement __Trace__

    MyHashMap::const_iterator it, end;
    end = mMap.end();
    for (it = mMap.begin() ; it != end ; ++it)
    {
        System::Object * key = it->first;
        // Key should always be not null ? (I'm not 100% sure though - I remember one case where I could use one key as null and it worked ;)
        // TODO: Create an unsafe version of GCManager::Trace() for non null pointer
        ::CrossNetRuntime::GCManager::Trace(key, currentMark);

        System::Object * value = it->second;
        ::CrossNetRuntime::GCManager::Trace(value, currentMark);
    }
}

#endif

