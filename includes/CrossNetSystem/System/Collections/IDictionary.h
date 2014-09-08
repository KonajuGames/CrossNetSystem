/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_IDICTIONARY_H__
#define __SYSTEM_COLLECTIONS_IDICTIONARY_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARY
#include "CrossNetRuntime/internal/IInterface.h"

namespace System
{
    namespace Collections
    {
        class ICollection;

        class IDictionaryEnumerator;

        // Incomplete definition
        class IDictionary : public ::CrossNetRuntime::IInterface
        {
        public:
            CN_DYNAMIC_ID()

            virtual System::Int32 get_Count(void * __instance__) = 0;
            virtual System::Object * get_Item(void * __instance__, System::Object * key) = 0;
            virtual System::Collections::ICollection * get_Keys(void * __instance__) = 0;
            virtual System::Collections::ICollection * get_Values(void * __instance__) = 0;
            virtual IDictionaryEnumerator * GetEnumerator(void * __instance__) = 0;
            virtual void Add(void * __instance__, System::Object * key, System::Object * value) = 0;
        };
    }
}
#endif

#endif
