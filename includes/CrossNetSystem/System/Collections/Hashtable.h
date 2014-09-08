/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_HASHTABLE_H__
#define __SYSTEM_COLLECTIONS_HASHTABLE_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_HASHTABLE

#include <hash_map>
#include "CrossNetRuntime/CrossNetRuntime.h"
#include "CrossNetSystem/System/Collections/DictionaryEntry.h"
#include "CrossNetSystem/System/Collections/IDictionaryEnumerator.h"
#include "CrossNetSystem/System/Collections/IDictionary.h"

namespace System
{
    namespace Collections
    {
        class IHashCodeProvider;
        class IDictionaryEnumerator;

        class Hashtable : public System::Object
        {
        private:
            struct MyCompare
            {
                static const int bucket_size = 4;
                static const int min_buckets = 8;

                MyCompare()
                {
                }

                size_t operator()(System::Object * key) const
                {
                    return (key->GetHashCode());
                }

                bool operator()(System::Object * key1, System::Object * key2) const
                {
                    bool equal = key1->Equals(key2);
                    // True to continue the search, false if we found the same element
                    return (equal == false);
                }
            };

            typedef stdext::hash_map<System::Object *, System::Object *, MyCompare>  MyHashMap;

        public:
            CN_DYNAMIC_ID()

            static Hashtable * __Create__()
            {
                Hashtable * __temp__ = new Hashtable();
                __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
                // No __ctor__ function to call...
                return (__temp__);
            }

            static Hashtable * __Create__(System::Int32 capacity);
            static Hashtable * __Create__(IDictionary *, System::Single, IHashCodeProvider *, IComparer *);
            static Hashtable * __Create__(Int32, System::Single, IHashCodeProvider *, IComparer *);


            System::Int32       get_Count()
            {
                return (mMap.size());
            }

            System::Collections::ICollection * get_Keys();
            System::Collections::ICollection * get_Values();
            IComparer *         get_comparer();

            void                Add(System::Object * key, System::Object * value);
            void                Remove(System::Object * key);
            System::Object *    get_Item(System::Object * key);
            System::Object *    set_Item(System::Object * key, System::Object * value);
            System::Boolean     Contains(System::Object * key);
            System::Boolean     ContainsKey(System::Object * key);
            System::Boolean     ContainsValue(System::Object * key);

            System::Collections::IDictionaryEnumerator *    GetEnumerator();
            System::Collections::IEnumerator *              IEnumerable__GetEnumerator();

            System::Boolean get_IsSynchronized()
            {
                return (false);
            }

            System::Object * get_SyncRoot()
            {
                return (this);
            }

            System::Object * Clone()
            {
                Hashtable * clone = __Create__();
                clone->mMap = mMap;
                return (clone);
            }

            void CopyTo(System::Array * /*array*/, System::Int32 /*index*/)
            {
                CROSSNET_FAIL("");
            }

            virtual void			__Trace__(unsigned char currentMark);
 
            class DictionaryEnumerator : public System::Object
            {
            public:
                CN_DYNAMIC_ID()

                static DictionaryEnumerator * __Create__(Hashtable * hashtable);

                DictionaryEntry     get_Entry();
                System::Object *    get_Key();
                System::Object *    get_Value();
                bool                MoveNext();
                System::Object *    get_Current();
                void                Reset();

                class Wrapper__IDictionaryEnumerator : public System::Collections::IDictionaryEnumerator
                {
                public:
                    virtual DictionaryEntry     get_Entry(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        return (instance->get_Entry());
                    }
                    virtual System::Object *    get_Key(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        return (instance->get_Key());
                    }
                    virtual System::Object *    get_Value(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        return (instance->get_Value());
                    }
                };

                class Wrapper__IEnumerator : public System::Collections::IEnumerator
                {
                public:
                    virtual bool                MoveNext(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        return (instance->MoveNext());
                    }

                    virtual System::Object *    get_Current(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        return (instance->get_Current());
                    }

                    virtual void                Reset(void * __instance__)
                    {
                        DictionaryEnumerator * instance = static_cast<DictionaryEnumerator *>(__instance__);
                        instance->Reset();
                    }
                };

            private:
                DictionaryEnumerator(Hashtable * hashtable);

                Hashtable *                 mHashtable;
                System::Collections::Hashtable::MyHashMap::const_iterator   mIt;
                System::Collections::Hashtable::MyHashMap::const_iterator   mEnd;
                bool                        mWaitOne;
            };

        protected:
            class Hashtable__IDictionary : public System::Collections::IDictionary
            {
            public:
                virtual System::Int32 get_Count(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_Count());
                }
                virtual System::Object * get_Item(void * __instance__, System::Object * key)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_Item(key));
                }
                virtual System::Collections::ICollection * get_Keys(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_Keys());
                }
                virtual System::Collections::ICollection * get_Values(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_Values());
                }
                virtual IDictionaryEnumerator * GetEnumerator(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->GetEnumerator());
                }
                virtual void Add(void * __instance__, System::Object * key, System::Object * value)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    instance->Add(key, value);
                }
            };

            class Hashtable__ICollection : public System::Collections::ICollection
            {
            public:
                virtual System::Int32 get_Count(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_Count());
                }

                virtual System::Boolean get_IsSynchronized(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_IsSynchronized());
                }

                virtual System::Object * get_SyncRoot(void * __instance__)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    return (instance->get_SyncRoot());
                }

                virtual void CopyTo(void * __instance__, System::Array * array, System::Int32 index)
                {
                    Hashtable * instance = static_cast<Hashtable *>(__instance__);
                    instance->CopyTo(array, index);
                }
            };

            class Hashtable__IEnumerable : public System::Collections::IEnumerable
            {
            public:
                virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                {
                    Hashtable * temp = static_cast<Hashtable *>(__instance__);
                    return (temp->IEnumerable__GetEnumerator());
                }
            };

            class Hashtable__ICloneable : public System::ICloneable
            {
            public:
                virtual System::Object * Clone(void * __instance__)
                {
                    Hashtable * temp = static_cast<Hashtable *>(__instance__);
                    return (temp->Clone());
                }
            };

        private:
            MyHashMap mMap;

            friend class DictionaryEnumerator;
        };
    }
}
#endif

#endif