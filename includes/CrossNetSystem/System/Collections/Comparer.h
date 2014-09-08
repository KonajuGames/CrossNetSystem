/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_COMPARER_H__
#define __SYSTEM_COLLECTIONS_COMPARER_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_COMPARER
#include "CrossNetSystem/System/Collections/IComparer.h"

namespace System
{
    namespace Collections
    {
        class Comparer : public ::System::Object
        {
        public:
            CN_DYNAMIC_ID();

            static Comparer * Default;
            static Comparer * DefaultInvariant;

            System::Int32 Compare(System::Object * a, System::Object * b);
        };
    }
}
#endif

#endif
