/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ATTRIBUTE_H__
#define __SYSTEM_ATTRIBUTE_H__

#ifndef CN_NO_SYSTEM_ATTRIBUTE
#include "CrossNetRuntime/System/Object.h"
#include "CrossNetSystem/System/Runtime/InteropServices/_Attribute.h"

namespace System
{
    // System::Attribute is defined but we don't expect actually to use it for the moment
    // We will have to wait the implementation of the reflection to make use of it
    class Attribute : public System::Object
    {
    public:
        CN_DYNAMIC_ID()

        class Wrapper___Attribute : public System::Runtime::InteropServices::_Attribute
        {
        public:

        };
    };
}
#endif

#endif
