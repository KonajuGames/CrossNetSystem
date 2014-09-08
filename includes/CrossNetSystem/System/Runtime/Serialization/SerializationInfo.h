/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_H__
#define __SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_H__

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            class IFormatterConverter;
            class SerializationInfoEnumerator;

            class SerializationInfo : public System::Object
            {
            public:
                static SerializationInfo * __Create__(System::Type * type, IFormatterConverter * converter);

                void AddValue(System::String *, System::Boolean);
                void AddValue(System::String *, System::Byte);
                void AddValue(System::String *, System::Char);
                void AddValue(System::String *, System::DateTime);
                void AddValue(System::String *, System::Decimal);
                void AddValue(System::String *, System::Double);
                void AddValue(System::String *, System::Int16);
                void AddValue(System::String *, System::Int32);
                void AddValue(System::String *, System::Int64);
                void AddValue(System::String *, System::Object *);
                void AddValue(System::String *, System::UInt16);
                void AddValue(System::String *, System::UInt32);
                void AddValue(System::String *, System::UInt64);
                void AddValue(System::String *, System::Object *, System::Type *);

                SerializationInfoEnumerator * GetEnumerator();
            };
        }
    }
}

#endif
#endif
