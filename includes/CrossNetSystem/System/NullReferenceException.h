/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NULLREFERENCEEXCEPTION_H__
#define __SYSTEM_NULLREFERENCEEXCEPTION_H__

#ifndef CN_NO_SYSTEM_NULLREFERENCEEXCEPTION
#include "CrossNetSystem/System/Exception.h"

namespace System
{
    class NullReferenceException : public Exception
    {
    public:
        CN_DYNAMIC_ID();

        static NullReferenceException * __Create__(System::String * /*text*/)
        {
            NullReferenceException * __temp__ = new NullReferenceException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }
    };
}

#endif

#endif