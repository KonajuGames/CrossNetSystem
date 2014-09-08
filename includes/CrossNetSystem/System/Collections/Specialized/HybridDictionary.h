/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_H__
#define __SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_H__

#include "CrossNetRuntime/CrossNetRuntime.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY

namespace System
{
    namespace Collections
    {
        namespace Specialized
        {
            class ListDictionary;

            class HybridDictionary : public ::System::Object
            {
                CN_DYNAMIC_ID()
                private:
                static ::System::Int32 CutoverPoint;
                private:
                static ::System::Int32 InitialHashtableSize;
                private:
                static ::System::Int32 FixedSizeCutoverPoint;
                private:
                ::System::Collections::Specialized::ListDictionary * list;
                private:
                ::System::Collections::Hashtable * hashtable;
                private:
                ::System::Boolean caseInsensitive;
                public:
                void __ctor__();
                static ::System::Collections::Specialized::HybridDictionary * __Create__();
                public:
                void __ctor__(::System::Int32 initialSize);
                static ::System::Collections::Specialized::HybridDictionary * __Create__(::System::Int32 initialSize);
                public:
                void __ctor__(::System::Boolean caseInsensitive);
                static ::System::Collections::Specialized::HybridDictionary * __Create__(::System::Boolean caseInsensitive);
                public:
                void __ctor__(::System::Int32 initialSize, ::System::Boolean caseInsensitive);
                static ::System::Collections::Specialized::HybridDictionary * __Create__(::System::Int32 initialSize, ::System::Boolean caseInsensitive);
                public:
                ::System::Object * get_Item(::System::Object * key);
                public:
                ::System::Object * set_Item(::System::Object * key, ::System::Object * value);
                private:
                ::System::Collections::Specialized::ListDictionary * get_List();
                private:
                void ChangeOver();
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
                void Add(::System::Object * key, ::System::Object * value);
                public:
                void Clear();
                public:
                ::System::Boolean Contains(::System::Object * key);
                public:
                void CopyTo(::System::Array * array, ::System::Int32 index);
                public:
                ::System::Collections::IDictionaryEnumerator * GetEnumerator();
                public:
                virtual ::System::Collections::IEnumerator * System_Collections_IEnumerable_GetEnumerator();
                public:
                void Remove(::System::Object * key);
                public:
                static void Static__ctor__();
                class Wrapper__IDictionary : public ::System::Collections::IDictionary
                {
                    public:
                    public:
                    virtual ::System::Object * get_Item(void * __passed_instance__, ::System::Object * key)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_Item( key));
                    }
                    public:
                    virtual ::System::Object * set_Item(void * __passed_instance__, ::System::Object * key, ::System::Object * value)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->set_Item( key,  value));
                    }
                    public:
                    virtual ::System::Collections::ICollection * get_Keys(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_Keys());
                    }
                    public:
                    virtual ::System::Collections::ICollection * get_Values(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_Values());
                    }
                    public:
                    virtual ::System::Boolean Contains(void * __passed_instance__, ::System::Object * key)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->Contains( key));
                    }
                    public:
                    virtual void Add(void * __passed_instance__, ::System::Object * key, ::System::Object * value)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	__instance__->Add( key,  value);
                    }
                    public:
                    virtual void Clear(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	__instance__->Clear();
                    }
                    public:
                    virtual ::System::Boolean get_IsReadOnly(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_IsReadOnly());
                    }
                    public:
                    virtual ::System::Boolean get_IsFixedSize(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_IsFixedSize());
                    }
                    public:
                    virtual ::System::Collections::IDictionaryEnumerator * GetEnumerator(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->GetEnumerator());
                    }
                    public:
                    virtual void Remove(void * __passed_instance__, ::System::Object * key)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	__instance__->Remove( key);
                    }
                    CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
                };
                class Wrapper__IEnumerable : public ::System::Collections::IEnumerable
                {
                    public:
                    public:
                    virtual ::System::Collections::IEnumerator * GetEnumerator(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->System_Collections_IEnumerable_GetEnumerator());
                    }
                    CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
                };
                class Wrapper__ICollection : public ::System::Collections::ICollection
                {
                    public:
                    public:
                    virtual void CopyTo(void * __passed_instance__, ::System::Array * array, ::System::Int32 index)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	__instance__->CopyTo( array,  index);
                    }
                    public:
                    virtual ::System::Int32 get_Count(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_Count());
                    }
                    public:
                    virtual ::System::Object * get_SyncRoot(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_SyncRoot());
                    }
                    public:
                    virtual ::System::Boolean get_IsSynchronized(void * __passed_instance__)
                    {
                    	::System::Collections::Specialized::HybridDictionary * __instance__ = static_cast<::System::Collections::Specialized::HybridDictionary *>(__passed_instance__);
                    	return (__instance__->get_IsSynchronized());
                    }
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
