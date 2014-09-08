/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_H__
#define __SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR_H__

// Include StringCollection so we can implement the inline functions...
#include "CrossNetSystem/System/Collections/Specialized/StringCollection.h"

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_STRINGENUMERATOR

namespace System
{
    namespace Collections
    {
        namespace Specialized
        {

            class StringEnumerator : public System::Object
            {
            public:
                CN_DYNAMIC_ID()

                CROSSNET_FINLINE
                static StringEnumerator * __Create__(System::Collections::Specialized::StringCollection * collection)
                {
                    StringEnumerator * instance = new StringEnumerator(collection);
                    instance->m__InterfaceMap__ = __GetInterfaceMap__();
                    return (instance);
                }

                CROSSNET_FINLINE
                System::Boolean MoveNext()
                {
                    ++mIndex;
                    return (mIndex < mCollection->get_Count());
                }

                CROSSNET_FINLINE
                void Reset()
                {
                    mIndex = -1;
                }

                CROSSNET_FINLINE
                System::String * get_Current()
                {
                    CROSSNET_ASSERT((mIndex >= 0) && (mIndex < mCollection->get_Count()), "Out of range!");
                    return (mCollection->get_Item(mIndex));
                }

            private:
                StringEnumerator(System::Collections::Specialized::StringCollection * collection)
                    :
                    mCollection(collection),
                    mIndex(-1)
                {
                    // Do nothing...
                }


                System::Collections::Specialized::StringCollection *    mCollection;
                Int32                                                   mIndex;
            };
        }
    }
}

#endif

#endif
