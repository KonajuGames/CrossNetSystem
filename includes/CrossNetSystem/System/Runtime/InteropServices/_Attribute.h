/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_INTEROPSERVICES__ATTRIBUTE_H__
#define __SYSTEM_RUNTIME_INTEROPSERVICES__ATTRIBUTE_H__

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__ATTRIBUTE
#include "CrossNetRuntime/Internal/IInterface.h"
namespace System
{
    namespace Runtime
    {
        namespace InteropServices
        {
            class _Attribute : public CrossNetRuntime::IInterface
            {
            public:
                CN_DYNAMIC_INTERFACE_ID0()
            };
        }
    }
}
#endif

#endif
