/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H__
#define __SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR

#include "CrossNetRuntime/Internal/IInterface.h"

namespace System
{
    namespace Collections
    {
        struct DictionaryEntry;

        class IDictionaryEnumerator : public CrossNetRuntime::IInterface
        {
        public:
            CN_DYNAMIC_ID()

            virtual DictionaryEntry     get_Entry(void * __instance__) = 0;
            virtual System::Object *    get_Key(void * __instance__) = 0;
            virtual System::Object *    get_Value(void * __instance__) = 0;
        };
    }
}
#endif

#endif
