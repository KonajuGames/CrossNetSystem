/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_MATH_H__
#define __SYSTEM_MATH_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_MATH

#include <math.h>

namespace System
{
    // Complete
    class Math : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::Int32 maxRoundingDigits;
        public:
        static ::System::Double PI;
        public:
        static ::System::Double E;
        public:
        static ::System::Double doubleRoundLimit;
        public:
        static ::System::Array__G< ::System::Double > * roundPower10Double;
        public:
        static ::System::Double Acos(::System::Double d)
        {
            return (acos(d));
        }
        public:
        static ::System::Double Asin(::System::Double d);
        public:
        static ::System::Double Atan(::System::Double d);
        public:
        static ::System::Double Atan2(::System::Double y, ::System::Double x);
        public:
        static ::System::Decimal Ceiling(::System::Decimal d);
        public:
        static ::System::Double Ceiling(::System::Double a);
        public:
        static ::System::Double Cos(::System::Double d)
        {
            return (cos(d));
        }
        public:
        static ::System::Double Cosh(::System::Double value);
        public:
        static ::System::Decimal Floor(::System::Decimal d);
        public:
        static ::System::Double Floor(::System::Double d);
        public:
        static ::System::Double InternalRound(::System::Double value, ::System::Int32 digits, ::System::MidpointRounding mode);
        public:
        static ::System::Double InternalTruncate(::System::Double d);
        public:
        static ::System::Double Sin(::System::Double a)
        {
            return (sin(a));
        }
        public:
        static ::System::Double Tan(::System::Double a);
        public:
        static ::System::Double Sinh(::System::Double value);
        public:
        static ::System::Double Tanh(::System::Double value);
        public:
        static ::System::Double Round(::System::Double a);
        public:
        static ::System::Double Round(::System::Double value, ::System::Int32 digits);
        public:
        static ::System::Double Round(::System::Double value, ::System::MidpointRounding mode);
        public:
        static ::System::Double Round(::System::Double value, ::System::Int32 digits, ::System::MidpointRounding mode);
        public:
        static ::System::Decimal Round(::System::Decimal d);
        public:
        static ::System::Decimal Round(::System::Decimal d, ::System::Int32 decimals);
        public:
        static ::System::Decimal Round(::System::Decimal d, ::System::MidpointRounding mode);
        public:
        static ::System::Decimal Round(::System::Decimal d, ::System::Int32 decimals, ::System::MidpointRounding mode);
        public:
        static ::System::Double SplitFractionDouble(CrossNetRuntime::PointerWrapper<::System::Double *> value);
        public:
        static ::System::Decimal Truncate(::System::Decimal d);
        public:
        static ::System::Double Truncate(::System::Double d);
        public:
        static ::System::Double Sqrt(::System::Double d);
        public:
        static ::System::Double Log(::System::Double d);
        public:
        static ::System::Double Log10(::System::Double d);
        public:
        static ::System::Double Exp(::System::Double d);
        public:
        static ::System::Double Pow(::System::Double x, ::System::Double y)
        {
            return (pow(x, y));
        }
        public:
        static ::System::Double IEEERemainder(::System::Double x, ::System::Double y);
        public:
        static ::System::SByte Abs(::System::SByte value);
        public:
        static ::System::SByte AbsHelper(::System::SByte value);
        public:
        static ::System::Int16 Abs(::System::Int16 value);
        public:
        static ::System::Int16 AbsHelper(::System::Int16 value);
        public:
        static ::System::Int32 Abs(::System::Int32 value)
        {
            if (value < 0)
            {
                return (-value);
            }
            else
            {
                return (value);
            }
        }
        public:
        static ::System::Int32 AbsHelper(::System::Int32 value);
        public:
        static ::System::Int64 Abs(::System::Int64 value);
        public:
        static ::System::Int64 AbsHelper(::System::Int64 value);
        public:
        static ::System::Single Abs(::System::Single value);
        public:
        static ::System::Double Abs(::System::Double value);
        public:
        static ::System::Decimal Abs(::System::Decimal value);
        public:
        static ::System::SByte Max(::System::SByte val1, ::System::SByte val2);
        public:
        static ::System::Byte Max(::System::Byte val1, ::System::Byte val2);
        public:
        static ::System::Int16 Max(::System::Int16 val1, ::System::Int16 val2);
        public:
        static ::System::UInt16 Max(::System::UInt16 val1, ::System::UInt16 val2);
        public:
        static ::System::Int32 Max(::System::Int32 val1, ::System::Int32 val2)
        {
            if (val1 > val2)
            {
                return (val1);
            }
            else
            {
                return (val2);
            }
        }
        public:
        static ::System::UInt32 Max(::System::UInt32 val1, ::System::UInt32 val2);
        public:
        static ::System::Int64 Max(::System::Int64 val1, ::System::Int64 val2);
        public:
        static ::System::UInt64 Max(::System::UInt64 val1, ::System::UInt64 val2);
        public:
        static ::System::Single Max(::System::Single val1, ::System::Single val2);
        public:
        static ::System::Double Max(::System::Double val1, ::System::Double val2);
        public:
        static ::System::Decimal Max(::System::Decimal val1, ::System::Decimal val2);
        public:
        static ::System::SByte Min(::System::SByte val1, ::System::SByte val2);
        public:
        static ::System::Byte Min(::System::Byte val1, ::System::Byte val2);
        public:
        static ::System::Int16 Min(::System::Int16 val1, ::System::Int16 val2);
        public:
        static ::System::UInt16 Min(::System::UInt16 val1, ::System::UInt16 val2);
        public:
        static ::System::Int32 Min(::System::Int32 val1, ::System::Int32 val2);
        public:
        static ::System::UInt32 Min(::System::UInt32 val1, ::System::UInt32 val2);
        public:
        static ::System::Int64 Min(::System::Int64 val1, ::System::Int64 val2);
        public:
        static ::System::UInt64 Min(::System::UInt64 val1, ::System::UInt64 val2);
        public:
        static ::System::Single Min(::System::Single val1, ::System::Single val2);
        public:
        static ::System::Double Min(::System::Double val1, ::System::Double val2);
        public:
        static ::System::Decimal Min(::System::Decimal val1, ::System::Decimal val2);
        public:
        static ::System::Double Log(::System::Double a, ::System::Double newBase);
        public:
        static ::System::Int32 Sign(::System::SByte value);
        public:
        static ::System::Int32 Sign(::System::Int16 value);
        public:
        static ::System::Int32 Sign(::System::Int32 value);
        public:
        static ::System::Int32 Sign(::System::Int64 value);
        public:
        static ::System::Int32 Sign(::System::Single value);
        public:
        static ::System::Int32 Sign(::System::Double value);
        public:
        static ::System::Int32 Sign(::System::Decimal value);
        public:
        static ::System::Int64 BigMul(::System::Int32 a, ::System::Int32 b);
        public:
        static ::System::Int32 DivRem(::System::Int32 a, ::System::Int32 b, ::System::Int32 * result);
        public:
        static ::System::Int64 DivRem(::System::Int64 a, ::System::Int64 b, ::System::Int64 * result);
        public:
        static void Static__ctor__();
        public:
        static void __CreateInterfaceMap__();
    };
}

#endif

#endif