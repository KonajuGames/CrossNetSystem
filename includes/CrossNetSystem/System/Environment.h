/*
 * CrossNetSystem
 * .NET API Copyrighted by Microsoft
 */

#ifndef __SYSTEM_ENVIRONMENT_H__
#define __SYSTEM_ENVIRONMENT_H__

#include "CrossNetRuntime/System/Object.h"

#include "CrossNetSystem/SystemForward.h"

#ifndef CN_NO_SYSTEM_ENVIRONMENT

namespace System
{
    // Incomplete definition
    class Environment : public ::System::Object
    {
        CN_DYNAMIC_ID()
        public:
        static ::System::Int32 MaximumLength;
        public:
        static ::System::Int32 MaxMachineNameLength;
        public:
        static ::System::Environment__ResourceHelper * m_resHelper;
        public:
        static ::System::Boolean s_IsW2k3;
        public:
        static volatile ::System::Boolean s_CheckedOSW2k3;
        public:
        static ::System::Object * s_InternalSyncObject;
        public:
        static ::System::OperatingSystem * m_os;
        public:
        static ::System::Environment__OSName m_osname;
        public:
        static ::System::IntPtr processWinStation;
        public:
        static ::System::Boolean isUserNonInteractive;
        public:
        static ::System::Object * get_InternalSyncObject();
        public:
        static ::System::Int32 get_TickCount();
        public:
        static ::System::Int32 nativeGetTickCount();
        public:
        static ::System::Void ExitNative(::System::Int32 exitCode);
        public:
        static ::System::Void Exit(::System::Int32 exitCode);
        public:
        static ::System::Int32 get_ExitCode();
        public:
        static ::System::Int32 set_ExitCode(::System::Int32 value);
        public:
        static ::System::Void nativeSetExitCode(::System::Int32 exitCode);
        public:
        static ::System::Int32 nativeGetExitCode();
        public:
        static ::System::Void FailFast(::System::String * message);
        public:
        static ::System::String * get_CommandLine();
        public:
        static ::System::String * GetCommandLineNative();
        public:
        static ::System::String * get_CurrentDirectory();
        public:
        static ::System::String * set_CurrentDirectory(::System::String * value);
        public:
        static ::System::String * get_SystemDirectory();
        public:
        static ::System::String * get_InternalWindowsDirectory();
        public:
        static ::System::String * ExpandEnvironmentVariables(::System::String * name);
        public:
        static ::System::String * get_MachineName();
        public:
        static ::System::Int32 get_ProcessorCount();
        public:
        static ::System::Array__G< ::System::String * > * GetCommandLineArgs();
        public:
        static ::System::Array__G< ::System::String * > * GetCommandLineArgsNative();
        public:
        static ::System::String * nativeGetEnvironmentVariable(::System::String * variable);
        public:
        static ::System::String * GetEnvironmentVariable(::System::String * variable);
        public:
        static ::System::String * GetEnvironmentVariable(::System::String * variable, ::System::EnvironmentVariableTarget target);
        public:
        static ::System::Array__G< ::System::Char > * nativeGetEnvironmentCharArray();
        public:
        static ::System::Collections::IDictionary * GetEnvironmentVariables();
        public:
        static ::System::Collections::IDictionary * GetRegistryKeyNameValuePairs(::Microsoft::Win32::RegistryKey * registryKey);
        public:
        static ::System::Collections::IDictionary * GetEnvironmentVariables(::System::EnvironmentVariableTarget target);
        public:
        static ::System::Void SetEnvironmentVariable(::System::String * variable, ::System::String * value);
        public:
        static ::System::Void CheckEnvironmentVariableName(::System::String * variable);
        public:
        static ::System::Void SetEnvironmentVariable(::System::String * variable, ::System::String * value, ::System::EnvironmentVariableTarget target);
        public:
        static ::System::Array__G< ::System::String * > * GetLogicalDrives();
        public:
        static ::System::String * get_NewLine();
        public:
        static ::System::Version * get_Version();
        public:
        static ::System::Int64 nativeGetWorkingSet();
        public:
        static ::System::Int64 get_WorkingSet();
        public:
        static ::System::OperatingSystem * get_OSVersion();
        public:
        static ::System::Boolean get_IsW2k3();
        public:
        static ::System::Boolean get_RunningOnWinNT();
        public:
        static ::System::Environment__OSName get_OSInfo();
        public:
        static ::System::Boolean IsWin9X();
        public:
        static ::System::Boolean nativeIsWin9x();
        public:
        static ::System::String * get_StackTrace();
        public:
        static ::System::String * GetStackTrace(::System::Exception * e, ::System::Boolean needFileInfo);
        public:
        static ::System::Void InitResourceHelper();
        public:
        static ::System::String * GetResourceFromDefault(::System::String * key);
        public:
        static ::System::String * GetResourceStringLocal(::System::String * key);
        public:
        static ::System::String * GetResourceString(::System::String * key);
        public:
        static ::System::String * GetResourceString(::System::String * key, ::System::Array__G< ::System::Object * > * values);
        public:
        static ::System::Boolean get_HasShutdownStarted();
        public:
        static ::System::Boolean nativeHasShutdownStarted();
        public:
        static ::System::Boolean GetCompatibilityFlag(::System::CompatibilityFlag flag);
        public:
        static ::System::String * get_UserName();
        public:
        static ::System::Boolean get_UserInteractive();
        public:
        static ::System::String * GetFolderPath(::System::Environment__SpecialFolder folder);
        public:
        static ::System::String * get_UserDomainName();
        public:
        static void Static__ctor__();
        public:
        static void __CreateInterfaceMap__();
    };
}
#endif

#endif
