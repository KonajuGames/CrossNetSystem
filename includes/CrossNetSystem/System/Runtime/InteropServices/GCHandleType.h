/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE_H__
#define __SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE_H__

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE
namespace System
{
    namespace Runtime
    {
        namespace InteropServices
        {
            BEGIN_DECLARE_ENUM(GCHandleType, ::System::Int32, 0)
                static const ::System::Int32 Weak = 0;
                static const ::System::Int32 WeakTrackResurrection = 1;
                static const ::System::Int32 Normal = 2;
                static const ::System::Int32 Pinned = 3;
            END_DECLARE_ENUM
        }
    }
}
#endif

#endif
