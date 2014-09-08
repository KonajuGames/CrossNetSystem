/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_THREADING_INTERLOCKED_H__
#define __SYSTEM_THREADING_INTERLOCKED_H__

#ifndef CN_NO_SYSTEM_THREADING_INTERLOCKED
namespace System
{
    namespace Threading
    {
        // Not really thread safe, but at least it simulates the features...
        class Interlocked
        {
        public:
            CN_DYNAMIC_ID()

            template <class T>
            static T CompareExchange(T * location, const T value, const T comparand)
            {
                T previous = *location;
                if (previous == comparand)
                {
                    *location = value;
                }
                return (previous);
            }

            template <class T>
            static T Exchange(T * first, const T expectedValue)
            {
                T previous = *first;
                *first = expectedValue;
                return (previous);
            }
        };
    }
}
#endif

#endif
