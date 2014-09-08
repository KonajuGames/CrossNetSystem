/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_BITARRAY_H__
#define __SYSTEM_COLLECTIONS_BITARRAY_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_BITARRAY
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Collections
    {
        class BitArray : public ::System::Object
        {
        public:
            CN_DYNAMIC_ID();

            static BitArray * __Create__(BitArray * other);
            static BitArray * __Create__(System::Int32 length, System::Boolean defaultValue);
            static BitArray * __Create__(System::Array__G<System::Int32> * values);
            static BitArray * __Create__(System::Array__G<System::Boolean> * values);

            void Set(System::Int32 index, System::Boolean value);
            System::Boolean Get(System::Int32 index);

            System::Int32 get_Length();
            System::Int32 get_Count();

            void CopyTo(System::Array__G<System::Boolean> * array, System::Int32 startIndex);

            System::Boolean get_Item(System::Int32 index);
        };
    }
}
#endif

#endif
