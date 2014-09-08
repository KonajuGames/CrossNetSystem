/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/DateTime.h"
#include "CrossNetSystem/System/TimeSpan.h"

#ifndef CN_NO_SYSTEM_DATETIME
namespace System
{

//time_t is actually a typedef on Int64...
// TODO: Clean this a bit...
DateTime::DateTime(clock_t t)
:
mInternalTime(t)
{
    // Do nothing...
}

DateTime::DateTime(System::Int32 year, System::Int32 month, System::Int32 day)
{
    // TODO:    Implement it...
    day;
    month;
    year;
    CROSSNET_ASSERT(year + month + day == 0, "");
}

System::Int64 System::DateTime::get_Ticks()
{
    return (0);
}

DateTime DateTime::get_Now()
{
    DateTime    dt(clock());
    return (dt);
}

TimeSpan DateTime::Subtract(DateTime dt)
{
    double diff = mInternalTime - dt.mInternalTime;
    TimeSpan    ts(diff);
    return (ts);
}

}

#endif
