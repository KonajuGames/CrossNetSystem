/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_QUEUE_H__
#define __SYSTEM_COLLECTIONS_QUEUE_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_QUEUE
#include "CrossNetRuntime/CrossNetRuntime.h"
#include "CrossNetRuntime/System/Collections/IEnumerable.h"
#include "CrossNetRuntime/System/Collections/ICollection.h"

namespace System
{
    namespace Collections
    {
        class Queue : public System::Object
        {
        public:
            CN_DYNAMIC_ID();

            Queue * __Create__()
            {
                Queue * __temp__ = new Queue();
                __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
                return (__temp__);
            }

            System::Object * Clone();

            System::Int32 get_Count()
            {
                return (mValues.size());
            }

            class Wrapper__ICloneable : public System::ICloneable
            {
            public:
                virtual System::Object * Clone(void * instance)
                {
                    Queue * temp = static_cast<Queue *>(instance);
                    return (temp->Clone());
                }
            };

            System::Collections::IEnumerator * IEnumerable__GetEnumerator()
            {
                // For the moment, it is not implemented
                CROSSNET_FATAL(this == NULL, "");
                return (NULL);
            }

            class Wrapper__IEnumerable : public System::Collections::IEnumerable
            {
            public:
                virtual System::Collections::IEnumerator * GetEnumerator(void * __instance__)
                {
                    Queue * temp = static_cast<Queue *>(__instance__);
                    return (temp->IEnumerable__GetEnumerator());
                }
            };

            class Wrapper__ICollection : public System::Collections::ICollection
            {
            public:
                virtual System::Int32 get_Count(void * __instance__)
                {
                    Queue * temp = static_cast<Queue *>(__instance__);
                    return (temp->get_Count());
                }

                virtual System::Boolean get_IsSynchronized(void * /*__instance__*/)
                {
                    return (false);
                }
                virtual System::Object * get_SyncRoot(void * __instance__)
                {
                    Queue * temp = static_cast<Queue *>(__instance__);
                    return (temp);
                }
                virtual void CopyTo(void * /*__instance__*/, System::Array * /*array*/, System::Int32 /*index*/)
                {
                    //Queue * temp = static_cast<Queue *>(__instance__);
                    CROSSNET_NOT_IMPLEMENTED();
                }
            };

        protected:
            Queue();
        private:
            Queue(const Queue & other);
            std::vector<System::Object *>   mValues;
        };
    }
}
#endif

#endif
