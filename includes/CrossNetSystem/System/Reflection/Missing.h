/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_REFLECTION_MISSING_H__
#define __SYSTEM_REFLECTION_MISSING_H__

#ifndef CN_NO_SYSTEM_REFLECTION_MISSING

#include "CrossNetRuntime/System/Object.h"

#include "CrossNetSystem/System/Runtime/Serialization/ISerializable.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            class SerializationInfo;
            struct StreamingContext;
        }
    }

    namespace Reflection
    {
        class Missing : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Reflection::Missing * Value;
            public:
            void __ctor__();
            static ::System::Reflection::Missing * __Create__();
            public:
            virtual ::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            public:
            static void Static__ctor__();
            class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
            {
                public:
                public:
                virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}

#endif

#endif
