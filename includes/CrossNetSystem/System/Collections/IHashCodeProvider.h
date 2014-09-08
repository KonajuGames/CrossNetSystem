/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_H__
#define __SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_IHASHCODEPROVIDER
#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    namespace Collections
    {
        class IHashCodeProvider : public CrossNetRuntime::IInterface
        {
        public:
            CN_DYNAMIC_ID();

            virtual System::Int32 GetHashCode(void * __instance__, System::Object * obj) = 0;
        };
    }
}
#endif

#endif
