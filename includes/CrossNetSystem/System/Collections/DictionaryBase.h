/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_DICTIONARYBASE_H__
#define __SYSTEM_COLLECTIONS_DICTIONARYBASE_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYBASE

#include "CrossNetRuntime/System/Object.h"
#include "CrossNetSystem/System/Collections/DictionaryEntry.h"

namespace System
{
    namespace Collections
    {
        class DictionaryBase : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            ::System::Collections::Hashtable * hashtable;
            public:
            ::System::Collections::Hashtable * get_InnerHashtable();
            public:
            ::System::Collections::IDictionary * get_Dictionary();
            public:
            ::System::Int32 get_Count();
            public:
            virtual ::System::Boolean System_Collections_IDictionary_get_IsReadOnly();
            public:
            virtual ::System::Boolean System_Collections_IDictionary_get_IsFixedSize();
            public:
            virtual ::System::Boolean System_Collections_ICollection_get_IsSynchronized();
            public:
            virtual ::System::Collections::ICollection * System_Collections_IDictionary_get_Keys();
            public:
            virtual ::System::Object * System_Collections_ICollection_get_SyncRoot();
            public:
            virtual ::System::Collections::ICollection * System_Collections_IDictionary_get_Values();
            public:
            ::System::Void CopyTo(::System::Array * array, ::System::Int32 index);
            public:
            virtual ::System::Object * System_Collections_IDictionary_get_Item(::System::Object * key);
            public:
            virtual ::System::Object * System_Collections_IDictionary_set_Item(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Boolean System_Collections_IDictionary_Contains(::System::Object * key);
            public:
            virtual ::System::Void System_Collections_IDictionary_Add(::System::Object * key, ::System::Object * value);
            public:
            ::System::Void Clear();
            public:
            virtual ::System::Void System_Collections_IDictionary_Remove(::System::Object * key);
            public:
            ::System::Collections::IDictionaryEnumerator * GetEnumerator();
            public:
            virtual ::System::Collections::IEnumerator * System_Collections_IEnumerable_GetEnumerator();
            public:
            virtual ::System::Object * OnGet(::System::Object * key, ::System::Object * currentValue);
            public:
            virtual ::System::Void OnSet(::System::Object * key, ::System::Object * oldValue, ::System::Object * newValue);
            public:
            virtual ::System::Void OnInsert(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Void OnClear();
            public:
            virtual ::System::Void OnRemove(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Void OnValidate(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Void OnSetComplete(::System::Object * key, ::System::Object * oldValue, ::System::Object * newValue);
            public:
            virtual ::System::Void OnInsertComplete(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Void OnClearComplete();
            public:
            virtual ::System::Void OnRemoveComplete(::System::Object * key, ::System::Object * value);
            public:
            void __ctor__();
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
#endif

#endif