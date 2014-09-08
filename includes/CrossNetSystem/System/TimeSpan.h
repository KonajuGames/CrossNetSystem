/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TIMESPAN_H__
#define __SYSTEM_TIMESPAN_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_TIMESPAN
namespace System
{
    // Incomplete definition
    struct TimeSpan
    {
    public:
        CN_DYNAMIC_ID();

        TimeSpan();
        explicit TimeSpan(double totalSeconds);
        TimeSpan(Int32 year, Int32 month, Int32 day);

        void __ctor__(long long ticks);

        Int64   get_Ticks();
        double  get_TotalSeconds();

        TimeSpan Subtract(TimeSpan other);

        static TimeSpan MinValue;
        static TimeSpan MaxValue;

    private:
        double  mTotalSeconds;
    };
}
#endif

#endif
