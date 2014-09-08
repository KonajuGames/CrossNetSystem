/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/TimeSpan.h"

#include <time.h>

#ifndef CN_NO_SYSTEM_TIMESPAN

namespace System
{

TimeSpan::TimeSpan(double totalSeconds)
:
mTotalSeconds(totalSeconds)
{
    // Do nothing...
}

TimeSpan::TimeSpan(System::Int32 year, System::Int32 month, System::Int32 day)
{
    // TODO:    Implement it...
    day;
    month;
    year;
    CROSSNET_ASSERT(year + month + day == 0, "");
}

System::Int64 TimeSpan::get_Ticks()
{
    return (0);
}

double TimeSpan::get_TotalSeconds()
{
    return (mTotalSeconds / CLOCKS_PER_SEC);
}

}

#endif
