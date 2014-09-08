/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_XML_XMLNODETYPE_H__
#define __SYSTEM_XML_XMLNODETYPE_H__

#ifndef CN_NO_SYSTEM_XML_XMLNODETYPE
#include "CrossNetRuntime/Internal/EnumWrapper.h"
namespace System
{
    namespace Xml
    {
        BEGIN_DECLARE_ENUM(XmlNodeType, int, 0)
            static const int Comment = 0;
            static const int DocumentType = 1;
            static const int XmlDeclaration = 2;
            static const int Document = 3;
            static const int Element = 4;
            static const int Entity = 5;
        END_DECLARE_ENUM
    }
}
#endif

#endif