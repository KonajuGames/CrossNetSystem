/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_UINTPTR_H__
#define __SYSTEM_UINTPTR_H__

#include "CrossNetRuntime/Internal/BaseTypes.h"

#ifndef CN_NO_SYSTEM_UINTPTR

namespace System
{
    struct UIntPtr
    {
        CN_DYNAMIC_ID()

        // In some particular cases, the function expects an UIntPtr *
        // But for example, we pass UIntPtr.Zero
        CROSSNET_FINLINE
        operator System::UIntPtr *()
        {
            return (this);
        }

        public:
        ::System::Void * mValue;
        public:
        static ::System::UIntPtr Zero;
        public:
        void __ctor__(::System::UInt32 value);
        UIntPtr(::System::UInt32 value);
        public:
        void __ctor__(::System::UInt64 value);
        UIntPtr(::System::UInt64 value);
        public:

        void __ctor__(CrossNetRuntime::PointerWrapper<::System::Void *> value);
        UIntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value)
            :   mValue(value.ToValue())
        {
            // Do nothing...
        }

        public:
        void __ctor__(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        UIntPtr(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
        public:
        ::System::Boolean Equals(::System::Object * obj);
        public:
        ::System::Int32 GetHashCode();
        public:
        ::System::UInt32 ToUInt32();
        public:
        ::System::UInt64 ToUInt64();
        public:
        ::System::String * ToString();
        public:
        static ::System::UIntPtr op_Explicit__System__UIntPtr(::System::UInt32 value);
        public:
        static ::System::UIntPtr op_Explicit__System__UIntPtr(::System::UInt64 value);
        public:
        static ::System::UInt32 op_Explicit__System__UInt32(::System::UIntPtr value);
        public:
        static ::System::UInt64 op_Explicit__System__UInt64(::System::UIntPtr value);
        public:
        static ::System::UIntPtr op_Explicit__System__UIntPtr(CrossNetRuntime::PointerWrapper<::System::Void *> value);
        public:
        static ::System::Void * op_Explicit__System__Void__P__(::System::UIntPtr value);
        public:
        static ::System::Boolean op_Equality(::System::UIntPtr value1, ::System::UIntPtr value2);
        public:
        static ::System::Boolean op_Inequality(::System::UIntPtr value1, ::System::UIntPtr value2);
        public:
        static ::System::Int32 get_Size();
        public:
//        There is usually pointer operations with ToPointer()
//        Unfortunately Reflector doesn't give the detail of the operation...
//        So for the moment, we return a byte * (can be directly converted to a void *)
//        ::System::Void * ToPointer();
        ::System::Byte * ToPointer()
        {
            return static_cast<::System::Byte *>(mValue);
        }
        public:
        CROSSNET_FINLINE
        UIntPtr();
        void __ctor__();
        class Wrapper__ISerializable : public ::System::Runtime::Serialization::ISerializable
        {
            public:
            public:
            virtual ::System::Void GetObjectData(void * __passed_instance__, ::System::Runtime::Serialization::SerializationInfo * info, ::System::Runtime::Serialization::StreamingContext context);
            CN__NEW_DELETE_OPERATORS_FOR_WRAPPER
        };
        public:
        static void __CreateInterfaceMap__();
        CN__NEW_DELETE_OPERATORS_FOR_VALUE_TYPE
    };
}

#endif

#endif