/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_CONVERT_H__
#define __SYSTEM_CONVERT_H__

#ifndef CN_NO_SYSTEM_CONVERT

#include "CrossNetRuntime/Internal/BaseTypes.h"

namespace CrossNetRuntime
{
    template <typename T>
    class PointerWrapper;
}

namespace System
{
    class IConvertible;
    struct DateTime;
    struct Base64FormattingOptions;

    class Convert : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::Array__G< ::System::Type * > * ConvertTypes;
        public:
        static ::System::Array__G< ::System::Char > * base64Table;
        public:
        static ::System::Object * DBNull;
        public:
        static ::System::TypeCode GetTypeCode(::System::Object * value);
        public:
        static ::System::Boolean IsDBNull(::System::Object * value);
        public:
        static ::System::Object * ChangeType(::System::Object * value, ::System::TypeCode typeCode);
        public:
        static ::System::Object * ChangeType(::System::Object * value, ::System::TypeCode typeCode, ::System::IFormatProvider * provider);
        public:
        static ::System::Object * DefaultToType(::System::IConvertible * value, ::System::Type * targetType, ::System::IFormatProvider * provider);
        public:
        static ::System::Object * ChangeType(::System::Object * value, ::System::Type * conversionType);
        public:
        static ::System::Object * ChangeType(::System::Object * value, ::System::Type * conversionType, ::System::IFormatProvider * provider);
        public:
        static ::System::Boolean ToBoolean(::System::Object * value);
        public:
        static ::System::Boolean ToBoolean(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Boolean ToBoolean(::System::Boolean value);
        public:
        static ::System::Boolean ToBoolean(::System::SByte value);
        public:
        static ::System::Boolean ToBoolean(::System::Char value);
        public:
        static ::System::Boolean ToBoolean(::System::Byte value);
        public:
        static ::System::Boolean ToBoolean(::System::Int16 value);
        public:
        static ::System::Boolean ToBoolean(::System::UInt16 value);
        public:
        static ::System::Boolean ToBoolean(::System::Int32 value);
        public:
        static ::System::Boolean ToBoolean(::System::UInt32 value);
        public:
        static ::System::Boolean ToBoolean(::System::Int64 value);
        public:
        static ::System::Boolean ToBoolean(::System::UInt64 value);
        public:
        static ::System::Boolean ToBoolean(::System::String * value);
        public:
        static ::System::Boolean ToBoolean(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Boolean ToBoolean(::System::Single value);
        public:
        static ::System::Boolean ToBoolean(::System::Double value);
        public:
        static ::System::Boolean ToBoolean(::System::Decimal value);
        public:
        static ::System::Boolean ToBoolean(::System::DateTime value);
        public:
        static ::System::Char ToChar(::System::Object * value);
        public:
        static ::System::Char ToChar(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Char ToChar(::System::Boolean value);
        public:
        static ::System::Char ToChar(::System::Char value);
        public:
        static ::System::Char ToChar(::System::SByte value);
        public:
        static ::System::Char ToChar(::System::Byte value);
        public:
        static ::System::Char ToChar(::System::Int16 value);
        public:
        static ::System::Char ToChar(::System::UInt16 value);
        public:
        static ::System::Char ToChar(::System::Int32 value);
        public:
        static ::System::Char ToChar(::System::UInt32 value);
        public:
        static ::System::Char ToChar(::System::Int64 value);
        public:
        static ::System::Char ToChar(::System::UInt64 value);
        public:
        static ::System::Char ToChar(::System::String * value);
        public:
        static ::System::Char ToChar(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Char ToChar(::System::Single value);
        public:
        static ::System::Char ToChar(::System::Double value);
        public:
        static ::System::Char ToChar(::System::Decimal value);
        public:
        static ::System::Char ToChar(::System::DateTime value);
        public:
        static ::System::SByte ToSByte(::System::Object * value);
        public:
        static ::System::SByte ToSByte(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::SByte ToSByte(::System::Boolean value);
        public:
        static ::System::SByte ToSByte(::System::SByte value);
        public:
        static ::System::SByte ToSByte(::System::Char value);
        public:
        static ::System::SByte ToSByte(::System::Byte value);
        public:
        static ::System::SByte ToSByte(::System::Int16 value);
        public:
        static ::System::SByte ToSByte(::System::UInt16 value);
        public:
        static ::System::SByte ToSByte(::System::Int32 value);
        public:
        static ::System::SByte ToSByte(::System::UInt32 value);
        public:
        static ::System::SByte ToSByte(::System::Int64 value);
        public:
        static ::System::SByte ToSByte(::System::UInt64 value);
        public:
        static ::System::SByte ToSByte(::System::Single value);
        public:
        static ::System::SByte ToSByte(::System::Double value);
        public:
        static ::System::SByte ToSByte(::System::Decimal value);
        public:
        static ::System::SByte ToSByte(::System::String * value);
        public:
        static ::System::SByte ToSByte(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::SByte ToSByte(::System::DateTime value);
        public:
        static ::System::Byte ToByte(::System::Object * value);
        public:
        static ::System::Byte ToByte(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Byte ToByte(::System::Boolean value);
        public:
        static ::System::Byte ToByte(::System::Byte value);
        public:
        static ::System::Byte ToByte(::System::Char value);
        public:
        static ::System::Byte ToByte(::System::SByte value);
        public:
        static ::System::Byte ToByte(::System::Int16 value);
        public:
        static ::System::Byte ToByte(::System::UInt16 value);
        public:
        static ::System::Byte ToByte(::System::Int32 value);
        public:
        static ::System::Byte ToByte(::System::UInt32 value);
        public:
        static ::System::Byte ToByte(::System::Int64 value);
        public:
        static ::System::Byte ToByte(::System::UInt64 value);
        public:
        static ::System::Byte ToByte(::System::Single value);
        public:
        static ::System::Byte ToByte(::System::Double value);
        public:
        static ::System::Byte ToByte(::System::Decimal value);
        public:
        static ::System::Byte ToByte(::System::String * value);
        public:
        static ::System::Byte ToByte(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Byte ToByte(::System::DateTime value);
        public:
        static ::System::Int16 ToInt16(::System::Object * value);
        public:
        static ::System::Int16 ToInt16(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int16 ToInt16(::System::Boolean value);
        public:
        static ::System::Int16 ToInt16(::System::Char value);
        public:
        static ::System::Int16 ToInt16(::System::SByte value);
        public:
        static ::System::Int16 ToInt16(::System::Byte value);
        public:
        static ::System::Int16 ToInt16(::System::UInt16 value);
        public:
        static ::System::Int16 ToInt16(::System::Int32 value);
        public:
        static ::System::Int16 ToInt16(::System::UInt32 value);
        public:
        static ::System::Int16 ToInt16(::System::Int16 value);
        public:
        static ::System::Int16 ToInt16(::System::Int64 value);
        public:
        static ::System::Int16 ToInt16(::System::UInt64 value);
        public:
        static ::System::Int16 ToInt16(::System::Single value);
        public:
        static ::System::Int16 ToInt16(::System::Double value);
        public:
        static ::System::Int16 ToInt16(::System::Decimal value);
        public:
        static ::System::Int16 ToInt16(::System::String * value);
        public:
        static ::System::Int16 ToInt16(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int16 ToInt16(::System::DateTime value);
        public:
        static ::System::UInt16 ToUInt16(::System::Object * value);
        public:
        static ::System::UInt16 ToUInt16(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt16 ToUInt16(::System::Boolean value);
        public:
        static ::System::UInt16 ToUInt16(::System::Char value);
        public:
        static ::System::UInt16 ToUInt16(::System::SByte value);
        public:
        static ::System::UInt16 ToUInt16(::System::Byte value);
        public:
        static ::System::UInt16 ToUInt16(::System::Int16 value);
        public:
        static ::System::UInt16 ToUInt16(::System::Int32 value);
        public:
        static ::System::UInt16 ToUInt16(::System::UInt16 value);
        public:
        static ::System::UInt16 ToUInt16(::System::UInt32 value);
        public:
        static ::System::UInt16 ToUInt16(::System::Int64 value);
        public:
        static ::System::UInt16 ToUInt16(::System::UInt64 value);
        public:
        static ::System::UInt16 ToUInt16(::System::Single value);
        public:
        static ::System::UInt16 ToUInt16(::System::Double value);
        public:
        static ::System::UInt16 ToUInt16(::System::Decimal value);
        public:
        static ::System::UInt16 ToUInt16(::System::String * value);
        public:
        static ::System::UInt16 ToUInt16(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt16 ToUInt16(::System::DateTime value);
        public:
        static ::System::Int32 ToInt32(::System::Object * value);
        public:
        static ::System::Int32 ToInt32(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int32 ToInt32(::System::Boolean value);
        public:
        static ::System::Int32 ToInt32(::System::Char value);
        public:
        static ::System::Int32 ToInt32(::System::SByte value);
        public:
        static ::System::Int32 ToInt32(::System::Byte value);
        public:
        static ::System::Int32 ToInt32(::System::Int16 value);
        public:
        static ::System::Int32 ToInt32(::System::UInt16 value);
        public:
        static ::System::Int32 ToInt32(::System::UInt32 value);
        public:
        static ::System::Int32 ToInt32(::System::Int32 value);
        public:
        static ::System::Int32 ToInt32(::System::Int64 value);
        public:
        static ::System::Int32 ToInt32(::System::UInt64 value);
        public:
        static ::System::Int32 ToInt32(::System::Single value);
        public:
        static ::System::Int32 ToInt32(::System::Double value);
        public:
        static ::System::Int32 ToInt32(::System::Decimal value);
        public:
        static ::System::Int32 ToInt32(::System::String * value);
        public:
        static ::System::Int32 ToInt32(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int32 ToInt32(::System::DateTime value);
        public:
        static ::System::UInt32 ToUInt32(::System::Object * value);
        public:
        static ::System::UInt32 ToUInt32(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt32 ToUInt32(::System::Boolean value);
        public:
        static ::System::UInt32 ToUInt32(::System::Char value);
        public:
        static ::System::UInt32 ToUInt32(::System::SByte value);
        public:
        static ::System::UInt32 ToUInt32(::System::Byte value);
        public:
        static ::System::UInt32 ToUInt32(::System::Int16 value);
        public:
        static ::System::UInt32 ToUInt32(::System::UInt16 value);
        public:
        static ::System::UInt32 ToUInt32(::System::Int32 value);
        public:
        static ::System::UInt32 ToUInt32(::System::UInt32 value);
        public:
        static ::System::UInt32 ToUInt32(::System::Int64 value);
        public:
        static ::System::UInt32 ToUInt32(::System::UInt64 value);
        public:
        static ::System::UInt32 ToUInt32(::System::Single value);
        public:
        static ::System::UInt32 ToUInt32(::System::Double value);
        public:
        static ::System::UInt32 ToUInt32(::System::Decimal value);
        public:
        static ::System::UInt32 ToUInt32(::System::String * value);
        public:
        static ::System::UInt32 ToUInt32(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt32 ToUInt32(::System::DateTime value);
        public:
        static ::System::Int64 ToInt64(::System::Object * value);
        public:
        static ::System::Int64 ToInt64(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int64 ToInt64(::System::Boolean value);
        public:
        static ::System::Int64 ToInt64(::System::Char value);
        public:
        static ::System::Int64 ToInt64(::System::SByte value);
        public:
        static ::System::Int64 ToInt64(::System::Byte value);
        public:
        static ::System::Int64 ToInt64(::System::Int16 value);
        public:
        static ::System::Int64 ToInt64(::System::UInt16 value);
        public:
        static ::System::Int64 ToInt64(::System::Int32 value);
        public:
        static ::System::Int64 ToInt64(::System::UInt32 value);
        public:
        static ::System::Int64 ToInt64(::System::UInt64 value);
        public:
        static ::System::Int64 ToInt64(::System::Int64 value);
        public:
        static ::System::Int64 ToInt64(::System::Single value);
        public:
        static ::System::Int64 ToInt64(::System::Double value);
        public:
        static ::System::Int64 ToInt64(::System::Decimal value);
        public:
        static ::System::Int64 ToInt64(::System::String * value);
        public:
        static ::System::Int64 ToInt64(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Int64 ToInt64(::System::DateTime value);
        public:
        static ::System::UInt64 ToUInt64(::System::Object * value);
        public:
        static ::System::UInt64 ToUInt64(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt64 ToUInt64(::System::Boolean value);
        public:
        static ::System::UInt64 ToUInt64(::System::Char value);
        public:
        static ::System::UInt64 ToUInt64(::System::SByte value);
        public:
        static ::System::UInt64 ToUInt64(::System::Byte value);
        public:
        static ::System::UInt64 ToUInt64(::System::Int16 value);
        public:
        static ::System::UInt64 ToUInt64(::System::UInt16 value);
        public:
        static ::System::UInt64 ToUInt64(::System::Int32 value);
        public:
        static ::System::UInt64 ToUInt64(::System::UInt32 value);
        public:
        static ::System::UInt64 ToUInt64(::System::Int64 value);
        public:
        static ::System::UInt64 ToUInt64(::System::UInt64 value);
        public:
        static ::System::UInt64 ToUInt64(::System::Single value);
        public:
        static ::System::UInt64 ToUInt64(::System::Double value);
        public:
        static ::System::UInt64 ToUInt64(::System::Decimal value);
        public:
        static ::System::UInt64 ToUInt64(::System::String * value);
        public:
        static ::System::UInt64 ToUInt64(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::UInt64 ToUInt64(::System::DateTime value);
        public:
        static ::System::Single ToSingle(::System::Object * value);
        public:
        static ::System::Single ToSingle(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Single ToSingle(::System::SByte value);
        public:
        static ::System::Single ToSingle(::System::Byte value);
        public:
        static ::System::Single ToSingle(::System::Char value);
        public:
        static ::System::Single ToSingle(::System::Int16 value);
        public:
        static ::System::Single ToSingle(::System::UInt16 value);
        public:
        static ::System::Single ToSingle(::System::Int32 value);
        public:
        static ::System::Single ToSingle(::System::UInt32 value);
        public:
        static ::System::Single ToSingle(::System::Int64 value);
        public:
        static ::System::Single ToSingle(::System::UInt64 value);
        public:
        static ::System::Single ToSingle(::System::Single value);
        public:
        static ::System::Single ToSingle(::System::Double value);
        public:
        static ::System::Single ToSingle(::System::Decimal value);
        public:
        static ::System::Single ToSingle(::System::String * value);
        public:
        static ::System::Single ToSingle(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Single ToSingle(::System::Boolean value);
        public:
        static ::System::Single ToSingle(::System::DateTime value);
        public:
        static ::System::Double ToDouble(::System::Object * value);
        public:
        static ::System::Double ToDouble(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Double ToDouble(::System::SByte value);
        public:
        static ::System::Double ToDouble(::System::Byte value);
        public:
        static ::System::Double ToDouble(::System::Int16 value);
        public:
        static ::System::Double ToDouble(::System::Char value);
        public:
        static ::System::Double ToDouble(::System::UInt16 value);
        public:
        static ::System::Double ToDouble(::System::Int32 value);
        public:
        static ::System::Double ToDouble(::System::UInt32 value);
        public:
        static ::System::Double ToDouble(::System::Int64 value);
        public:
        static ::System::Double ToDouble(::System::UInt64 value);
        public:
        static ::System::Double ToDouble(::System::Single value);
        public:
        static ::System::Double ToDouble(::System::Double value);
        public:
        static ::System::Double ToDouble(::System::Decimal value);
        public:
        static ::System::Double ToDouble(::System::String * value);
        public:
        static ::System::Double ToDouble(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Double ToDouble(::System::Boolean value);
        public:
        static ::System::Double ToDouble(::System::DateTime value);
        public:
        static ::System::Decimal ToDecimal(::System::Object * value);
        public:
        static ::System::Decimal ToDecimal(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Decimal ToDecimal(::System::SByte value);
        public:
        static ::System::Decimal ToDecimal(::System::Byte value);
        public:
        static ::System::Decimal ToDecimal(::System::Char value);
        public:
        static ::System::Decimal ToDecimal(::System::Int16 value);
        public:
        static ::System::Decimal ToDecimal(::System::UInt16 value);
        public:
        static ::System::Decimal ToDecimal(::System::Int32 value);
        public:
        static ::System::Decimal ToDecimal(::System::UInt32 value);
        public:
        static ::System::Decimal ToDecimal(::System::Int64 value);
        public:
        static ::System::Decimal ToDecimal(::System::UInt64 value);
        public:
        static ::System::Decimal ToDecimal(::System::Single value);
        public:
        static ::System::Decimal ToDecimal(::System::Double value);
        public:
        static ::System::Decimal ToDecimal(::System::String * value);
        public:
        static ::System::Decimal ToDecimal(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Decimal ToDecimal(::System::Decimal value);
        public:
        static ::System::Decimal ToDecimal(::System::Boolean value);
        public:
        static ::System::Decimal ToDecimal(::System::DateTime value);
        public:
        static ::System::DateTime ToDateTime(::System::DateTime value);
        public:
        static ::System::DateTime ToDateTime(::System::Object * value);
        public:
        static ::System::DateTime ToDateTime(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::DateTime ToDateTime(::System::String * value);
        public:
        static ::System::DateTime ToDateTime(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::DateTime ToDateTime(::System::SByte value);
        public:
        static ::System::DateTime ToDateTime(::System::Byte value);
        public:
        static ::System::DateTime ToDateTime(::System::Int16 value);
        public:
        static ::System::DateTime ToDateTime(::System::UInt16 value);
        public:
        static ::System::DateTime ToDateTime(::System::Int32 value);
        public:
        static ::System::DateTime ToDateTime(::System::UInt32 value);
        public:
        static ::System::DateTime ToDateTime(::System::Int64 value);
        public:
        static ::System::DateTime ToDateTime(::System::UInt64 value);
        public:
        static ::System::DateTime ToDateTime(::System::Boolean value);
        public:
        static ::System::DateTime ToDateTime(::System::Char value);
        public:
        static ::System::DateTime ToDateTime(::System::Single value);
        public:
        static ::System::DateTime ToDateTime(::System::Double value);
        public:
        static ::System::DateTime ToDateTime(::System::Decimal value);
        public:
        static ::System::String * ToString(::System::Object * value);
        public:
        static ::System::String * ToString(::System::Object * value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Boolean value);
        public:
        static ::System::String * ToString(::System::Boolean value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Char value);
        public:
        static ::System::String * ToString(::System::Char value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::SByte value);
        public:
        static ::System::String * ToString(::System::SByte value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Byte value);
        public:
        static ::System::String * ToString(::System::Byte value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Int16 value);
        public:
        static ::System::String * ToString(::System::Int16 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::UInt16 value);
        public:
        static ::System::String * ToString(::System::UInt16 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Int32 value);
        public:
        static ::System::String * ToString(::System::Int32 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::UInt32 value);
        public:
        static ::System::String * ToString(::System::UInt32 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Int64 value);
        public:
        static ::System::String * ToString(::System::Int64 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::UInt64 value);
        public:
        static ::System::String * ToString(::System::UInt64 value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Single value);
        public:
        static ::System::String * ToString(::System::Single value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Double value);
        public:
        static ::System::String * ToString(::System::Double value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::Decimal value);
        public:
        static ::System::String * ToString(::System::Decimal value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::DateTime value);
        public:
        static ::System::String * ToString(::System::DateTime value, ::System::IFormatProvider * provider);
        public:
        static ::System::String * ToString(::System::String * value);
        public:
        static ::System::String * ToString(::System::String * value, ::System::IFormatProvider * provider);
        public:
        static ::System::Byte ToByte(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::SByte ToSByte(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::Int16 ToInt16(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::UInt16 ToUInt16(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::Int32 ToInt32(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::UInt32 ToUInt32(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::Int64 ToInt64(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::UInt64 ToUInt64(::System::String * value, ::System::Int32 fromBase);
        public:
        static ::System::String * ToString(::System::Byte value, ::System::Int32 toBase);
        public:
        static ::System::String * ToString(::System::Int16 value, ::System::Int32 toBase);
        public:
        static ::System::String * ToString(::System::Int32 value, ::System::Int32 toBase);
        public:
        static ::System::String * ToString(::System::Int64 value, ::System::Int32 toBase);
        public:
        static ::System::String * ToBase64String(::System::Array__G< ::System::Byte > * inArray);
        public:
        static ::System::String * ToBase64String(::System::Array__G< ::System::Byte > * inArray, ::System::Base64FormattingOptions options);
        public:
        static ::System::String * ToBase64String(::System::Array__G< ::System::Byte > * inArray, ::System::Int32 offset, ::System::Int32 length);
        public:
        static ::System::String * ToBase64String(::System::Array__G< ::System::Byte > * inArray, ::System::Int32 offset, ::System::Int32 length, ::System::Base64FormattingOptions options);
        public:
        static ::System::Int32 ToBase64CharArray(::System::Array__G< ::System::Byte > * inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::System::Array__G< ::System::Char > * outArray, ::System::Int32 offsetOut);
        public:
        static ::System::Int32 ToBase64CharArray(::System::Array__G< ::System::Byte > * inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::System::Array__G< ::System::Char > * outArray, ::System::Int32 offsetOut, ::System::Base64FormattingOptions options);
        public:
        static ::System::Int32 ConvertToBase64Array(CrossNetRuntime::PointerWrapper<::System::Char *> outChars, CrossNetRuntime::PointerWrapper<::System::Byte *> inData, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean insertLineBreaks);
        public:
        static ::System::Int32 CalculateOutputLength(::System::Int32 inputLength, ::System::Boolean insertLineBreaks);
        public:
        static ::System::Array__G< ::System::Byte > * FromBase64String(::System::String * s);
        public:
        static ::System::Array__G< ::System::Byte > * FromBase64CharArray(::System::Array__G< ::System::Char > * inArray, ::System::Int32 offset, ::System::Int32 length);
        public:
        static void Static__ctor__();
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif

