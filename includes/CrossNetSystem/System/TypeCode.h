/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TYPECODE_H__
#define __SYSTEM_TYPECODE_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_TYPECODE
namespace System
{
    // Complete definition
    BEGIN_DECLARE_ENUM(TypeCode, ::System::Int32, 0)
        static const ::System::Int32 Empty = 0;
        static const ::System::Int32 Object = 1;
        static const ::System::Int32 DBNull = 2;
        static const ::System::Int32 Boolean = 3;
        static const ::System::Int32 Char = 4;
        static const ::System::Int32 SByte = 5;
        static const ::System::Int32 Byte = 6;
        static const ::System::Int32 Int16 = 7;
        static const ::System::Int32 UInt16 = 8;
        static const ::System::Int32 Int32 = 9;
        static const ::System::Int32 UInt32 = 10;
        static const ::System::Int32 Int64 = 11;
        static const ::System::Int32 UInt64 = 12;
        static const ::System::Int32 Single = 13;
        static const ::System::Int32 Double = 14;
        static const ::System::Int32 Decimal = 15;
        static const ::System::Int32 DateTime = 16;
        static const ::System::Int32 String = 18;
    END_DECLARE_ENUM
}
#endif

#endif
