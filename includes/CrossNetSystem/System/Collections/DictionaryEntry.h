/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_DICTIONARYENTRY_H__
#define __SYSTEM_COLLECTIONS_DICTIONARYENTRY_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_DICTIONARYENTRY

#include "CrossNetRuntime/Internal/Primitives.h"

namespace System
{
    namespace Collections
    {
        struct DictionaryEntry
        {
        public:
            CN_DYNAMIC_ID()

            DictionaryEntry();
            DictionaryEntry(System::Object * key, System::Object * value)
                :
                mKey(key),
                mValue(value)
            {
                // Do nothing...
            }

            System::Object * get_Key()
            {
                return (mKey);
            }
            System::Object * get_Value()
            {
                return (mValue);
            }

            System::String * ToString();
            System::Boolean  Equals(System::Object * obj);
            System::Int32    GetHashCode();

        private:
            System::Object * mKey;
            System::Object * mValue;
        };
    }
}
#endif

#endif
