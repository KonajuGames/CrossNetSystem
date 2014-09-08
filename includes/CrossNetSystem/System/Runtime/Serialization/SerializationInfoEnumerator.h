/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_H__
#define __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_H__

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            struct SerializationEntry;

            class SerializationInfoEnumerator : public System::Object
            {
            public:
                static SerializationInfoEnumerator * __Create__();

                SerializationEntry get_Current();
                System::Boolean MoveNext();
                void Reset();
                System::Type * get_ObjectType();
                System::String * get_Name();
                System::Object * get_Value();
            };
        }
    }
}

#endif
#endif
