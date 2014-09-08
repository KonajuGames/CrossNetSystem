/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_ICOMPARER_H__
#define __SYSTEM_COLLECTIONS_ICOMPARER_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_ICOMPARER
#include "CrossNetRuntime/Internal/Primitives.h"

namespace System
{
    namespace Collections
    {
        class IComparer : public CrossNetRuntime::IInterface
        {
        public:
            CN_DYNAMIC_ID();

            virtual System::Int32 Compare(void * __instance__, System::Object * x, System::Object * y) = 0;
        };
    }
}
#endif

#endif
