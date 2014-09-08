/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_INVALIDOPERATIONEXCEPTION_H__
#define __SYSTEM_INVALIDOPERATIONEXCEPTION_H__

#ifndef CN_NO_SYSTEM_INVALIDOPERATIONEXCEPTION
#include "CrossNetSystem/System/Exception.h"

namespace System
{
    class InvalidOperationException : public Exception
    {
    public:
        CN_DYNAMIC_ID();

        static InvalidOperationException * __Create__()
        {
            InvalidOperationException * __temp__ = new InvalidOperationException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }
    };
}

#endif

#endif