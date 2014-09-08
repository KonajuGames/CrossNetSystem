/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_ICOMPARER_H__
#define __SYSTEM_COLLECTIONS_ICOMPARER_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_OBJECTMODEL_COLLECTION__G1
#include "CrossNetRuntime/System/Object.h"

namespace System
{
    namespace Collections
    {
        namespace ObjectModel
        {
            template <typename T>
            class Collection__G1
            {
            public:
                CN_MULTIPLE_DYNAMIC_OBJECT_ID(
                    sizeof(Collection__G1<T>),
                    __W6__
                    (
                        CN_IMPLEMENT(Collection__G1__IEnumerable),
                        CN_IMPLEMENT(Collection__G1__ICollection),
                        CN_IMPLEMENT(Collection__G1__IList),
                        CN_IMPLEMENT(Collection__G1__IEnumerable__G1<T>),
                        CN_IMPLEMENT(Collection__G1__ICollection__G1<T>),
                        CN_IMPLEMENT(Collection__G1__IList__G1<T>)
                    ),
                    NULL
                )

                System::Collections::Generic::IEnumerator__G1<T> * GetEnumerator();
                void Clear();
            };
        }
    }
}
#endif

#endif
