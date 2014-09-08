/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_H__
#define __SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_H__

#include "CrossNetRuntime/CrossNetRuntime.h"
#include "CrossNetRuntime/System/Collections/IList.h"
#include "CrossNetRuntime/System/Collections/IEnumerable.h"
#include "CrossNetRuntime/System/Collections/ICollection.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION

namespace System
{
    template <typename T>
    class Array__G;

    namespace Collections
    {
        namespace Specialized
        {
            class StringEnumerator;

            class StringCollection : public System::Object
            {
            public:
                CN_DYNAMIC_ID()

                static StringCollection * __Create__()
                {
                    StringCollection * instance = new StringCollection();
                    instance->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (instance);
                }

                Int32 get_Count()
                {
                    return (Int32)(mStrings.size());
                }

                Boolean get_IsReadOnly()
                {
                    return (false);
                }

                Boolean get_IsSynchronized()
                {
                    return (false);
                }

                System::String * get_Item(Int32 index)
                {
                    return (mStrings[index]);
                }

                void set_Item(Int32 index, System::String * value)
                {
                    mStrings[index] = value;
                }

                void IList__set_Item(Int32 index, System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    mStrings[index] = string;
                }

                System::Object * get_SyncRoot()
                {
                    return (this);
                }

                Int32 Add(System::String * value)
                {
                    int index = mStrings.size();
                    mStrings.push_back(value);
                    return (index);
                }

                Int32 IList__Add(System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    return (Add(string));
                }

                void AddRange(System::Array__G<System::String *> * values);

                void Clear()
                {
                    mStrings.clear();
                }

                Int32 IndexOf(System::String * value)
                {
                    std::vector<System::String *>::iterator it = mStrings.begin();
                    std::vector<System::String *>::iterator itEnd = mStrings.end();

                    while (it != itEnd)
                    {
                        if (String::Compare(*it, value) == 0)
                        {
                            return (it - mStrings.begin());
                        }
                    }
                    return (-1);
                }

                Int32 IList__IndexOf(System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    return (IndexOf(string));
                }

                Boolean Contains(System::String * value)
                {
                    return (IndexOf(value) >= 0);
                }

                Boolean IList__Contains(System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    return (Contains(string));
                }

                Boolean get_IsFixedSize()
                {
                    return (false);
                }

                void Remove(System::String * value)
                {
                    std::vector<System::String *>::iterator it = mStrings.begin();
                    std::vector<System::String *>::iterator itEnd = mStrings.end();

                    while (it != itEnd)
                    {
                        if (String::Compare(*it, value) == 0)
                        {
                            mStrings.erase(it);
                            return;
                        }
                    }
                }

                void IList__Remove(System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    Remove(string);
                }

                void RemoveAt(int index)
                {
                    mStrings.erase(mStrings.begin() + index);
                }

                System::Collections::Specialized::StringEnumerator * GetEnumerator();

                System::Collections::IEnumerator * IEnumerable__GetEnumerator()
                {
                    // StringEnumerator is NOT an IEnumerator
                    // For the moment, it is not implemented
                    CROSSNET_FATAL(this == NULL, "");
                    return (NULL);
                }

                void CopyTo(System::Array * /*array*/, System::Int32 /*index*/)
                {
                    CROSSNET_FAIL("");
                }

                void Insert(System::Int32 index, System::Object * value)
                {
                    System::String * string = CrossNetRuntime::Cast<System::String>(value);
                    mStrings.insert(mStrings.begin() + index, string);
                }

            protected:
                class Wrapper__IEnumerable : public System::Collections::IEnumerable
                {
                public:
                    virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->IEnumerable__GetEnumerator());
                    }
                };

                class Wrapper__ICollection : public System::Collections::ICollection
                {
                public:
                    virtual System::Int32 get_Count(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_Count());
                    }

                    virtual System::Boolean get_IsSynchronized(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_IsSynchronized());
                    }

                    virtual System::Object * get_SyncRoot(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_SyncRoot());
                    }

                    virtual void CopyTo(void * __instance__, System::Array * array, System::Int32 index)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->CopyTo(array, index));
                    }
                };

                class Wrapper__IList : public System::Collections::IList
                {
                public:
                    virtual System::Boolean get_IsFixedSize(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_IsFixedSize());
                    }

                    virtual System::Boolean get_IsReadOnly(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_IsReadOnly());
                    }
                    virtual System::Object * get_Item(void * __instance__, System::Int32 index)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->get_Item(index));
                    }
                    virtual System::Object * set_Item(void * __instance__, System::Int32 index, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        temp->IList__set_Item(index, value);
                        return (value);
                    }

                    virtual System::Int32 Add(void * __instance__, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->IList__Add(value));
                    }
                    virtual void Clear(void * __instance__)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        temp->Clear();
                    }
                    virtual System::Boolean Contains(void * __instance__, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->IList__Contains(value));
                    }
                    virtual System::Int32 IndexOf(void * __instance__, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        return (temp->IList__IndexOf(value));
                    }
                    virtual void Insert(void * __instance__, System::Int32 index, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        temp->Insert(index, value);
                    }
                    virtual void Remove(void * __instance__, System::Object * value)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        temp->IList__Remove(value);
                    }
                    virtual void RemoveAt(void * __instance__, System::Int32 index)
                    {
                        StringCollection * temp = static_cast<StringCollection *>(__instance__);
                        temp->RemoveAt(index);
                    }
                };

            private:
                std::vector<System::String *>   mStrings;
            };
        }
    }
}
#endif

#endif