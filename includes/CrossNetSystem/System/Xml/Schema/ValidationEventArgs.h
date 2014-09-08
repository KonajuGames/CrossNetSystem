/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_H__
#define __SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_H__

#ifndef CN_NO_SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS

#include "CrossNetSystem/System/EventArgs.h"
#include "CrossNetSystem/System/Xml/Schema/XmlSeverityType.h"

namespace System
{
    namespace Xml
    {
        namespace Schema
        {
            class XmlSchemaException;

            class ValidationEventArgs : public ::System::EventArgs
            {
                CN_DYNAMIC_ID()
                public:
                ::System::Xml::Schema::XmlSchemaException * ex;
                public:
                ::System::Xml::Schema::XmlSeverityType severity;
                public:
                void __ctor__(::System::Xml::Schema::XmlSchemaException * ex);
                static ::System::Xml::Schema::ValidationEventArgs * __Create__(::System::Xml::Schema::XmlSchemaException * ex);
                public:
                void __ctor__(::System::Xml::Schema::XmlSchemaException * ex, ::System::Xml::Schema::XmlSeverityType severity);
                static ::System::Xml::Schema::ValidationEventArgs * __Create__(::System::Xml::Schema::XmlSchemaException * ex, ::System::Xml::Schema::XmlSeverityType severity);
                public:
                ::System::Xml::Schema::XmlSeverityType get_Severity();
                public:
                ::System::Xml::Schema::XmlSchemaException * get_Exception();
                public:
                ::System::String * get_Message();
                public:
                static ::System::Xml::Schema::ValidationEventArgs * __Create__();
                public:
                static void __CreateInterfaceMap__();
            };
        }
    }
}

#endif

#endif
