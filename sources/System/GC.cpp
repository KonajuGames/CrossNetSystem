/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/GC.h"

#include "CrossNetRuntime/GC/GCManager.h"

#ifndef CN_NO_SYSTEM_GC
namespace System
{
    void GC::Collect(int numGenerations)
    {
        CrossNetRuntime::GCManager::Collect(numGenerations, false);
    }
}
#endif
