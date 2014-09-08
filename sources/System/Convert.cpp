/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#include "CrossNetSystem/System/Convert.h"
#include "CrossNetRuntime/System/String.h"

#ifndef CN_NO_SYSTEM_CONVERT

namespace System
{

Int32 Convert::ToInt32(System::String * str)
{
    return (_wtoi(str->__ToCString__()));
}

}

#endif
