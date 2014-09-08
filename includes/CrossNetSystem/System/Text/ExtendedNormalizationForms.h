/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_TEXT_EXTENDEDNORMALIZATIONFORMS_H__
#define __SYSTEM_TEXT_EXTENDEDNORMALIZATIONFORMS_H__

#ifndef CN_NO_SYSTEM_TEXT_EXTENDEDNORMALIZATIONFORMS

#include "CrossNetRuntime/Internal/EnumWrapper.h"

namespace System
{
    namespace Text
    {
        BEGIN_DECLARE_ENUM(ExtendedNormalizationForms, ::System::Int32, 1)
            static const ::System::Int32 FormC = 1;
            static const ::System::Int32 FormD = 2;
            static const ::System::Int32 FormKC = 5;
            static const ::System::Int32 FormKD = 6;
            static const ::System::Int32 FormIdna = 13;
            static const ::System::Int32 FormCDisallowUnassigned = 257;
            static const ::System::Int32 FormDDisallowUnassigned = 258;
            static const ::System::Int32 FormKCDisallowUnassigned = 261;
            static const ::System::Int32 FormKDDisallowUnassigned = 262;
            static const ::System::Int32 FormIdnaDisallowUnassigned = 269;
        END_DECLARE_ENUM
    }
}

#endif

#endif