/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_H__
#define __SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_H__

#ifndef CN_NO_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE
namespace System
{
    namespace Runtime
    {
        namespace InteropServices
        {
            struct GCHandle
            {
                CN_DYNAMIC_ID()
                public:
                static ::System::IntPtr InvalidCookie;
                public:
                ::System::IntPtr m_handle;
                public:
                static ::System::Runtime::InteropServices::GCHandleCookieTable * s_cookieTable;
                public:
                static ::System::Boolean s_probeIsActive;
                public:
                static void Static__ctor__();
                public:
                void __ctor__(::System::Object * value, ::System::Runtime::InteropServices::GCHandleType type);
                GCHandle(::System::Object * value, ::System::Runtime::InteropServices::GCHandleType type);
                public:
                void __ctor__(::System::IntPtr handle);
                GCHandle(::System::IntPtr handle);
                public:
                static ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object * value);
                public:
                static ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object * value, ::System::Runtime::InteropServices::GCHandleType type);
                public:
                ::System::Void Free();
                public:
                ::System::Object * get_Target();
                public:
                ::System::Object * set_Target(::System::Object * value);
                public:
                ::System::IntPtr AddrOfPinnedObject();
                public:
                ::System::Boolean get_IsAllocated();
                public:
                static ::System::Runtime::InteropServices::GCHandle op_Explicit__System__Runtime__InteropServices__GCHandle(::System::IntPtr value);
                public:
                static ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr value);
                public:
                static ::System::IntPtr op_Explicit__System__IntPtr(::System::Runtime::InteropServices::GCHandle value);
                public:
                static ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle value);
                public:
                ::System::Int32 GetHashCode();
                public:
                ::System::Boolean Equals(::System::Object * o);
                public:
                static ::System::Boolean op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);
                public:
                static ::System::Boolean op_Inequality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);
                public:
                ::System::IntPtr GetHandleValue();
                public:
                ::System::Boolean IsPinned();
                public:
                ::System::Void SetIsPinned();
                public:
                static ::System::IntPtr InternalAlloc(::System::Object * value, ::System::Runtime::InteropServices::GCHandleType type);
                public:
                static ::System::Void InternalFree(::System::IntPtr handle);
                public:
                static ::System::Object * InternalGet(::System::IntPtr handle);
                public:
                static ::System::Void InternalSet(::System::IntPtr handle, ::System::Object * value, ::System::Boolean isPinned);
                public:
                static ::System::Object * InternalCompareExchange(::System::IntPtr handle, ::System::Object * value, ::System::Object * oldValue, ::System::Boolean isPinned);
                public:
                static ::System::IntPtr InternalAddrOfPinnedObject(::System::IntPtr handle);
                public:
                static ::System::Void InternalCheckDomain(::System::IntPtr handle);
                public:
                CROSSNET_FINLINE
                GCHandle();
                void __ctor__();
                public:
                CROSSNET_FINLINE
                ::System::String * ToString();
                public:
                static void __CreateInterfaceMap__();
                CN__NEW_DELETE_OPERATORS_FOR_VALUE_TYPE
            };
        }
    }
}
#endif

#endif
