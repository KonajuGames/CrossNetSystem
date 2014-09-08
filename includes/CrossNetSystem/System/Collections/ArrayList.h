/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_ARRAYLIST_H__
#define __SYSTEM_COLLECTIONS_ARRAYLIST_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_ARRAYLIST
#include "CrossNetRuntime/Internal/Cast.h"
#include "CrossNetRuntime/System/ICloneable.h"
#include "CrossNetRuntime/System/Collections/IEnumerator.h"
#include "CrossNetRuntime/System/Collections/IEnumerable.h"
#include "CrossNetRuntime/System/Collections/ICollection.h"
#include "CrossNetRuntime/System/Collections/IList.h"
#include "CrossNetRuntime/System/Array.h"

namespace System
{
    class Array;

    namespace Collections
    {
        class ICollection;

        class ArrayList : public System::Object
        {
        public:
            CN_DYNAMIC_ID()

            static ArrayList * __Create__()
            {
                ArrayList * __temp__ = new ArrayList();
                __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
                // No __ctor__ function to call...
                return (__temp__);
            }

            static ArrayList * __Create__(int initialCapacity)
            {
                ArrayList * __temp__ = new ArrayList();
                __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
                __temp__->mValues.reserve(initialCapacity);
                // No __ctor__ function to call...
                return (__temp__);
            }

            static ArrayList * __Create__(System::Collections::ICollection *);

            static ArrayList * FixedSize(ArrayList * list);
            static IList * FixedSize(IList * list);
            static ArrayList * ReadOnly(ArrayList * list);
            static IList * ReadOnly(IList * list);

            Int32 Add(System::Object * object)
            {
                Int32 index = mValues.size();
                mValues.push_back(object);
                return (index);
            }

            virtual void AddRange(::System::Collections::ICollection * /*c*/)
            {
                CROSSNET_NOT_IMPLEMENTED();
            }

            System::Collections::IEnumerator * GetEnumerator()
            {
                return ::CrossNetRuntime::FastCast<System::Collections::IEnumerator>(ArrayListEnumerator::__Create__(this));
            }

            System::Array__G<System::Object> *  ToArray();
            // Currently there is no easy way to implement this function ;)
            // It actually relies on some dynamic binding, we'll have to find a way...
            System::Array *                     ToArray(System::Type * type);

            class ArrayListEnumerator : public System::Object
            {
            public:
                CN_DYNAMIC_ID();

                static ArrayListEnumerator * __Create__(ArrayList * arrayList)
                {
                    ArrayListEnumerator * temp = new ArrayListEnumerator(arrayList);
                    temp->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (temp);
                }

                ArrayListEnumerator(ArrayList * arrayList)
                    :   mArrayList(arrayList),
                        mIt(arrayList->mValues.begin()),
                        mItEnd(arrayList->mValues.end()),
                        mFirst(true)
                {
                    // Do nothing...
                }

                bool    MoveNext()
                {
                    if (mFirst)
                    {
                        mFirst = false;
                        return (true);
                    }
                    if (mIt != mItEnd)
                    {
                        ++mIt;
                    }
                    return (mIt != mItEnd);
                }

                System::Object *    get_Current()
                {
                    return (*mIt);
                }

                void    Reset()
                {
                    mIt = mItEnd;
                    mFirst = true;
                }

                class Wrapper__IEnumerator : public IEnumerator
                {
                public:
                    virtual bool                MoveNext(void * __instance__)
                    {
                        ArrayListEnumerator * arrayListEnumerator = (ArrayListEnumerator *)__instance__;
                        return (arrayListEnumerator->MoveNext());
                    }

                    virtual System::Object *    get_Current(void * __instance__)
                    {
                        ArrayListEnumerator * arrayListEnumerator = (ArrayListEnumerator *)__instance__;
                        return (arrayListEnumerator->get_Current());
                    }

                    virtual void                Reset(void * __instance__)
                    {
                        ArrayListEnumerator * arrayListEnumerator = (ArrayListEnumerator *)__instance__;
                        arrayListEnumerator->Reset();
                    }
                };

            private:
                ArrayList *                                     mArrayList;
                std::vector<System::Object *>::const_iterator   mIt;
                std::vector<System::Object *>::const_iterator   mItEnd;
                bool                                            mFirst;
            };

            System::Object * get_Item(System::Int32 index)
            {
                return (mValues[index]);
            }

            void set_Item(System::Int32 index, System::Object * value)
            {
                mValues[index] = value;
            }

            System::Int32 get_Count()
            {
                return (mValues.size());
            }

            System::Int32 get_Capacity()
            {
                return (mValues.capacity());
            }

            System::Object * Clone();

            void CopyTo(Array * array);

            System::Boolean get_IsFixedSize()
            {
                return (false);
            }

            System::Boolean get_IsReadOnly()
            {
                return (false);
            }

            void Clear()
            {
                mValues.clear();
            }

            System::Boolean Contains(System::Object * value)
            {
                return (IndexOf(value) >= 0);
            }

            System::Int32 IndexOf(System::Object * value)
            {
                std::vector<System::Object *>::iterator itBegin = mValues.begin();
                std::vector<System::Object *>::iterator itEnd = mValues.end();
                std::vector<System::Object *>::iterator it = itBegin;
                while (it != itEnd)
                {
                    // TODO: Add correct check for NULL
                    if ((*it)->Equals(value))
                    {
                        return (it - itBegin);
                    }
                    ++it;
                }
                return (-1);
            }

            System::Int32 LastIndexOf(System::Object * value)
            {
                std::vector<System::Object *>::iterator itBegin = mValues.begin();
                std::vector<System::Object *>::iterator itEnd = mValues.end();
                std::vector<System::Object *>::iterator it = itEnd;
                while (it != itEnd)
                {
                    --it;
                    // TODO: Add correct check for NULL
                    if ((*it)->Equals(value))
                    {
                        return (it - itBegin);
                    }
                }
                return (-1);
            }

            System::Int32 LastIndexOf(System::Object * value, System::Int32 startIndex);
            System::Int32 LastIndexOf(System::Object * value, System::Int32 startIndex, System::Int32 count);

            void Remove(System::Object * value)
            {
                System::Int32 index = IndexOf(value);
                if (index < 0)
                {
                    return;
                }
                RemoveAt(index);
            }

            void RemoveAt(System::Int32 index)
            {
                mValues.erase(mValues.begin() + index);
            }

            void Insert(System::Int32 index, System::Object * value)
            {
                mValues.insert(mValues.begin() + index, value);
            }

            System::Boolean get_IsSynchronized()
            {
                return (false);
            }

            System::Object * get_SyncRoot()
            {
                return (this);
            }

            void CopyTo(System::Array * /*array*/, System::Int32 /*index*/)
            {
                CROSSNET_FAIL("");
            }

            class ArrayList__IList : public System::Collections::IList
            {
            public:
                virtual System::Boolean get_IsFixedSize(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_IsFixedSize());
                }

                virtual System::Boolean get_IsReadOnly(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_IsReadOnly());
                }

                virtual System::Object * get_Item(void * __instance__, System::Int32 index)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_Item(index));
                }

                virtual System::Object * set_Item(void * __instance__, System::Int32 index, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->set_Item(index, value);
                    return (value);
                }

                virtual System::Int32 Add(void * __instance__, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->Add(value));
                }

                virtual void Clear(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->Clear();
                }

                virtual System::Boolean Contains(void * __instance__, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->Contains(value));
                }

                virtual System::Int32 IndexOf(void * __instance__, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->IndexOf(value));
                }

                virtual void Insert(void * __instance__, System::Int32 index, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->Insert(index, value);
                }

                virtual void Remove(void * __instance__, System::Object * value)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->Remove(value);
                }

                virtual void RemoveAt(void * __instance__, System::Int32 index)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->RemoveAt(index);
                }
            };

            class ArrayList__IEnumerable : public System::Collections::IEnumerable
            {
            public:
                virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->GetEnumerator());
                }
            };

            class ArrayList__ICollection : public System::Collections::ICollection
            {
            public:
                virtual System::Int32 get_Count(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_Count());
                }

                virtual System::Boolean get_IsSynchronized(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_IsSynchronized());
                }

                virtual System::Object * get_SyncRoot(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->get_SyncRoot());
                }

                virtual void CopyTo(void * __instance__, System::Array * array, System::Int32 index)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    temp->CopyTo(array, index);
                }
            };

            class ArrayList__ICloneable : public System::ICloneable
            {
            public:
                virtual System::Object *    Clone(void * __instance__)
                {
                    ArrayList * temp = static_cast<ArrayList *>(__instance__);
                    return (temp->Clone());
                }
            };

        protected:
            ArrayList();

        private:
            ArrayList(const ArrayList & other);
            std::vector<System::Object *>   mValues;

            friend class ArrayListEnumerator;
        };
    }
}
#endif

#endif