/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_REFLECTION_METHODBASE_H__
#define __SYSTEM_REFLECTION_METHODBASE_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_REFLECTION_METHODBASE

namespace System
{
    namespace Reflection
    {
        class MethodBase : public ::System::Object
        {
        public:
            System::Object * Invoke(System::Object *, System::Array__G<System::Object *> *);
            System::Type * get_ReturnType();
            System::Array__G<System::Type *> * GetParameters();
            System::Type * get_DeclaringType();
        };
    }
}

#endif

#endif
