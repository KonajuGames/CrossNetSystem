/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_H__
#define __SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_H__

#ifndef CN_NO_SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32
namespace System
{
    namespace Collections
    {
        namespace Specialized
        {
            struct BitVector32
            {
            public:
                CN_DYNAMIC_ID()

                BitVector32()
                    :
                    mValue(0)
                {
                    // Do nothing...
                }

                BitVector32(int value)
                    :
                    mValue(value)
                {
                    // Do nothing...
                }

                BitVector32(const BitVector32 & other)
                    :
                    mValue(other.mValue)
                {
                    // Do nothing...
                }

                void __ctor__(int value)
                {
                    mValue = value;
                }

                ::System::Int32 get_Data()
                {
                    return (mValue);
                }

                void __Trace__(unsigned char /* currentMark */)
                {
                    // Do nothing...
                }
            private:
                ::System::Int32 mValue;
            };
        }
    }
}
#endif

#endif

