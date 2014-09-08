/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ICONVERTIBLE_H__
#define __SYSTEM_ICONVERTIBLE_H__

#ifndef CN_NO_SYSTEM_ICONVERTIBLE
#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    struct DateTime;
    struct TypeCode;
    class IFormatProvider;
    struct Decimal;

    template <typename T>
    class Array__G;

    // Complete definition
    class IConvertible : public ::CrossNetRuntime::IInterface
    {
        CN_DYNAMIC_ID()
        public:
        virtual ::System::TypeCode GetTypeCode(void * __passed_instance__) = 0;
        public:
        virtual ::System::Boolean ToBoolean(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Char ToChar(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::SByte ToSByte(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Byte ToByte(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Int16 ToInt16(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::UInt16 ToUInt16(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Int32 ToInt32(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::UInt32 ToUInt32(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Int64 ToInt64(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::UInt64 ToUInt64(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Single ToSingle(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Double ToDouble(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Decimal ToDecimal(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::DateTime ToDateTime(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::String * ToString(void * __passed_instance__, ::System::IFormatProvider * provider) = 0;
        public:
        virtual ::System::Object * ToType(void * __passed_instance__, ::System::Type * conversionType, ::System::IFormatProvider * provider) = 0;
        public:
        static void __CreateInterfaceMap__();
    };
}
#endif

#endif
