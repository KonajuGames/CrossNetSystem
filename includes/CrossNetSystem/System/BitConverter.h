/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_BITCONVERTER_H__
#define __SYSTEM_BITCONVERTER_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_BITCONVERTER

namespace System
{
    // Complete
    class BitConverter : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::Boolean IsLittleEndian;
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Boolean value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Char value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Int16 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Int32 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Int64 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::UInt16 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::UInt32 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::UInt64 value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Single value);
        public:
        static ::System::Array__G< ::System::Byte > * GetBytes(::System::Double value);
        public:
        static ::System::Char ToChar(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Int16 ToInt16(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Int32 ToInt32(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Int64 ToInt64(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::UInt16 ToUInt16(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::UInt32 ToUInt32(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::UInt64 ToUInt64(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Single ToSingle(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Double ToDouble(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Char GetHexValue(::System::Int32 i);
        public:
        static ::System::String * ToString(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex, ::System::Int32 length);
        public:
        static ::System::String * ToString(::System::Array__G< ::System::Byte > * value);
        public:
        static ::System::String * ToString(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Boolean ToBoolean(::System::Array__G< ::System::Byte > * value, ::System::Int32 startIndex);
        public:
        static ::System::Int64 DoubleToInt64Bits(::System::Double value);
        public:
        static ::System::Double Int64BitsToDouble(::System::Int64 value);
        public:
        static void Static__ctor__();
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif