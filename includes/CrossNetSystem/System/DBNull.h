/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_DBNULL_H__
#define __SYSTEM_DBNULL_H__

#ifndef CN_NO_SYSTEM_DBNULL

#include "CrossNetRuntime/System/Object.h"

#include "CrossNetSystem/System/IConvertible.h"
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

    // Incomplete definition
    class DBNull : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::DBNull * Value;
        public:
        void __ctor__();
        static ::System::DBNull * __Create__();
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        static ::System::DBNull * __Create__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::String * ToString();
        public:
        ::System::String * ToString(::System::IFormatProvider * provider);
        public:
        ::System::TypeCode GetTypeCode();
        public:
        virtual ::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider * provider);
        public:
        virtual ::System::Char System_IConvertible_ToChar(::System::IFormatProvider * provider);
        public:
        virtual ::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider * provider);
        public:
        virtual ::System::Byte System_IConvertible_ToByte(::System::IFormatProvider * provider);
        public:
        virtual ::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider * provider);
        public:
        virtual ::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider * provider);
        public:
        virtual ::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider * provider);
        public:
        virtual ::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider * provider);
        public:
        virtual ::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider * provider);
        public:
        virtual ::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider * provider);
        public:
        virtual ::System::Single System_IConvertible_ToSingle(::System::IFormatProvider * provider);
        public:
        virtual ::System::Double System_IConvertible_ToDouble(::System::IFormatProvider * provider);
        public:
        virtual ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider * provider);
        public:
        virtual ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider * provider);
        public:
        virtual ::System::Object * System_IConvertible_ToType(::System::Type * type, ::System::IFormatProvider * provider);
        public:
        static void Static__ctor__();
        class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        class Wrapper__IConvertible : public ::System::IConvertible
        {
            public:
            public:
            virtual ::System::TypeCode GetTypeCode(void * __passed_instance__);
            public:
            virtual ::System::Boolean ToBoolean(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Char ToChar(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::SByte ToSByte(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Byte ToByte(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Int16 ToInt16(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::UInt16 ToUInt16(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Int32 ToInt32(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::UInt32 ToUInt32(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Int64 ToInt64(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::UInt64 ToUInt64(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Single ToSingle(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Double ToDouble(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Decimal ToDecimal(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::DateTime ToDateTime(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::String * ToString(void * __passed_instance__, ::System::IFormatProvider * provider);
            public:
            virtual ::System::Object * ToType(void * __passed_instance__, ::System::Type * conversionType, ::System::IFormatProvider * provider);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif
