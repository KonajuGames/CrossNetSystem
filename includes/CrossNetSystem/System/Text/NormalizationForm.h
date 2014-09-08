/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TEXT_NORMALIZATIONFORM_H__
#define __SYSTEM_TEXT_NORMALIZATIONFORM_H__

#include "CrossNetRuntime/Internal/EnumWrapper.h"

#ifndef CN_NO_SYSTEM_NORMALIZATIONFORM
namespace System
{
    namespace Text
    {
        BEGIN_DECLARE_ENUM(NormalizationForm, ::System::Int32, 1)
            static const ::System::Int32 FormC = 1;
            static const ::System::Int32 FormD = 2;
            static const ::System::Int32 FormKC = 5;
            static const ::System::Int32 FormKD = 6;
        END_DECLARE_ENUM
    }
}
#endif

#endif