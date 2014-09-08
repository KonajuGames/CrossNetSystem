/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_H__
#define __SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            class SerializationInfo;
            class ISurrogateSelector;
            struct StreamingContext;

            class ISerializationSurrogate : public CrossNetRuntime::IInterface
            {
                CN_DYNAMIC_ID()
                public:
                virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Object * obj, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context) = 0;
                public:
                virtual ::System::Object * SetObjectData(void * __passed_instance__, ::System::Object * obj, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector * selector) = 0;
                public:
                static void __CreateInterfaceMap__();
            };
        }
    }
}

#endif
#endif
