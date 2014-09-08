/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NOTIMPLEMENTEDEXCEPTION_H__
#define __SYSTEM_NOTIMPLEMENTEDEXCEPTION_H__

#ifndef CN_NO_SYSTEM_NOTIMPLEMENTEDEXCEPTION
#include "CrossNetSystem/System/Exception.h"

namespace System
{
    class NotImplementedException : public Exception
    {
    public:
        CN_DYNAMIC_ID();

        static NotImplementedException * __Create__()
        {
            NotImplementedException * __temp__ = new NotImplementedException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }
    };
}

#endif

#endif