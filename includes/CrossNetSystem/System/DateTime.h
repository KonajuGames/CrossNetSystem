/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_DATETIME_H__
#define __SYSTEM_DATETIME_H__

#ifndef CN_NO_SYSTEM_DATETIME

#include "CrossNetRuntime/Internal/NewDelete.h"
#include "CrossNetRuntime/System/IComparable.h"
#include "CrossNetRuntime/System/IFormattable.h"
#include "CrossNetRuntime/System/IComparable__G1.h"
#include "CrossNetRuntime/System/IEquatable__G1.h"

#include "CrossNetSystem/System/Runtime/Serialization/ISerializable.h"
#include "CrossNetSystem/System/IConvertible.h"
#include "CrossnetSystem/SystemForward.h"

#include <time.h>

namespace System
{
    // Complete definition
    struct DateTime
    {
        CN_DYNAMIC_ID()

    private:
        DateTime(clock_t);
        clock_t  mInternalTime;

        public:
        static ::System::Int64 TicksPerMillisecond;
        public:
        static ::System::Int64 TicksPerSecond;
        public:
        static ::System::Int64 TicksPerMinute;
        public:
        static ::System::Int64 TicksPerHour;
        public:
        static ::System::Int64 TicksPerDay;
        public:
        static ::System::Int32 MillisPerSecond;
        public:
        static ::System::Int32 MillisPerMinute;
        public:
        static ::System::Int32 MillisPerHour;
        public:
        static ::System::Int32 MillisPerDay;
        public:
        static ::System::Int32 DaysPerYear;
        public:
        static ::System::Int32 DaysPer4Years;
        public:
        static ::System::Int32 DaysPer100Years;
        public:
        static ::System::Int32 DaysPer400Years;
        public:
        static ::System::Int32 DaysTo1601;
        public:
        static ::System::Int32 DaysTo1899;
        public:
        static ::System::Int32 DaysTo10000;
        public:
        static ::System::Int64 MinTicks;
        public:
        static ::System::Int64 MaxTicks;
        public:
        static ::System::Int64 MaxMillis;
        public:
        static ::System::Int64 FileTimeOffset;
        public:
        static ::System::Int64 DoubleDateOffset;
        public:
        static ::System::Int64 OADateMinAsTicks;
        public:
        static ::System::Double OADateMinAsDouble;
        public:
        static ::System::Double OADateMaxAsDouble;
        public:
        static ::System::Int32 DatePartYear;
        public:
        static ::System::Int32 DatePartDayOfYear;
        public:
        static ::System::Int32 DatePartMonth;
        public:
        static ::System::Int32 DatePartDay;
        public:
        static ::System::UInt64 TicksMask;
        public:
        static ::System::UInt64 FlagsMask;
        public:
        static ::System::UInt64 LocalMask;
        public:
        static ::System::Int64 TicksCeiling;
        public:
        static ::System::UInt64 KindUnspecified;
        public:
        static ::System::UInt64 KindUtc;
        public:
        static ::System::UInt64 KindLocal;
        public:
        static ::System::UInt64 KindLocalAmbiguousDst;
        public:
        static ::System::Int32 KindShift;
        public:
        static ::System::String * TicksField;
        public:
        static ::System::String * DateDataField;
        public:
        static ::System::Array__G< ::System::Int32 > * DaysToMonth365;
        public:
        static ::System::Array__G< ::System::Int32 > * DaysToMonth366;
        public:
        static ::System::DateTime MinValue;
        public:
        static ::System::DateTime MaxValue;
        public:
        ::System::UInt64 dateData;
        public:
        void __ctor__(::System::Int64 ticks);
        DateTime(::System::Int64 ticks);
        public:
        void __ctor__(::System::UInt64 dateData);
        DateTime(::System::UInt64 dateData);
        public:
        void __ctor__(::System::Int64 ticks, ::System::DateTimeKind kind);
        DateTime(::System::Int64 ticks, ::System::DateTimeKind kind);
        public:
        void __ctor__(::System::Int64 ticks, ::System::DateTimeKind kind, ::System::Boolean isAmbiguousDst);
        DateTime(::System::Int64 ticks, ::System::DateTimeKind kind, ::System::Boolean isAmbiguousDst);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Globalization::Calendar * calendar);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Globalization::Calendar * calendar);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::DateTimeKind kind);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::DateTimeKind kind);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Globalization::Calendar * calendar);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Globalization::Calendar * calendar);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::DateTimeKind kind);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::DateTimeKind kind);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar * calendar);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar * calendar);
        public:
        void __ctor__(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar * calendar, ::System::DateTimeKind kind);
        DateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar * calendar, ::System::DateTimeKind kind);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        DateTime(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Int64 get_InternalTicks();
        public:
        ::System::UInt64 get_InternalKind();
        public:
        ::System::DateTime Add(::System::TimeSpan value);
        public:
        ::System::DateTime Add(::System::Double value, ::System::Int32 scale);
        public:
        ::System::DateTime AddDays(::System::Double value);
        public:
        ::System::DateTime AddHours(::System::Double value);
        public:
        ::System::DateTime AddMilliseconds(::System::Double value);
        public:
        ::System::DateTime AddMinutes(::System::Double value);
        public:
        ::System::DateTime AddMonths(::System::Int32 months);
        public:
        ::System::DateTime AddSeconds(::System::Double value);
        public:
        ::System::DateTime AddTicks(::System::Int64 value);
        public:
        ::System::DateTime AddYears(::System::Int32 value);
        public:
        static ::System::Int32 Compare(::System::DateTime t1, ::System::DateTime t2);
        public:
        ::System::Int32 CompareTo(::System::Object * value);
        public:
        ::System::Int32 CompareTo(::System::DateTime value);
        public:
        static ::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day);
        public:
        static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second);
        public:
        static ::System::Int32 DaysInMonth(::System::Int32 year, ::System::Int32 month);
        public:
        static ::System::Int64 DoubleDateToTicks(::System::Double value);
        public:
        ::System::Boolean Equals(::System::Object * value);
        public:
        ::System::Boolean Equals(::System::DateTime value);
        public:
        static ::System::Boolean Equals(::System::DateTime t1, ::System::DateTime t2);
        public:
        static ::System::DateTime FromBinary(::System::Int64 dateData);
        public:
        static ::System::DateTime FromBinaryRaw(::System::Int64 dateData);
        public:
        static ::System::DateTime FromFileTime(::System::Int64 fileTime);
        public:
        static ::System::DateTime FromFileTimeUtc(::System::Int64 fileTime);
        public:
        static ::System::DateTime FromOADate(::System::Double d);
        public:
        ::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Boolean IsDaylightSavingTime();
        public:
        static ::System::DateTime SpecifyKind(::System::DateTime value, ::System::DateTimeKind kind);
        public:
        ::System::Int64 ToBinary();
        public:
        ::System::Int64 ToBinaryRaw();
        public:
        ::System::DateTime get_Date();
        public:
        ::System::Int32 GetDatePart(::System::Int32 part);
        public:
        ::System::Int32 get_Day();
        public:
        ::System::DayOfWeek get_DayOfWeek();
        public:
        ::System::Int32 get_DayOfYear();
        public:
        ::System::Int32 GetHashCode();
        public:
        ::System::Int32 get_Hour();
        public:
        ::System::Boolean IsAmbiguousDaylightSavingTime();
        public:
        ::System::DateTimeKind get_Kind();
        public:
        ::System::Int32 get_Millisecond();
        public:
        ::System::Int32 get_Minute();
        public:
        ::System::Int32 get_Month();
        public:
        static ::System::DateTime get_Now();
        public:
        static ::System::DateTime get_UtcNow();
        public:
        static ::System::Int64 GetSystemTimeAsFileTime();
        public:
        ::System::Int32 get_Second();
        public:
        ::System::Int64 get_Ticks();
        public:
        ::System::TimeSpan get_TimeOfDay();
        public:
        static ::System::DateTime get_Today();
        public:
        ::System::Int32 get_Year();
        public:
        static ::System::Boolean IsLeapYear(::System::Int32 year);
        public:
        static ::System::DateTime Parse(::System::String * s);
        public:
        static ::System::DateTime Parse(::System::String * s, ::System::IFormatProvider * provider);
        public:
        static ::System::DateTime Parse(::System::String * s, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles styles);
        public:
        static ::System::DateTime ParseExact(::System::String * s, ::System::String * format, ::System::IFormatProvider * provider);
        public:
        static ::System::DateTime ParseExact(::System::String * s, ::System::String * format, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles style);
        public:
        static ::System::DateTime ParseExact(::System::String * s, ::System::Array__G< ::System::String * > * formats, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles style);
        public:
        ::System::TimeSpan Subtract(::System::DateTime value);
        public:
        ::System::DateTime Subtract(::System::TimeSpan value);
        public:
        static ::System::Double TicksToOADate(::System::Int64 value);
        public:
        ::System::Double ToOADate();
        public:
        ::System::Int64 ToFileTime();
        public:
        ::System::Int64 ToFileTimeUtc();
        public:
        ::System::DateTime ToLocalTime();
        public:
        ::System::String * ToLongDateString();
        public:
        ::System::String * ToLongTimeString();
        public:
        ::System::String * ToShortDateString();
        public:
        ::System::String * ToShortTimeString();
        public:
        ::System::String * ToString();
        public:
        ::System::String * ToString(::System::String * format);
        public:
        ::System::String * ToString(::System::IFormatProvider * provider);
        public:
        ::System::String * ToString(::System::String * format, ::System::IFormatProvider * provider);
        public:
        ::System::DateTime ToUniversalTime();
        public:
        static ::System::Boolean TryParse(::System::String * s, ::System::DateTime * result);
        public:
        static ::System::Boolean TryParse(::System::String * s, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles styles, ::System::DateTime * result);
        public:
        static ::System::Boolean TryParseExact(::System::String * s, ::System::String * format, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles style, ::System::DateTime * result);
        public:
        static ::System::Boolean TryParseExact(::System::String * s, ::System::Array__G< ::System::String * > * formats, ::System::IFormatProvider * provider, ::System::Globalization::DateTimeStyles style, ::System::DateTime * result);
        public:
        static ::System::DateTime op_Addition(::System::DateTime d, ::System::TimeSpan t);
        public:
        static ::System::DateTime op_Subtraction(::System::DateTime d, ::System::TimeSpan t);
        public:
        static ::System::TimeSpan op_Subtraction(::System::DateTime d1, ::System::DateTime d2);
        public:
        static ::System::Boolean op_Equality(::System::DateTime d1, ::System::DateTime d2);
        public:
        static ::System::Boolean op_Inequality(::System::DateTime d1, ::System::DateTime d2);
        public:
        static ::System::Boolean op_LessThan(::System::DateTime t1, ::System::DateTime t2);
        public:
        static ::System::Boolean op_LessThanOrEqual(::System::DateTime t1, ::System::DateTime t2);
        public:
        static ::System::Boolean op_GreaterThan(::System::DateTime t1, ::System::DateTime t2);
        public:
        static ::System::Boolean op_GreaterThanOrEqual(::System::DateTime t1, ::System::DateTime t2);
        public:
        ::System::Array__G< ::System::String * > * GetDateTimeFormats();
        public:
        ::System::Array__G< ::System::String * > * GetDateTimeFormats(::System::IFormatProvider * provider);
        public:
        ::System::Array__G< ::System::String * > * GetDateTimeFormats(::System::Char format);
        public:
        ::System::Array__G< ::System::String * > * GetDateTimeFormats(::System::Char format, ::System::IFormatProvider * provider);
        public:
        ::System::TypeCode GetTypeCode();
        public:
        ::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider * provider);
        public:
        ::System::Char System_IConvertible_ToChar(::System::IFormatProvider * provider);
        public:
        ::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider * provider);
        public:
        ::System::Byte System_IConvertible_ToByte(::System::IFormatProvider * provider);
        public:
        ::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider * provider);
        public:
        ::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider * provider);
        public:
        ::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider * provider);
        public:
        ::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider * provider);
        public:
        ::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider * provider);
        public:
        ::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider * provider);
        public:
        ::System::Single System_IConvertible_ToSingle(::System::IFormatProvider * provider);
        public:
        ::System::Double System_IConvertible_ToDouble(::System::IFormatProvider * provider);
        public:
        ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider * provider);
        public:
        ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider * provider);
        public:
        ::System::Object * System_IConvertible_ToType(::System::Type * type, ::System::IFormatProvider * provider);
        public:
        static ::System::Boolean TryCreate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::DateTime * result);
        public:
        static void Static__ctor__();
        public:
        CROSSNET_FINLINE
        DateTime();
        void __ctor__();
        class Wrapper__IComparable : public ::System::IComparable
        {
            public:
            public:
            virtual ::System::Int32 CompareTo(void * __passed_instance__, ::System::Object * obj);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        class Wrapper__IFormattable : public ::System::IFormattable
        {
            public:
            public:
            virtual ::System::String * ToString(void * __passed_instance__, ::System::String * format, ::System::IFormatProvider * formatProvider);
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
        class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        class Wrapper__IComparable__G1 : public ::System::IComparable__G1<::System::DateTime>
        {
            public:
            public:
            virtual ::System::Int32 CompareTo(void * __passed_instance__, ::System::DateTime other);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        class Wrapper__IEquatable__G1 : public ::System::IEquatable__G1<::System::DateTime>
        {
            public:
            public:
            virtual ::System::Boolean Equals(void * __passed_instance__, ::System::DateTime other);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
        CN__NEW_DELETE_OPERATORS_FOR_VALUE_TYPE
    };
}
#endif

#endif
