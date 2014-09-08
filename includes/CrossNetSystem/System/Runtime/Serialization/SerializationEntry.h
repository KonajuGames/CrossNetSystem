/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_H__
#define __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_H__

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            struct SerializationEntry
            {
            public:
                System::Type * get_ObjectType();
                System::String * get_Name();
                System::Object * get_Value();
            };
        }
    }
}

#endif
#endif
