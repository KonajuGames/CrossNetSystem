/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_INTPTR_H__
#define __SYSTEM_INTPTR_H__

#ifndef CN_NO_SYSTEM_INTPTR

#include "CrossNetRuntime/Internal/Primitives.h"
#include "CrossNetRuntime/Internal/PointerWrapper.h"
#include "CrossNetRuntime/Internal/Box.h"

#include "CrossNetSystem/System/Runtime/Serialization/ISerializable.h"
#include "CrossNetSystem/System/Runtime/Serialization/StreamingContext.h"

namespace System
{
    namespace Runtime
    {
        namespace Serialization
        {
            class SerializationInfo;
            struct StreamingContext;
        }
    }

    struct IntPtr
    {
        CN_DYNAMIC_ID()

        // In some particular cases (like dllimport), the function expects an IntPtr *
        // But for example, we pass IntPtr.Zero
        CROSSNET_FINLINE
        operator System::IntPtr *()
        {
            return (this);
        }

        // In some cases, null is actually transformed as IntPtr.Zero
        CROSSNET_FINLINE
        operator void *()
        {
            return (m_value);
        }

        CROSSNET_FINLINE
        operator CrossNetRuntime::PointerWrapper<void *>()
        {
            return (CrossNetRuntime::PointerWrapper<void *>(m_value));
        }

        public:
        ::System::Void * m_value;
        public:
        static ::System::IntPtr Zero;
        public:
        ::System::Boolean IsNull();
        public:
        void __ctor__(::System::Int32 value);
        IntPtr(::System::Int32 value);
        public:
        void __ctor__(::System::Int64 value);
        IntPtr(::System::Int64 value);
        public:
        void __ctor__(CrossNetRuntime::PointerWrapper<::System::Void *> value);
        IntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value);
        IntPtr(void * value);
        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        IntPtr(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        virtual ::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Boolean Equals(::System::Object * obj);
        public:
        ::System::Int32 GetHashCode();
        public:
        ::System::Int32 ToInt32();
        public:
        ::System::Int64 ToInt64();
        public:
        ::System::String * ToString();
        public:
        ::System::String * ToString(::System::String * format);
        public:
        static ::System::IntPtr op_Explicit__System__IntPtr(::System::Int32 value);
        public:
        static ::System::IntPtr op_Explicit__System__IntPtr(::System::Int64 value);
        public:
        static ::System::IntPtr op_Explicit__System__IntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value);
        public:
        static ::System::Void * op_Explicit__System__Void__P__(::System::IntPtr value);
        public:
        static ::System::Int32 op_Explicit__System__Int32(::System::IntPtr value);
        public:
        static ::System::Int64 op_Explicit__System__Int64(::System::IntPtr value);
        public:
        static ::System::Boolean op_Equality(::System::IntPtr value1, ::System::IntPtr value2);
        public:
        static ::System::Boolean op_Inequality(::System::IntPtr value1, ::System::IntPtr value2);
        public:
        static ::System::Int32 get_Size();
        public:
//        There is usually pointer operations with ToPointer()
//        Unfortunately Reflector doesn't give the detail of the operation...
//        So for the moment, we return a byte * (can be directly converted to a void *)
//        ::System::Void * ToPointer();
        ::System::Byte * ToPointer();
        public:
        CROSSNET_FINLINE
        IntPtr();
        void __ctor__();
        class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context)
            {
                ::System::IntPtr * __instance__ = (static_cast< CrossNetRuntime::BoxedObject<::System::IntPtr> * >(__passed_instance__))->GetUnboxedAddress();
            	__instance__->System_Runtime_Serialization_ISerializable_GetObjectData( info,  context);
            }
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
        CN__NEW_DELETE_OPERATORS_FOR_VALUE_TYPE
    };
}

#endif

#endif