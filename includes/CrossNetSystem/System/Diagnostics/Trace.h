/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_DIAGNOSTICS_TRACE_H__
#define __SYSTEM_DIAGNOSTICS_TRACE_H__

#ifndef CN_NO_SYSTEM_DIAGNOSTICS_TRACE
#include "CrossNetRuntime/Internal/Primitives.h"

namespace System
{
    namespace Diagnostics
    {
        class Trace
        {
        public:
            static void Assert(System::Boolean b)
            {
                b;
                CROSSNET_ASSERT(b, "User assert!");
            }

            static void Fail(::System::String * /*errorTest*/)
            {
                CROSSNET_FAIL("User assert!");
            }

            static void Write(System::Object * /*obj*/)
            {
                // Not implemented...
            }
        };
    }
}
#endif

#endif
