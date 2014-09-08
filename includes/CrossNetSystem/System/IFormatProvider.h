/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_IFORMATPROVIDER_H__
#define __SYSTEM_IFORMATPROVIDER_H__

#ifndef CN_NO_SYSTEM_IFORMATPROVIDER

#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    class IFormatProvider : public CrossNetRuntime::IInterface
    {
    public:
        CN_DYNAMIC_ID()

    };
}
#endif

#endif
