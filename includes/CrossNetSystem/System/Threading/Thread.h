/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_THREADING_THREAD_H__
#define __SYSTEM_THREADING_THREAD_H__

#ifndef CN_NO_SYSTEM_THREADING_THREAD

#include "CrossNetSystem/System/Runtime/InteropServices/_Thread.h"

namespace System
{
    namespace Threading
    {
/*
        class Thread : ::System::Object
        {
        public:
            CN_DYNAMIC_ID()

            static
            void Sleep(::System::Int32 millisecondsTimeout);

            static
            void Sleep(::System::TimeSpan timeout);
        };
*/

//        class Thread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
        class Thread : public ::System::Object
        {
            CN_DYNAMIC_ID()
            public:
            static ::System::Int32 STATICS_BUCKET_SIZE;
            public:
            ::System::Runtime::Remoting::Contexts::Context * m_Context;
            public:
            ::System::Threading::ExecutionContext * m_ExecutionContext;
            public:
            ::System::String * m_Name;
            public:
            ::System::Delegate * m_Delegate;
            public:
            ::System::Array__G< ::System::Array__G< ::System::Object * > * > * m_ThreadStaticsBuckets;
            public:
            ::System::Array__G< ::System::Int32 > * m_ThreadStaticsBits;
            public:
            ::System::Globalization::CultureInfo * m_CurrentCulture;
            public:
            ::System::Globalization::CultureInfo * m_CurrentUICulture;
            public:
            ::System::Object * m_ThreadStartArg;
            public:
            ::System::IntPtr DONT_USE_InternalThread;
            public:
            ::System::Int32 m_Priority;
            public:
            static ::System::LocalDataStoreMgr * s_LocalDataStoreMgr;
            public:
            static ::System::Object * s_SyncObject;
            public:
            void __ctor__(::System::Threading::ThreadStart * start);
            static ::System::Threading::Thread * __Create__(::System::Threading::ThreadStart * start);
            public:
            void __ctor__(::System::Threading::ThreadStart * start, ::System::Int32 maxStackSize);
            static ::System::Threading::Thread * __Create__(::System::Threading::ThreadStart * start, ::System::Int32 maxStackSize);
            public:
            void __ctor__(::System::Threading::ParameterizedThreadStart * start);
            static ::System::Threading::Thread * __Create__(::System::Threading::ParameterizedThreadStart * start);
            public:
            void __ctor__(::System::Threading::ParameterizedThreadStart * start, ::System::Int32 maxStackSize);
            static ::System::Threading::Thread * __Create__(::System::Threading::ParameterizedThreadStart * start, ::System::Int32 maxStackSize);
            public:
            ::System::Int32 GetHashCode();
            public:
            ::System::Int32 get_ManagedThreadId();
            public:
            ::System::Void Start();
            public:
            ::System::Void Start(::System::Object * parameter);
            public:
            ::System::Threading::ExecutionContext * GetExecutionContextNoCreate();
            public:
            ::System::Threading::ExecutionContext * get_ExecutionContext();
            public:
            ::System::Void SetExecutionContext(::System::Threading::ExecutionContext * value);
            public:
            ::System::Void StartInternal(::System::Security::Principal::IPrincipal * principal, ::System::Threading::StackCrawlMark * stackMark);
            public:
            ::System::Void SetCompressedStack(::System::Threading::CompressedStack * stack);
            public:
            ::System::IntPtr SetAppDomainStack(::System::Threading::SafeCompressedStackHandle * csHandle);
            public:
            ::System::Void RestoreAppDomainStack(::System::IntPtr appDomainStack);
            public:
            ::System::Threading::CompressedStack * GetCompressedStack();
            public:
            static ::System::IntPtr InternalGetCurrentThread();
            public:
            ::System::Void Abort(::System::Object * stateInfo);
            public:
            ::System::Void Abort();
            public:
            ::System::Void AbortInternal();
            public:
            static ::System::Void ResetAbort();
            public:
            ::System::Void ResetAbortNative();
            public:
            ::System::Void Suspend();
            public:
            ::System::Void SuspendInternal();
            public:
            ::System::Void Resume();
            public:
            ::System::Void ResumeInternal();
            public:
            ::System::Void Interrupt();
            public:
            ::System::Void InterruptInternal();
            public:
            ::System::Threading::ThreadPriority get_Priority();
            public:
            ::System::Threading::ThreadPriority set_Priority(::System::Threading::ThreadPriority value);
            public:
            ::System::Int32 GetPriorityNative();
            public:
            ::System::Void SetPriorityNative(::System::Int32 priority);
            public:
            ::System::Boolean get_IsAlive();
            public:
            ::System::Boolean IsAliveNative();
            public:
            ::System::Boolean get_IsThreadPoolThread();
            public:
            ::System::Boolean IsThreadpoolThreadNative();
            public:
            ::System::Void JoinInternal();
            public:
            ::System::Void Join();
            public:
            ::System::Boolean JoinInternal(::System::Int32 millisecondsTimeout);
            public:
            ::System::Boolean Join(::System::Int32 millisecondsTimeout);
            public:
            ::System::Boolean Join(::System::TimeSpan timeout);
            public:
            static ::System::Void SleepInternal(::System::Int32 millisecondsTimeout);
            public:
            static ::System::Void Sleep(::System::Int32 millisecondsTimeout);
            public:
            static ::System::Void Sleep(::System::TimeSpan timeout);
            public:
            static ::System::Void SpinWaitInternal(::System::Int32 iterations);
            public:
            static ::System::Void SpinWait(::System::Int32 iterations);
            public:
            static ::System::Threading::Thread * get_CurrentThread();
            public:
            static ::System::Threading::Thread * GetCurrentThreadNative();
            public:
            static ::System::Threading::Thread * GetFastCurrentThreadNative();
            public:
            ::System::Void SetStartHelper(::System::Delegate * start, ::System::Int32 maxStackSize);
            public:
            ::System::Void SetStart(::System::Delegate * start, ::System::Int32 maxStackSize);
            ~Thread();
            public:
            ::System::Void InternalFinalize();
            public:
            ::System::Boolean get_IsBackground();
            public:
            ::System::Boolean set_IsBackground(::System::Boolean value);
            public:
            ::System::Boolean IsBackgroundNative();
            public:
            ::System::Void SetBackgroundNative(::System::Boolean isBackground);
            public:
            ::System::Threading::ThreadState get_ThreadState();
            public:
            ::System::Int32 GetThreadStateNative();
            public:
            ::System::Threading::ApartmentState get_ApartmentState();
            public:
            ::System::Threading::ApartmentState set_ApartmentState(::System::Threading::ApartmentState value);
            public:
            ::System::Threading::ApartmentState GetApartmentState();
            public:
            ::System::Boolean TrySetApartmentState(::System::Threading::ApartmentState state);
            public:
            ::System::Void SetApartmentState(::System::Threading::ApartmentState state);
            public:
            ::System::Boolean SetApartmentStateHelper(::System::Threading::ApartmentState state, ::System::Boolean fireMDAOnMismatch);
            public:
            ::System::Int32 GetApartmentStateNative();
            public:
            ::System::Int32 SetApartmentStateNative(::System::Int32 state, ::System::Boolean fireMDAOnMismatch);
            public:
            ::System::Int32 StartupSetApartmentStateInternal();
            public:
            static ::System::LocalDataStoreSlot * AllocateDataSlot();
            public:
            static ::System::LocalDataStoreSlot * AllocateNamedDataSlot(::System::String * name);
            public:
            static ::System::LocalDataStoreSlot * GetNamedDataSlot(::System::String * name);
            public:
            static ::System::Void FreeNamedDataSlot(::System::String * name);
            public:
            static ::System::Object * GetData(::System::LocalDataStoreSlot * slot);
            public:
            static ::System::Void SetData(::System::LocalDataStoreSlot * slot, ::System::Object * data);
            public:
            static ::System::LocalDataStore * GetDomainLocalStore();
            public:
            static ::System::Void SetDomainLocalStore(::System::LocalDataStore * dls);
            public:
            static ::System::Void RemoveDomainLocalStore(::System::LocalDataStore * dls);
            public:
            static ::System::Boolean nativeGetSafeCulture(::System::Threading::Thread * t, ::System::Int32 appDomainId, ::System::Boolean isUI, ::System::Globalization::CultureInfo * * safeCulture);
            public:
            ::System::Globalization::CultureInfo * get_CurrentUICulture();
            public:
            ::System::Globalization::CultureInfo * set_CurrentUICulture(::System::Globalization::CultureInfo * value);
            public:
            static ::System::Boolean nativeSetThreadUILocale(::System::Int32 LCID);
            public:
            ::System::Globalization::CultureInfo * get_CurrentCulture();
            public:
            ::System::Globalization::CultureInfo * set_CurrentCulture(::System::Globalization::CultureInfo * value);
            public:
            ::System::Int32 ReserveSlot();
            public:
            ::System::Int32 FindSlot();
            public:
            static ::System::Runtime::Remoting::Contexts::Context * get_CurrentContext();
            public:
            ::System::Runtime::Remoting::Contexts::Context * GetCurrentContextInternal();
            public:
            ::System::Runtime::Remoting::Messaging::LogicalCallContext * GetLogicalCallContext();
            public:
            ::System::Runtime::Remoting::Messaging::LogicalCallContext * SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext * callCtx);
            public:
            ::System::Runtime::Remoting::Messaging::IllogicalCallContext * GetIllogicalCallContext();
            public:
            static ::System::Security::Principal::IPrincipal * get_CurrentPrincipal();
            public:
            static ::System::Security::Principal::IPrincipal * set_CurrentPrincipal(::System::Security::Principal::IPrincipal * value);
            public:
            ::System::Void SetPrincipalInternal(::System::Security::Principal::IPrincipal * principal);
            public:
            static ::System::Runtime::Remoting::Contexts::Context * GetContextInternal(::System::IntPtr id);
            public:
            ::System::Object * InternalCrossContextCallback(::System::Runtime::Remoting::Contexts::Context * ctx, ::System::IntPtr ctxID, ::System::Int32 appDomainID, ::System::Threading::InternalCrossContextDelegate * ftnToCall, ::System::Array__G< ::System::Object * > * args);
            public:
            ::System::Object * InternalCrossContextCallback(::System::Runtime::Remoting::Contexts::Context * ctx, ::System::Threading::InternalCrossContextDelegate * ftnToCall, ::System::Array__G< ::System::Object * > * args);
            public:
            static ::System::Object * CompleteCrossContextCallback(::System::Threading::InternalCrossContextDelegate * ftnToCall, ::System::Array__G< ::System::Object * > * args);
            public:
            static ::System::AppDomain * GetDomainInternal();
            public:
            static ::System::AppDomain * GetFastDomainInternal();
            public:
            static ::System::AppDomain * GetDomain();
            public:
            static ::System::Int32 GetDomainID();
            public:
            ::System::String * get_Name();
            public:
            ::System::String * set_Name(::System::String * value);
            public:
            static ::System::Void InformThreadNameChangeEx(::System::Threading::Thread * t, ::System::String * name);
            public:
            ::System::Object * get_AbortReason();
            public:
            ::System::Object * set_AbortReason(::System::Object * value);
            public:
            static ::System::Void BeginCriticalRegion();
            public:
            static ::System::Void EndCriticalRegion();
            public:
            static ::System::Void BeginThreadAffinity();
            public:
            static ::System::Void EndThreadAffinity();
            public:
            static ::System::Byte VolatileRead(::System::Byte * address);
            public:
            static ::System::Int16 VolatileRead(::System::Int16 * address);
            public:
            static ::System::Int32 VolatileRead(::System::Int32 * address);
            public:
            static ::System::Int64 VolatileRead(::System::Int64 * address);
            public:
            static ::System::SByte VolatileRead(::System::SByte * address);
            public:
            static ::System::UInt16 VolatileRead(::System::UInt16 * address);
            public:
            static ::System::UInt32 VolatileRead(::System::UInt32 * address);
            public:
            static ::System::IntPtr VolatileRead(::System::IntPtr * address);
            public:
            static ::System::UIntPtr VolatileRead(::System::UIntPtr * address);
            public:
            static ::System::UInt64 VolatileRead(::System::UInt64 * address);
            public:
            static ::System::Single VolatileRead(::System::Single * address);
            public:
            static ::System::Double VolatileRead(::System::Double * address);
            public:
            static ::System::Object * VolatileRead(::System::Object * * address);
            public:
            static ::System::Void VolatileWrite(::System::Byte * address, ::System::Byte value);
            public:
            static ::System::Void VolatileWrite(::System::Int16 * address, ::System::Int16 value);
            public:
            static ::System::Void VolatileWrite(::System::Int32 * address, ::System::Int32 value);
            public:
            static ::System::Void VolatileWrite(::System::Int64 * address, ::System::Int64 value);
            public:
            static ::System::Void VolatileWrite(::System::SByte * address, ::System::SByte value);
            public:
            static ::System::Void VolatileWrite(::System::UInt16 * address, ::System::UInt16 value);
            public:
            static ::System::Void VolatileWrite(::System::UInt32 * address, ::System::UInt32 value);
            public:
            static ::System::Void VolatileWrite(::System::IntPtr * address, ::System::IntPtr value);
            public:
            static ::System::Void VolatileWrite(::System::UIntPtr * address, ::System::UIntPtr value);
            public:
            static ::System::Void VolatileWrite(::System::UInt64 * address, ::System::UInt64 value);
            public:
            static ::System::Void VolatileWrite(::System::Single * address, ::System::Single value);
            public:
            static ::System::Void VolatileWrite(::System::Double * address, ::System::Double value);
            public:
            static ::System::Void VolatileWrite(::System::Object * * address, ::System::Object * value);
            public:
            static ::System::Void MemoryBarrier();
            public:
            static ::System::Void SetIsThreadStaticsArray(::System::Object * o);
            public:
            static ::System::LocalDataStoreMgr * get_LocalDataStoreManager();
            public:
            virtual ::System::Void System_Runtime_InteropServices__Thread_GetTypeInfoCount(::System::UInt32 * pcTInfo);
            public:
            virtual ::System::Void System_Runtime_InteropServices__Thread_GetTypeInfo(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo);
            public:
            virtual ::System::Void System_Runtime_InteropServices__Thread_GetIDsOfNames(::System::Guid * riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId);
            public:
            virtual ::System::Void System_Runtime_InteropServices__Thread_Invoke(::System::UInt32 dispIdMember, ::System::Guid * riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr);
            public:
            ::System::Void SetAbortReason(::System::Object * o);
            public:
            ::System::Object * GetAbortReason();
            public:
            ::System::Void ClearAbortReason();
            public:
            static void Static__ctor__();
            public:
            static ::System::Threading::Thread * __Create__();
            class Wrapper___Thread : public ::System::Runtime::InteropServices::_Thread
            {
                public:
                public:
                virtual ::System::Void GetTypeInfoCount(void * __passed_instance__, ::System::UInt32 * pcTInfo);
                public:
                virtual ::System::Void GetTypeInfo(void * __passed_instance__, ::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo);
                public:
                virtual ::System::Void GetIDsOfNames(void * __passed_instance__, ::System::Guid * riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId);
                public:
                virtual ::System::Void Invoke(void * __passed_instance__, ::System::UInt32 dispIdMember, ::System::Guid * riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr);
                CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
            };
            public:
            static void __CreateInterfaceMap__();
        };
    }
}
#endif

#endif
