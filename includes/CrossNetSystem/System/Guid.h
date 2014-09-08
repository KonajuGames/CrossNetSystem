/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_GUID_H__
#define __SYSTEM_GUID_H__

#ifndef CN_NO_SYSTEM_GUID
#include "CrossNetRuntime/Internal/Box.h"

namespace System
{
    struct Guid
    {
        CN_DYNAMIC_OBJECT_ID0(sizeof(::CrossNetRuntime::BoxedObject<Guid>))

        void __ctor__();
        System::Array__G<System::Byte> * ToByteArray();
        static Guid NewGuid();
        static const Guid Empty;
        System::String * ToString();
        System::Boolean Equals(System::Object * o);
        System::Int32 GetHashCode();
        System::Type * GetType();
    };
}

#endif

#endif