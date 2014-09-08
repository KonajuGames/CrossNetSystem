/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_THREADING_THREADSTART_H__
#define __SYSTEM_THREADING_THREADSTART_H__

#ifndef CN_NO_SYSTEM_THREADING_WAITHANDLE
namespace System
{
    namespace Threading
    {
        // TODO: Implement it, make it abstract and derive from IDisposable
        class WaitHandle : public System::Object
        {
        public:
            CN_DYNAMIC_ID()
        };
    }
}
#endif

#endif
