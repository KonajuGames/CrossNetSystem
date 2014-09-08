/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_GENERIC_LIST__G1_H__
#define __SYSTEM_COLLECTIONS_GENERIC_LIST__G1_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_GENERIC_LIST__G1
#include "CrossNetRuntime/System/IDisposable.h"
namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            template <typename T>
            class List__G1 : public System::Object
            {
            public:
                CN_MULTIPLE_DYNAMIC_OBJECT_ID(
                    sizeof(List__G1),
                    __W6__
                    (
                        CN_IMPLEMENT(Wrapper__IEnumerable),
                        CN_IMPLEMENT(Wrapper__ICollection),
                        CN_IMPLEMENT(Wrapper__IList),
                        CN_IMPLEMENT(Wrapper__IEnumerable__G1),
                        CN_IMPLEMENT(Wrapper__ICollection__G1),
                        CN_IMPLEMENT(Wrapper__IList__G1)
                    ),
                    NULL
                )

                static typename System::Collections::Generic::List__G1<T> * __Create__()
                {
                    typename System::Collections::Generic::List__G1<T> * temp;
                    temp = new System::Collections::Generic::List__G1<T>();
                    temp->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (temp);
                }

                Boolean get_IsSynchronized()
                {
                    return (false);
                }

                System::Object * get_SyncRoot()
                {
                    return (this);
                }

                void CopyTo(System::Array * /*array*/, Int32 /*index*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                }

                Boolean get_IsFixedSize()
                {
                    return (false);
                }

                Boolean get_IsReadOnly()
                {
                    return (false);
                }

                void Add(T value)
                {
                    mValues.push_back(value);
                }

                Int32 get_Count()
                {
                    return (Int32)(mValues.size());
                }

                T   get_Item(Int32 index)
                {
                    CROSSNET_ASSERT((index >= 0) && (index < get_Count()), "Index not in range!");
                    return (mValues[index]);
                }

                const T & set_Item(Int32 index, const T & item)
                {
                    CROSSNET_ASSERT((index >= 0) && (index < get_Count()), "Index not in range!");
                    mValues[index] = item;
                    return (item);
                }

                System::Object * IList__get_Item(Int32 index)
                {
                    return (::CrossNetRuntime::Box<System::Object>(get_Item(index)));
                }

                void IList__set_Item(Int32 index, System::Object * value)
                {
                    set_Item(index, ::CrossNetRuntime::Unbox<CrossNetRuntime::BaseTypeWrapper<T>::BoxeableType >(value));
                }

                System::Int32 IList__Add(System::Object * /*value*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (0);
                }

                System::Boolean IList__Contains(System::Object * /*value*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (false);
                }

                System::Int32 IList__IndexOf(System::Object * /*value*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (-1);
                }

                void IList__Insert(System::Int32 /*index*/, System::Object * /*value*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                }

                void IList__Remove(System::Object * /*value*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                }

                void RemoveAt(Int32 index)
                {
                    mValues.erase(mValues.begin() + index);
                }

                struct Enumerator
                {
                public:
                    CN_MULTIPLE_DYNAMIC_OBJECT_ID(
                        sizeof(::CrossNetRuntime::BoxedObject<Enumerator>),
                        __W3__
                        (
                            CN_IMPLEMENT(Wrapper__IEnumerator),
                            CN_IMPLEMENT(Wrapper__IEnumerator__G1),
                            CN_IMPLEMENT(Wrapper__IDisposable)
                        ),
                        NULL
                    )

                    Enumerator(List__G1 * list)
                        :
                        mIndex(-1),
                        mList(list)
                    {
                        // Do nothing...
                    }

                    System::Boolean MoveNext()
                    {
                        ++mIndex;
                        return (mIndex < mList->get_Count());
                    }

                    T               get_Current()
                    {
                        return (mList->get_Item(mIndex));
                    }

                    void            Reset()
                    {
                        mIndex = -1;
                    }

                    System::String * ToString()
                    {
                        return (String::__Create__(L"System::Collections::Generic::List::Enumerator"));
                    }

                    System::Object * IEnumerator__get_Current()
                    {
                        return (::CrossNetRuntime::Box<System::Object>(mList->get_Item(mIndex)));
                    }

                    System::Boolean Equals(System::Object * /*obj*/)
                    {
                        return (false);
                    }

                    Int32 GetHashCode()
                    {
                        return (mList->GetHashCode());
                    }

                    void Dispose()
                    {
                        // Do nothing...
                    }

                    class Wrapper__IEnumerator : public ::System::Collections::IEnumerator
                    {
                    public:
                        virtual bool                MoveNext(void * __instance__)
                        {
                            ::CrossNetRuntime::BoxedObject<Enumerator> * temp = static_cast<::CrossNetRuntime::BoxedObject<Enumerator> *>(__instance__);
                            return (temp->GetUnboxedAddress()->MoveNext());
                        }
                        virtual System::Object *    get_Current(void * __instance__)
                        {
                            ::CrossNetRuntime::BoxedObject<Enumerator> * temp = static_cast<::CrossNetRuntime::BoxedObject<Enumerator> *>(__instance__);
                            return (temp->GetUnboxedAddress()->IEnumerator__get_Current());
                        }
                        virtual void                Reset(void * __instance__)
                        {
                            ::CrossNetRuntime::BoxedObject<Enumerator> * temp = static_cast<::CrossNetRuntime::BoxedObject<Enumerator> *>(__instance__);
                            temp->GetUnboxedAddress()->Reset();
                        }
                    };

                    class Wrapper__IEnumerator__G1 : public ::System::Collections::Generic::IEnumerator__G1<T>
                    {
                    public:
                        virtual T get_Current(void * __instance__)
                        {
                            ::CrossNetRuntime::BoxedObject<Enumerator> * temp = static_cast<::CrossNetRuntime::BoxedObject<Enumerator> *>(__instance__);
                            return (temp->GetUnboxedAddress()->get_Current());
                        }
                    };

                    class Wrapper__IDisposable : public ::System::IDisposable
                    {
                    public:
                        virtual void Dispose(void * __instance__)
                        {
                            ::CrossNetRuntime::BoxedObject<Enumerator> * temp = static_cast<::CrossNetRuntime::BoxedObject<Enumerator> *>(__instance__);
                            temp->GetUnboxedAddress()->Dispose();
                        }
                    };

                private:
                    Int32       mIndex;
                    List__G1 *  mList;
                };

                void Clear()
                {
                    mValues.clear();
                }

                Enumerator  GetEnumerator()
                {
                    return (Enumerator(this));
                }

                IEnumerator * IEnumerable__GetEnumerator()
                {
                    return (::CrossNetRuntime::Box<IEnumerator>(Enumerator(this)));
                }

                IEnumerator__G1<T> * IEnumerable__G1__GetEnumerator()
                {
                    return (::CrossNetRuntime::Box<IEnumerator__G1<T>>(Enumerator(this)));
                }

                T Find(System::Predicate__G1<T> * match)
                {
                    Int32 size = (Int32)mValues.size();
                    for (Int32 i = 0 ; i < size ; ++i)
                    {
                        bool result = match->Invoke(mValues[i]);
                        if (result)
                        {
                            return (mValues[i]);
                        }
                    }
                    return (__DEFAULT__(T));
                }

                ::System::Boolean Contains(T /*item*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (false);
                }

                void CopyTo(typename ::System::Array__G< T > * /*array*/, ::System::Int32 /*arrayIndex*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                }

                ::System::Boolean Remove(T /*item*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (false);
                }

                ::System::Int32 IndexOf(T /*item*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                    return (-1);
                }

                void Insert(::System::Int32 /*index*/, T /*item*/)
                {
                    CROSSNET_NOT_IMPLEMENTED();
                }

            protected:
                // Non-generic interfaces
                class Wrapper__IEnumerable : public System::Collections::IEnumerable
                {
                public:
                    virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IEnumerable__GetEnumerator());
                    }
                };

                class Wrapper__ICollection : public System::Collections::ICollection
                {
                public:
                    virtual System::Int32 get_Count(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_Count());
                    }

                    virtual System::Boolean get_IsSynchronized(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_IsSynchronized());
                    }

                    virtual System::Object * get_SyncRoot(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_SyncRoot());
                    }

                    virtual void CopyTo(void * __instance__, System::Array * array, System::Int32 index)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->CopyTo(array, index);
                    }
                };

                class Wrapper__IList : public System::Collections::IList
                {
                public:
                    virtual System::Boolean get_IsFixedSize(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_IsFixedSize());
                    }

                    virtual System::Boolean get_IsReadOnly(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_IsReadOnly());
                    }

                    virtual System::Object * get_Item(void * __instance__, System::Int32 index)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IList__get_Item(index));
                    }

                    virtual System::Object * set_Item(void * __instance__, System::Int32 index, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->IList__set_Item(index, value);
                        return (value);
                    }

                    virtual System::Int32 Add(void * __instance__, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IList__Add(value));
                    }

                    virtual void Clear(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->Clear();
                    }

                    virtual System::Boolean Contains(void * __instance__, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IList__Contains(value));
                    }

                    virtual System::Int32 IndexOf(void * __instance__, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IList__IndexOf(value));
                    }

                    virtual void Insert(void * __instance__, System::Int32 index, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->IList__Insert(index, value);
                    }

                    virtual void Remove(void * __instance__, System::Object * value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->IList__Remove(value);
                    }

                    virtual void RemoveAt(void * __instance__, System::Int32 index)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->RemoveAt(index);
                    }
                };

                // Generic interfaces
                class Wrapper__IEnumerable__G1 : public System::Collections::Generic::IEnumerable__G1<T>
                {
                public:
                    virtual System::Collections::Generic::IEnumerator__G1<T> *  GetEnumerator(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IEnumerable__G1__GetEnumerator());
                    }
                };

                class Wrapper__ICollection__G1 : public System::Collections::Generic::ICollection__G1<T>
                {
                public:
                    virtual System::Int32 get_Count(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_Count());
                    }

                    virtual ::System::Boolean get_IsReadOnly(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_IsReadOnly());
                    }

                    virtual void Add(void * __instance__, T value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->Add(value));
                    }

                    virtual void Clear(void * __instance__)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->Clear();
                    }

                    virtual ::System::Boolean Contains(void * __instance__, T item)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->Contains(item));
                    }

                    virtual void CopyTo(void * __instance__, typename ::System::Array__G< T > * array, ::System::Int32 arrayIndex)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->CopyTo(array, arrayIndex);
                    }

                    virtual ::System::Boolean Remove(void * __instance__, T item)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->Remove(item));
                    }
                };

                class Wrapper__IList__G1 : public System::Collections::Generic::IList__G1<T>
                {
                public:
                    virtual T get_Item(void * __instance__, ::System::Int32 index)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->get_Item(index));
                    }

                    virtual T set_Item(void * __instance__, ::System::Int32 index, T value)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->set_Item(index, value));
                    }

                    virtual ::System::Int32 IndexOf(void * __instance__, T item)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        return (temp->IndexOf(item));
                    }

                    virtual void Insert(void * __instance__, ::System::Int32 index, T item)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->Insert(index, item);
                    }

                    virtual void RemoveAt(void * __instance__, ::System::Int32 index)
                    {
                        List__G1 * temp = static_cast<List__G1 *>(__instance__);
                        temp->RemoveAt(index);
                    }
                };

            private:
                std::vector<T>  mValues;
            };
        }
    }
}
#endif

#endif
