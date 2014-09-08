/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_H__
#define __SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_H__

#ifndef CN_NO_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE

#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            class ISerializable : public CrossNetRuntime::IInterface
            {
            public:
                CN_DYNAMIC_INTERFACE_ID0()
            };
        }
    }
}

#endif
#endif
