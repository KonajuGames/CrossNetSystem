/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_H__
#define __SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_H__

#include "CrossNetRuntime/CrossNetRuntime.h"
#include "CrossNetSystem/System/Collections/IDictionary.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY

namespace System
{
    namespace Collections
    {
        namespace Specialized
        {
#define __SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_DICTIONARYNODE_H__

            class ListDictionary__DictionaryNode : public ::System::Object
            {
                CN_DYNAMIC_ID()
                public:
                ::System::Object * key;
                public:
                ::System::Object * value;
                public:
                ::System::Collections::Specialized::ListDictionary__DictionaryNode * next;
                virtual void __Trace__(unsigned char currentMark);
                public:
                void __ctor__();
                static ::System::Collections::Specialized::ListDictionary__DictionaryNode * __Create__();
                public:
                static void __CreateInterfaceMap__();
            };

            class ListDictionary : public ::System::Object
            {
                CN_DYNAMIC_ID()
                public:
                ::System::Collections::Specialized::ListDictionary__DictionaryNode * head;
                public:
                ::System::Int32 version;
                public:
                ::System::Int32 count;
                public:
                ::System::Collections::IComparer * comparer;
                public:
                ::System::Object * _syncRoot;
                virtual void __Trace__(unsigned char currentMark);
                public:
                void __ctor__();
                static ::System::Collections::Specialized::ListDictionary * __Create__();
                public:
                void __ctor__(::System::Collections::IComparer * comparer);
                static ::System::Collections::Specialized::ListDictionary * __Create__(::System::Collections::IComparer * comparer);
                public:
                ::System::Object * get_Item(::System::Object * key);
                public:
                ::System::Object * set_Item(::System::Object * key, ::System::Object * value);
                public:
                ::System::Int32 get_Count();
                public:
                ::System::Collections::ICollection * get_Keys();
                public:
                ::System::Boolean get_IsReadOnly();
                public:
                ::System::Boolean get_IsFixedSize();
                public:
                ::System::Boolean get_IsSynchronized();
                public:
                ::System::Object * get_SyncRoot();
                public:
                ::System::Collections::ICollection * get_Values();
                public:
                ::System::Void Add(::System::Object * key, ::System::Object * value);
                public:
                ::System::Void Clear();
                public:
                ::System::Boolean Contains(::System::Object * key);
                public:
                ::System::Void CopyTo(::System::Array * array, ::System::Int32 index);
                public:
                ::System::Collections::IDictionaryEnumerator * GetEnumerator();
                public:
                virtual ::System::Collections::IEnumerator * System_Collections_IEnumerable_GetEnumerator();
                public:
                ::System::Void Remove(::System::Object * key);
                class Wrapper__IDictionary : public ::System::Collections::IDictionary
                {
                    public:
                    public:
                    virtual ::System::Object * get_Item(void * __passed_instance__, ::System::Object * key);
                    public:
                    virtual ::System::Object * set_Item(void * __passed_instance__, ::System::Object * key, ::System::Object * value);
                    public:
                    virtual ::System::Collections::ICollection * get_Keys(void * __passed_instance__);
                    public:
                    virtual ::System::Collections::ICollection * get_Values(void * __passed_instance__);
                    public:
                    virtual ::System::Boolean Contains(void * __passed_instance__, ::System::Object * key);
                    public:
                    virtual ::System::Void Add(void * __passed_instance__, ::System::Object * key, ::System::Object * value);
                    public:
                    virtual ::System::Void Clear(void * __passed_instance__);
                    public:
                    virtual ::System::Boolean get_IsReadOnly(void * __passed_instance__);
                    public:
                    virtual ::System::Boolean get_IsFixedSize(void * __passed_instance__);
                    public:
                    virtual ::System::Collections::IDictionaryEnumerator * GetEnumerator(void * __passed_instance__);
                    public:
                    virtual ::System::Void Remove(void * __passed_instance__, ::System::Object * key);
                    CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
                };
                class Wrapper__IEnumerable : public ::System::Collections::IEnumerable
                {
                    public:
                    public:
                    virtual ::System::Collections::IEnumerator * GetEnumerator(void * __passed_instance__);
                    CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
                };
                class Wrapper__ICollection : public ::System::Collections::ICollection
                {
                    public:
                    public:
                    virtual ::System::Void CopyTo(void * __passed_instance__, ::System::Array * array, ::System::Int32 index);
                    public:
                    virtual ::System::Int32 get_Count(void * __passed_instance__);
                    public:
                    virtual ::System::Object * get_SyncRoot(void * __passed_instance__);
                    public:
                    virtual ::System::Boolean get_IsSynchronized(void * __passed_instance__);
                    CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
                };
                public:
                static void __CreateInterfaceMap__();
            };
        }
    }
}

#endif

#endif
