/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_INTEROPSERVICES__THREAD_H__
#define __SYSTEM_RUNTIME_INTEROPSERVICES__THREAD_H__

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES__THREAD
namespace System
{
    namespace Runtime
    {
        namespace InteropServices
        {
            class _Thread : public CrossNetRuntime::IInterface
            {
                CN_DYNAMIC_ID()
                public:
                virtual ::System::Void GetTypeInfoCount(void * __passed_instance__, ::System::UInt32 * pcTInfo) = 0;
                public:
                virtual ::System::Void GetTypeInfo(void * __passed_instance__, ::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo) = 0;
                public:
                virtual ::System::Void GetIDsOfNames(void * __passed_instance__, ::System::Guid * riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId) = 0;
                public:
                virtual ::System::Void Invoke(void * __passed_instance__, ::System::UInt32 dispIdMember, ::System::Guid * riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr) = 0;
                public:
                static void __CreateInterfaceMap__();
            };
        }
    }
}
#endif

#endif
