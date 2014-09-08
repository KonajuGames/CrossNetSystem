/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TYPEDREFERENCE_H__
#define __SYSTEM_TYPEDREFERENCE_H__

#ifndef CN_NO_SYSTEM_GUID
#include "CrossNetSystem/System/Primitives.h"

namespace System
{
    struct TypedReference
    {
        static System::Object * ToObject(TypedReference);
    };
}

#endif

#endif