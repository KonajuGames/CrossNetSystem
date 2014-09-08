/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IFORMATPROVIDER_H__
#define __SYSTEM_IFORMATPROVIDER_H__

#ifndef CN_NO_SYSTEM_IASYNCRESULT

#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    class IAsyncResult : public CrossNetRuntime::IInterface
    {
    public:
        CN_DYNAMIC_ID()

        virtual System::Object *                get_AsyncState(void * __instance__) = 0;
        virtual System::Threading::WaitHandle * get_AsyncWaitHandle(void * __instance__) = 0;
        virtual System::Boolean                 get_CompletedSynchronously(void * __instance__) = 0;
        virtual System::Boolean                 get_IsCompleted(void * __instance__) = 0;
    };
}
#endif

#endif
