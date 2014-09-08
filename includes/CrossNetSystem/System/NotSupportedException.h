/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_NOTSUPPORTEDEXCEPTION_H__
#define __SYSTEM_NOTSUPPORTEDEXCEPTION_H__

#ifndef CN_NO_SYSTEM_NOTSUPPORTEDEXCEPTION
#include "CrossNetSystem/System/Exception.h"

namespace System
{
    class NotSupportedException : public Exception
    {
    public:
        CN_DYNAMIC_ID()

        static NotSupportedException * __Create__()
        {
            NotSupportedException * __temp__ = new NotSupportedException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }

        static NotSupportedException * __Create__(System::String * /* text */)
        {
            NotSupportedException * __temp__ = new NotSupportedException();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            return (__temp__);
        }
    };
}

#endif

#endif