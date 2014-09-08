/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_COLLECTIONBASE_H__
#define __SYSTEM_COLLECTIONS_COLLECTIONBASE_H__

#include "CrossNetRuntime/CrossNetRuntime.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_COLLECTIONBASE
namespace System
{
    namespace Collections
    {
        class CollectionBase : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            ::System::Collections::ArrayList * list;
            public:
            void __ctor__();
            public:
            void __ctor__(::System::Int32 capacity);
            public:
            ::System::Collections::ArrayList * get_InnerList();
            public:
            ::System::Collections::IList * get_List();
            public:
            ::System::Int32 get_Capacity();
            public:
            ::System::Int32 set_Capacity(::System::Int32 value);
            public:
            ::System::Int32 get_Count();
            public:
            ::System::Void Clear();
            public:
            ::System::Void RemoveAt(::System::Int32 index);
            public:
            virtual ::System::Boolean System_Collections_IList_get_IsReadOnly();
            public:
            virtual ::System::Boolean System_Collections_IList_get_IsFixedSize();
            public:
            virtual ::System::Boolean System_Collections_ICollection_get_IsSynchronized();
            public:
            virtual ::System::Object * System_Collections_ICollection_get_SyncRoot();
            public:
            virtual ::System::Void System_Collections_ICollection_CopyTo(::System::Array * array, ::System::Int32 index);
            public:
            virtual ::System::Object * System_Collections_IList_get_Item(::System::Int32 index);
            public:
            virtual ::System::Object * System_Collections_IList_set_Item(::System::Int32 index, ::System::Object * value);
            public:
            virtual ::System::Boolean System_Collections_IList_Contains(::System::Object * value);
            public:
            virtual ::System::Int32 System_Collections_IList_Add(::System::Object * value);
            public:
            virtual ::System::Void System_Collections_IList_Remove(::System::Object * value);
            public:
            virtual ::System::Int32 System_Collections_IList_IndexOf(::System::Object * value);
            public:
            virtual ::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object * value);
            public:
            ::System::Collections::IEnumerator * GetEnumerator();
            public:
            virtual ::System::Void OnSet(::System::Int32 index, ::System::Object * oldValue, ::System::Object * newValue);
            public:
            virtual ::System::Void OnInsert(::System::Int32 index, ::System::Object * value);
            public:
            virtual ::System::Void OnClear();
            public:
            virtual ::System::Void OnRemove(::System::Int32 index, ::System::Object * value);
            public:
            virtual ::System::Void OnValidate(::System::Object * value);
            public:
            virtual ::System::Void OnSetComplete(::System::Int32 index, ::System::Object * oldValue, ::System::Object * newValue);
            public:
            virtual ::System::Void OnInsertComplete(::System::Int32 index, ::System::Object * value);
            public:
            virtual ::System::Void OnClearComplete();
            public:
            virtual ::System::Void OnRemoveComplete(::System::Int32 index, ::System::Object * value);
            class Wrapper__IList : public ::System::Collections::IList
            {
                public:
                public:
                virtual ::System::Object * get_Item(void * __passed_instance__, ::System::Int32 index);
                public:
                virtual ::System::Object * set_Item(void * __passed_instance__, ::System::Int32 index, ::System::Object * value);
                public:
                virtual ::System::Int32 Add(void * __passed_instance__, ::System::Object * value);
                public:
                virtual ::System::Boolean Contains(void * __passed_instance__, ::System::Object * value);
                public:
                virtual ::System::Void Clear(void * __passed_instance__);
                public:
                virtual ::System::Boolean get_IsReadOnly(void * __passed_instance__);
                public:
                virtual ::System::Boolean get_IsFixedSize(void * __passed_instance__);
                public:
                virtual ::System::Int32 IndexOf(void * __passed_instance__, ::System::Object * value);
                public:
                virtual ::System::Void Insert(void * __passed_instance__, ::System::Int32 index, ::System::Object * value);
                public:
                virtual ::System::Void Remove(void * __passed_instance__, ::System::Object * value);
                public:
                virtual ::System::Void RemoveAt(void * __passed_instance__, ::System::Int32 index);
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