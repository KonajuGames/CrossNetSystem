/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_GC_H__
#define __SYSTEM_GC_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_GC
namespace System
{
    // Incomplete definition
    class GC
    {
    public:
        enum
        {
            MaxGeneration = 2,
        };
        static void Collect(int numGenerations = MaxGeneration);
        static void WaitForPendingFinalizers();
        static void KeepAlive(::System::Object *);
        static System::Int32 GetGeneration(System::Object *);
    };
}
#endif

#endif
