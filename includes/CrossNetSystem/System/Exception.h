/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_EXCEPTION_H__
#define __SYSTEM_EXCEPTION_H__

#ifndef CN_NO_SYSTEM_EXCEPTION

#include "CrossNetRuntime/System/Object.h"

#include "CrossNetSystem/System/Runtime/InteropServices/_Exception.h"
#include "CrossNetSystem/System/Runtime/Serialization/ISerializable.h"
#include "CrossNetSystem/System/Runtime/Serialization/StreamingContext.h"

namespace System
{
    class Exception : public System::Object
    {
    public:
        CN_DYNAMIC_ID()

        static Exception * __Create__()
        {
            Exception * __temp__ = new Exception();
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            // No __ctor__ function to call here... 
            return (__temp__);
        }

        static Exception * __Create__(String * text)
        {
            Exception * __temp__ = new Exception(text);
            __temp__->m__InterfaceMap__ = __GetInterfaceMap__();
            // No __ctor__ function to call here... 
            return (__temp__);
        }

        virtual System::String * ToString();
        virtual System::Boolean Equals(System::Object * obj);
        virtual System::Int32 GetHashCode();
        virtual System::Type * GetType();
        virtual System::String * get_Message();
        virtual System::Exception * GetBaseException();
        virtual System::String * get_StackTrace();
        virtual System::String * get_HelpLink();
        virtual void set_HelpLink(System::String * value);
        virtual System::String * get_Source();
        virtual void set_Source(System::String * value);
        virtual void GetObjectData(System::Runtime::Serialization::SerializationInfo * info, System::Runtime::Serialization::StreamingContext context);
        virtual System::Exception * get_InnerException();
        virtual System::Reflection::MethodBase * get_TargetSite();

    protected:
        Exception()     // So we can override it
        {
            // Do nothing...
        }

        class Wrapper___Exception : public System::Runtime::InteropServices::_Exception
        {
        public:
            virtual System::String * get_Message(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_Message());
            }
            virtual System::Exception * GetBaseException(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->GetBaseException());
            }
            virtual System::String * get_StackTrace(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_StackTrace());
            }
            virtual System::String * get_HelpLink(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_HelpLink());
            }
            virtual void set_HelpLink(void * __passed_instance__, System::String * value)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                exception->set_HelpLink(value);
            }
            virtual System::String * get_Source(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_Source());
            }
            virtual void set_Source(void * __passed_instance__, System::String * value)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->set_Source(value));
            }
            virtual void GetObjectData(void * __passed_instance__, System::Runtime::Serialization::SerializationInfo * info, System::Runtime::Serialization::StreamingContext context)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->GetObjectData(info, context));
            }
            virtual System::Exception * get_InnerException(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_InnerException());
            }
            virtual System::Reflection::MethodBase * get_TargetSite(void * __passed_instance__)
            {
                System::Exception * exception = static_cast<System::Exception *>(__passed_instance__);
                return (exception->get_TargetSite());
            }
        };

        class Wrapper__ISerializable : public System::Runtime::Serialization::ISerializable
        {
        };

    private:
        Exception(String * text)
            :
            mString(text)
        {
            // Do nothing...
        }

        System::String * mString;
    };
}

#endif

#endif