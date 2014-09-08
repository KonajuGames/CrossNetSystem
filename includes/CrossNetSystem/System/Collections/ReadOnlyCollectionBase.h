/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_H__
#define __SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_H__

#include "CrossNetRuntime/CrossNetRuntime.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE
namespace System
{
    namespace Collections
    {
        class ReadOnlyCollectionBase : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            ::System::Collections::ArrayList * list;
            public:
            ::System::Collections::ArrayList * get_InnerList();
            public:
            virtual ::System::Int32 get_Count();
            public:
            virtual ::System::Boolean System_Collections_ICollection_get_IsSynchronized();
            public:
            virtual ::System::Object * System_Collections_ICollection_get_SyncRoot();
            public:
            virtual ::System::Void System_Collections_ICollection_CopyTo(::System::Array * array, ::System::Int32 index);
            public:
            virtual ::System::Collections::IEnumerator * GetEnumerator();
            public:
            void __ctor__();
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
            class Wrapper__IEnumerable : public ::System::Collections::IEnumerable
            {
                public:
                public:
                virtual ::System::Collections::IEnumerator * GetEnumerator(void * __passed_instance__);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif