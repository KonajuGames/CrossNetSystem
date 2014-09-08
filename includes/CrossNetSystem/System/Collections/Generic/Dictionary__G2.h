/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_GENERIC_DICTIONARY__G2_H__
#define __SYSTEM_COLLECTIONS_GENERIC_DICTIONARY__G2_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_DICTIONARY__G2
#include "CrossNetRuntime/Internal/BaseTypes.h"

namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            template <typename T>
            struct __MyCompare__
            {
                enum
                {
                    bucket_size = 4,
                    min_buckets = 8,
                };

                __MyCompare__()
                {
                }

                size_t operator()(T key) const
                {
                    return (CrossNetRuntime::GenWrapperConvert(key)->GetHashCode());
                }

                bool operator()(T key1, T key2) const
                {
                    // We could actually create specialization here for primitive types
                    //  I would not be surprised if we could even improve things for any struct as well without having to box the right side...
                    System::Object * obj = ::CrossNetRuntime::Box<System::Object>(CrossNetRuntime::GenWrapperConvert(key2));
                    bool equal = CrossNetRuntime::GenWrapperConvert(key1)->Equals(obj);

                    // True to continue the search, false if we found the same element
                    return (equal == false);
                }
            };

            template <>
            size_t __MyCompare__<System::Int32>::operator()(System::Int32 key) const
            {
                return (size_t)(key);
            }

            template <>
            bool __MyCompare__<System::Int32>::operator()(System::Int32 key1, System::Int32 key2) const
            {
                // No boxing for int comparisons ;)
                return (key1 != key2);
            }

            template <typename Key, typename Value>
            class Dictionary__G2 : public System::Object
            {
            public:
                CN_MULTIPLE_DYNAMIC_OBJECT_ID(
                    sizeof(Dictionary__G2< __W2__(Key, Value)>),
                    __W6__
                    (
                        CN_IMPLEMENT(Dictionary__G2__IEnumerable),
                        CN_IMPLEMENT(Dictionary__G2__ICollection),
                        CN_IMPLEMENT(Dictionary__G2__IDictionary),
                        CN_IMPLEMENT(Dictionary__G2__IEnumerable__G1< __W2__(KeyValuePair__G2<Key, Value>) >),
                        CN_IMPLEMENT(Dictionary__G2__ICollection__G1< __W2__(KeyValuePair__G2<Key, Value>) >),
                        CN_IMPLEMENT(Dictionary__G2__IDictionary__G2< __W2__(Key, Value) >)
                    ),
                    NULL
                )

                static typename System::Collections::Generic::Dictionary__G2<Key, Value> * __Create__()
                {
                    System::Collections::Generic::Dictionary__G2<Key, Value> * instance = new System::Collections::Generic::Dictionary__G2<Key, Value>();
                    instance->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (instance);
                }

                static typename System::Collections::Generic::Dictionary__G2<Key, Value> * __Create__(System::Int32 /*initialCapacity*/)
                {
                    System::Collections::Generic::Dictionary__G2<Key, Value> * instance = new System::Collections::Generic::Dictionary__G2<Key, Value>();
                    instance->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (instance);
                }

                void    Add(Key key, Value value)
                {
                    mMap[key] = value;
                }

                Value get_Item(Key key)
                {
                    MyHashMap::const_iterator it = mMap.find(key);
                    if (it != mMap.end())
                    {
                        return (it->second);
                    }

                    CROSSNET_FAIL("Could not find the corresponding key!");
                    return (__DEFAULT__(Value));
                }

                Value set_Item(Key key, Value value)
                {
                    mMap[key] = value;
                    return (value);
                }

            private:

                typedef stdext::hash_map<Key, Value, __MyCompare__<Key> >   MyHashMap;
                MyHashMap mMap;

// For the moment disable some warnings
//  warning C4100: '__instance__' : unreferenced formal parameter
// TODO: Fix this
#pragma warning(push)
#pragma warning(disable: 4100)

                class Dictionary__G2__IEnumerable : public System::Collections::IEnumerable
                {
                public:
                    virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                };

                class Dictionary__G2__ICollection : public System::Collections::ICollection
                {
                public:
                    virtual System::Int32 get_Count(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (0);
                    }

                    virtual System::Boolean get_IsSynchronized(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }

                    virtual System::Object * get_SyncRoot(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }

                    virtual void CopyTo(void * __instance__, System::Array * array, System::Int32 index)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                };

                class Dictionary__G2__IDictionary : public System::Collections::IDictionary
                {
                public:
                    virtual System::Int32 get_Count(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (0);
                    }
                    virtual System::Object * get_Item(void * __instance__, System::Object * key)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual System::Collections::ICollection * get_Keys(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual System::Collections::ICollection * get_Values(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual IDictionaryEnumerator * GetEnumerator(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual void Add(void * __instance__, System::Object * key, System::Object * value)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                };

                template <typename T>
                class Dictionary__G2__IEnumerable__G1 : public System::Collections::Generic::IEnumerable__G1<T>
                {
                public:
                    virtual IEnumerator__G1<T> *    GetEnumerator(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                };

                template <typename T>
                class Dictionary__G2__ICollection__G1 : public System::Collections::Generic::ICollection__G1<T>
                {
                public:
                    virtual ::System::Int32 get_Count(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (0);
                    }
                    virtual ::System::Boolean get_IsReadOnly(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                    virtual void Add(void * __instance__, T item)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                    virtual void Clear(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                    virtual ::System::Boolean Contains(void * __instance__, T item)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                    virtual void CopyTo(void * __instance__, typename ::System::Array__G< T > * array, ::System::Int32 arrayIndex)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                    virtual ::System::Boolean Remove(void * __instance__, T item)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                };

                template <typename TKey, typename TValue>
                class Dictionary__G2__IDictionary__G2 : public System::Collections::Generic::IDictionary__G2<TKey, TValue>
                {
                    virtual TValue get_Item(void * __instance__, TKey key)
                    {
                        Dictionary__G2<TKey, TValue> * temp = static_cast<Dictionary__G2<TKey, TValue> *>(__instance__);
                        return (temp->get_Item(key));
                    }
                    virtual TValue set_Item(void * __instance__, TKey key, TValue value)
                    {
                        Dictionary__G2<TKey, TValue> * temp = static_cast<Dictionary__G2<TKey, TValue> *>(__instance__);
                        temp->set_Item(key, value);
                        return (value);
                    }
                    virtual System::Collections::Generic::ICollection__G1<TKey> * get_Keys(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual System::Collections::Generic::ICollection__G1<TValue> * get_Values(void * __instance__)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (NULL);
                    }
                    virtual void Add(void * __instance__, TKey key, TValue value)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                    }
                    virtual System::Boolean ContainsKey(void * __instance__, TKey key)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                    virtual System::Boolean Remove(void * __instance__, TKey key)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                    virtual System::Boolean TryGetValue(void * __instance__, TKey key, TValue * value)
                    {
                        CROSSNET_NOT_IMPLEMENTED();
                        return (false);
                    }
                };

#pragma warning(pop)
            };
        }
    }
}

#endif
#endif
