/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_REFLECTION_BINDINGFLAGS_H__
#define __SYSTEM_REFLECTION_BINDINGFLAGS_H__

#include "CrossNetRuntime/Internal/EnumWrapper.h"

#ifndef CN_NO_SYSTEM_REFLECTION_BINDINGFLAGS

namespace System
{
    namespace Reflection
    {
        BEGIN_DECLARE_ENUM(BindingFlags, ::System::Int32, 0)
            static const ::System::Int32 Default = 0;
            static const ::System::Int32 IgnoreCase = 1;
            static const ::System::Int32 DeclaredOnly = 2;
            static const ::System::Int32 Instance = 4;
            static const ::System::Int32 Static = 8;
            static const ::System::Int32 Public = 16;
            static const ::System::Int32 NonPublic = 32;
            static const ::System::Int32 FlattenHierarchy = 64;
            static const ::System::Int32 InvokeMethod = 256;
            static const ::System::Int32 CreateInstance = 512;
            static const ::System::Int32 GetField = 1024;
            static const ::System::Int32 SetField = 2048;
            static const ::System::Int32 GetProperty = 4096;
            static const ::System::Int32 SetProperty = 8192;
            static const ::System::Int32 PutDispProperty = 16384;
            static const ::System::Int32 PutRefDispProperty = 32768;
            static const ::System::Int32 ExactBinding = 65536;
            static const ::System::Int32 SuppressChangeType = 131072;
            static const ::System::Int32 OptionalParamBinding = 262144;
            static const ::System::Int32 IgnoreReturn = 16777216;
        END_DECLARE_ENUM
    }
}

#endif

#endif
