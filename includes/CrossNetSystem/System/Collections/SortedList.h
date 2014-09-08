/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SORTEDLIST_H__
#define __SYSTEM_COLLECTIONS_SORTEDLIST_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_SORTEDLIST

#include "CrossnetRuntime/System/Object.h"

namespace System
{
    namespace Collections
    {
        class SortedList : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 _defaultCapacity;
            public:
            ::System::Array__G< ::System::Object * > * keys;
            public:
            ::System::Array__G< ::System::Object * > * values;
            public:
            ::System::Int32 _size;
            public:
            ::System::Int32 version;
            public:
            ::System::Collections::IComparer * comparer;
            public:
            ::System::Collections::SortedList__KeyList * keyList;
            public:
            ::System::Collections::SortedList__ValueList * valueList;
            public:
            ::System::Object * _syncRoot;
            public:
            static ::System::Array__G< ::System::Object * > * emptyArray;
            public:
            void __ctor__();
            static ::System::Collections::SortedList * __Create__();
            public:
            void __ctor__(::System::Int32 initialCapacity);
            static ::System::Collections::SortedList * __Create__(::System::Int32 initialCapacity);
            public:
            void __ctor__(::System::Collections::IComparer * comparer);
            static ::System::Collections::SortedList * __Create__(::System::Collections::IComparer * comparer);
            public:
            void __ctor__(::System::Collections::IComparer * comparer, ::System::Int32 capacity);
            static ::System::Collections::SortedList * __Create__(::System::Collections::IComparer * comparer, ::System::Int32 capacity);
            public:
            void __ctor__(::System::Collections::IDictionary * d);
            static ::System::Collections::SortedList * __Create__(::System::Collections::IDictionary * d);
            public:
            void __ctor__(::System::Collections::IDictionary * d, ::System::Collections::IComparer * comparer);
            static ::System::Collections::SortedList * __Create__(::System::Collections::IDictionary * d, ::System::Collections::IComparer * comparer);
            public:
            virtual ::System::Void Add(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Int32 get_Capacity();
            public:
            virtual ::System::Int32 set_Capacity(::System::Int32 value);
            public:
            virtual ::System::Int32 get_Count();
            public:
            virtual ::System::Collections::ICollection * get_Keys();
            public:
            virtual ::System::Collections::ICollection * get_Values();
            public:
            virtual ::System::Boolean get_IsReadOnly();
            public:
            virtual ::System::Boolean get_IsFixedSize();
            public:
            virtual ::System::Boolean get_IsSynchronized();
            public:
            virtual ::System::Object * get_SyncRoot();
            public:
            virtual ::System::Void Clear();
            public:
            virtual ::System::Object * Clone();
            public:
            virtual ::System::Boolean Contains(::System::Object * key);
            public:
            virtual ::System::Boolean ContainsKey(::System::Object * key);
            public:
            virtual ::System::Boolean ContainsValue(::System::Object * value);
            public:
            virtual ::System::Void CopyTo(::System::Array * array, ::System::Int32 arrayIndex);
            public:
            virtual ::System::Array__G< ::System::Collections::KeyValuePairs * > * ToKeyValuePairsArray();
            public:
            ::System::Void EnsureCapacity(::System::Int32 min);
            public:
            virtual ::System::Object * GetByIndex(::System::Int32 index);
            public:
            virtual ::System::Collections::IEnumerator * System_Collections_IEnumerable_GetEnumerator();
            public:
            virtual ::System::Collections::IDictionaryEnumerator * GetEnumerator();
            public:
            virtual ::System::Object * GetKey(::System::Int32 index);
            public:
            virtual ::System::Collections::IList * GetKeyList();
            public:
            virtual ::System::Collections::IList * GetValueList();
            public:
            virtual ::System::Object * get_Item(::System::Object * key);
            public:
            virtual ::System::Object * set_Item(::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Int32 IndexOfKey(::System::Object * key);
            public:
            virtual ::System::Int32 IndexOfValue(::System::Object * value);
            public:
            ::System::Void Insert(::System::Int32 index, ::System::Object * key, ::System::Object * value);
            public:
            virtual ::System::Void RemoveAt(::System::Int32 index);
            public:
            virtual ::System::Void Remove(::System::Object * key);
            public:
            virtual ::System::Void SetByIndex(::System::Int32 index, ::System::Object * value);
            public:
            static ::System::Collections::SortedList * Synchronized(::System::Collections::SortedList * list);
            public:
            virtual ::System::Void TrimToSize();
            public:
            static void Static__ctor__();
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
            class Wrapper__ICloneable : public ::System::ICloneable
            {
                public:
                public:
                virtual ::System::Object * Clone(void * __passed_instance__);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif
