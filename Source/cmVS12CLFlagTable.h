static cmVS7FlagTable cmVS12CLFlagTable[] = {

  // Enum Properties
  { "DebugInformationFormat", "", "None", "None", 0 },
  { "DebugInformationFormat", "Z7", "C7 compatible", "OldStyle", 0 },
  { "DebugInformationFormat", "Zi", "Program Database", "ProgramDatabase", 0 },
  { "DebugInformationFormat", "ZI", "Program Database for Edit And Continue",
    "EditAndContinue", 0 },

  { "WarningLevel", "W0", "Turn Off All Warnings", "TurnOffAllWarnings", 0 },
  { "WarningLevel", "W1", "Level1", "Level1", 0 },
  { "WarningLevel", "W2", "Level2", "Level2", 0 },
  { "WarningLevel", "W3", "Level3", "Level3", 0 },
  { "WarningLevel", "W4", "Level4", "Level4", 0 },
  { "WarningLevel", "Wall", "EnableAllWarnings", "EnableAllWarnings", 0 },

  { "Optimization", "", "Custom", "Custom", 0 },
  { "Optimization", "Od", "Disabled", "Disabled", 0 },
  { "Optimization", "O1", "Minimize Size", "MinSpace", 0 },
  { "Optimization", "O2", "Maximize Speed", "MaxSpeed", 0 },
  { "Optimization", "Ox", "Full Optimization", "Full", 0 },

  { "InlineFunctionExpansion", "", "Default", "Default", 0 },
  { "InlineFunctionExpansion", "Ob0", "Disabled", "Disabled", 0 },
  { "InlineFunctionExpansion", "Ob1", "Only __inline", "OnlyExplicitInline",
    0 },
  { "InlineFunctionExpansion", "Ob2", "Any Suitable", "AnySuitable", 0 },

  { "FavorSizeOrSpeed", "Os", "Favor small code", "Size", 0 },
  { "FavorSizeOrSpeed", "Ot", "Favor fast code", "Speed", 0 },
  { "FavorSizeOrSpeed", "", "Neither", "Neither", 0 },

  { "ExceptionHandling", "EHa", "Yes with SEH Exceptions", "Async", 0 },
  { "ExceptionHandling", "EHsc", "Yes", "Sync", 0 },
  { "ExceptionHandling", "EHs", "Yes with Extern C functions", "SyncCThrow",
    0 },
  { "ExceptionHandling", "", "No", "false", 0 },

  { "BasicRuntimeChecks", "RTCs", "Stack Frames", "StackFrameRuntimeCheck",
    0 },
  { "BasicRuntimeChecks", "RTCu", "Uninitialized variables",
    "UninitializedLocalUsageCheck", 0 },
  { "BasicRuntimeChecks", "RTC1", "Both (/RTC1, equiv. to /RTCsu)",
    "EnableFastChecks", 0 },
  { "BasicRuntimeChecks", "", "Default", "Default", 0 },

  { "RuntimeLibrary", "MT", "Multi-threaded", "MultiThreaded", 0 },
  { "RuntimeLibrary", "MTd", "Multi-threaded Debug", "MultiThreadedDebug", 0 },
  { "RuntimeLibrary", "MD", "Multi-threaded DLL", "MultiThreadedDLL", 0 },
  { "RuntimeLibrary", "MDd", "Multi-threaded Debug DLL",
    "MultiThreadedDebugDLL", 0 },

  { "StructMemberAlignment", "Zp1", "1 Byte", "1Byte", 0 },
  { "StructMemberAlignment", "Zp2", "2 Bytes", "2Bytes", 0 },
  { "StructMemberAlignment", "Zp4", "4 Byte", "4Bytes", 0 },
  { "StructMemberAlignment", "Zp8", "8 Bytes", "8Bytes", 0 },
  { "StructMemberAlignment", "Zp16", "16 Bytes", "16Bytes", 0 },
  { "StructMemberAlignment", "", "Default", "Default", 0 },

  { "BufferSecurityCheck", "GS-", "Disable Security Check", "false", 0 },
  { "BufferSecurityCheck", "GS", "Enable Security Check", "true", 0 },

  { "EnableEnhancedInstructionSet", "arch:SSE", "Streaming SIMD Extensions",
    "StreamingSIMDExtensions", 0 },
  { "EnableEnhancedInstructionSet", "arch:SSE2", "Streaming SIMD Extensions 2",
    "StreamingSIMDExtensions2", 0 },
  { "EnableEnhancedInstructionSet", "arch:AVX", "Advanced Vector Extensions",
    "AdvancedVectorExtensions", 0 },
  { "EnableEnhancedInstructionSet", "arch:IA32", "No Enhanced Instructions",
    "NoExtensions", 0 },
  { "EnableEnhancedInstructionSet", "", "Not Set", "NotSet", 0 },

  { "FloatingPointModel", "fp:precise", "Precise", "Precise", 0 },
  { "FloatingPointModel", "fp:strict", "Strict", "Strict", 0 },
  { "FloatingPointModel", "fp:fast", "Fast", "Fast", 0 },

  { "PrecompiledHeader", "Yc", "Create", "Create",
    cmVS7FlagTable::UserValueIgnored | cmVS7FlagTable::Continue },
  { "PrecompiledHeader", "Yu", "Use", "Use",
    cmVS7FlagTable::UserValueIgnored | cmVS7FlagTable::Continue },
  { "PrecompiledHeader", "", "Not Using Precompiled Headers", "NotUsing", 0 },

  { "AssemblerOutput", "", "No Listing", "NoListing", 0 },
  { "AssemblerOutput", "FA", "Assembly-Only Listing", "AssemblyCode", 0 },
  { "AssemblerOutput", "FAc", "Assembly With Machine Code",
    "AssemblyAndMachineCode", 0 },
  { "AssemblerOutput", "FAs", "Assembly With Source Code",
    "AssemblyAndSourceCode", 0 },
  { "AssemblerOutput", "FAcs", "Assembly, Machine Code and Source", "All", 0 },

  { "CallingConvention", "Gd", "__cdecl", "Cdecl", 0 },
  { "CallingConvention", "Gr", "__fastcall", "FastCall", 0 },
  { "CallingConvention", "Gz", "__stdcall", "StdCall", 0 },
  { "CallingConvention", "Gv", "__vectorcall", "VectorCall", 0 },

  { "CompileAs", "", "Default", "Default", 0 },
  { "CompileAs", "TC", "Compile as C Code", "CompileAsC", 0 },
  { "CompileAs", "TP", "Compile as C++ Code", "CompileAsCpp", 0 },

  { "ErrorReporting", "errorReport:none", "Do Not Send Report", "None", 0 },
  { "ErrorReporting", "errorReport:prompt", "Prompt Immediately", "Prompt",
    0 },
  { "ErrorReporting", "errorReport:queue", "Queue For Next Login", "Queue",
    0 },
  { "ErrorReporting", "errorReport:send", "Send Automatically", "Send", 0 },

  { "CompileAsManaged", "", "No Common Language RunTime Support", "false", 0 },
  { "CompileAsManaged", "clr", "Common Language RunTime Support", "true", 0 },
  { "CompileAsManaged", "clr:pure",
    "Pure MSIL Common Language RunTime Support", "Pure", 0 },
  { "CompileAsManaged", "clr:safe",
    "Safe MSIL Common Language RunTime Support", "Safe", 0 },
  { "CompileAsManaged", "clr:oldSyntax",
    "Common Language RunTime Support, Old Syntax", "OldSyntax", 0 },

  // Bool Properties
  { "CompileAsWinRT", "ZW", "", "true", 0 },
  { "WinRTNoStdLib", "ZW:nostdlib", "", "true", 0 },
  { "SuppressStartupBanner", "nologo", "", "true", 0 },
  { "TreatWarningAsError", "WX-", "", "false", 0 },
  { "TreatWarningAsError", "WX", "", "true", 0 },
  { "SDLCheck", "sdl-", "", "false", 0 },
  { "SDLCheck", "sdl", "", "true", 0 },
  { "IntrinsicFunctions", "Oi", "", "true", 0 },
  { "OmitFramePointers", "Oy-", "", "false", 0 },
  { "OmitFramePointers", "Oy", "", "true", 0 },
  { "EnableFiberSafeOptimizations", "GT", "", "true", 0 },
  { "WholeProgramOptimization", "GL", "", "true", 0 },
  { "UndefineAllPreprocessorDefinitions", "u", "", "true", 0 },
  { "IgnoreStandardIncludePath", "X", "", "true", 0 },
  { "PreprocessToFile", "P", "", "true", 0 },
  { "PreprocessSuppressLineNumbers", "EP", "", "true", 0 },
  { "PreprocessKeepComments", "C", "", "true", 0 },
  { "StringPooling", "GF-", "", "false", 0 },
  { "StringPooling", "GF", "", "true", 0 },
  { "MinimalRebuild", "Gm-", "", "false", 0 },
  { "MinimalRebuild", "Gm", "", "true", 0 },
  { "SmallerTypeCheck", "RTCc", "", "true", 0 },
  { "FunctionLevelLinking", "Gy-", "", "false", 0 },
  { "FunctionLevelLinking", "Gy", "", "true", 0 },
  { "EnableParallelCodeGeneration", "Qpar-", "", "false", 0 },
  { "EnableParallelCodeGeneration", "Qpar", "", "true", 0 },
  { "FloatingPointExceptions", "fp:except-", "", "false", 0 },
  { "FloatingPointExceptions", "fp:except", "", "true", 0 },
  { "CreateHotpatchableImage", "hotpatch", "", "true", 0 },
  { "DisableLanguageExtensions", "Za", "", "true", 0 },
  { "TreatWChar_tAsBuiltInType", "Zc:wchar_t-", "", "false", 0 },
  { "TreatWChar_tAsBuiltInType", "Zc:wchar_t", "", "true", 0 },
  { "ForceConformanceInForLoopScope", "Zc:forScope-", "", "false", 0 },
  { "ForceConformanceInForLoopScope", "Zc:forScope", "", "true", 0 },
  { "RuntimeTypeInfo", "GR-", "", "false", 0 },
  { "RuntimeTypeInfo", "GR", "", "true", 0 },
  { "OpenMPSupport", "openmp-", "", "false", 0 },
  { "OpenMPSupport", "openmp", "", "true", 0 },
  { "ExpandAttributedSource", "Fx", "", "true", 0 },
  { "UseUnicodeForAssemblerListing", "FAu", "", "true", 0 },
  { "ShowIncludes", "showIncludes", "", "true", 0 },
  { "EnablePREfast", "analyze-", "", "false", 0 },
  { "EnablePREfast", "analyze", "", "true", 0 },
  { "UseFullPaths", "FC", "", "true", 0 },
  { "OmitDefaultLibName", "Zl", "", "true", 0 },

  // Bool Properties With Argument
  { "MultiProcessorCompilation", "MP", "", "true",
    cmVS7FlagTable::UserValueIgnored | cmVS7FlagTable::Continue },
  { "ProcessorNumber", "MP", "Multi-processor Compilation", "",
    cmVS7FlagTable::UserValueRequired },
  { "GenerateXMLDocumentationFiles", "doc", "", "true",
    cmVS7FlagTable::UserValueIgnored | cmVS7FlagTable::Continue },
  { "XMLDocumentationFileName", "doc", "Generate XML Documentation Files", "",
    cmVS7FlagTable::UserValueRequired },
  { "BrowseInformation", "FR", "", "true",
    cmVS7FlagTable::UserValueIgnored | cmVS7FlagTable::Continue },
  { "BrowseInformationFile", "FR", "Enable Browse Information", "",
    cmVS7FlagTable::UserValueRequired },

  // String List Properties
  { "AdditionalIncludeDirectories", "I", "Additional Include Directories", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "AdditionalUsingDirectories", "AI", "Additional #using Directories", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "PreprocessorDefinitions", "D ", "Preprocessor Definitions", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "UndefinePreprocessorDefinitions", "U",
    "Undefine Preprocessor Definitions", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "DisableSpecificWarnings", "wd", "Disable Specific Warnings", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "ForcedIncludeFiles", "FI", "Forced Include File", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "ForcedUsingFiles", "FU", "Forced #using File", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "PREfastLog", "analyze:log", "Code Analysis Log", "",
    cmVS7FlagTable::UserFollowing },
  { "PREfastAdditionalPlugins", "analyze:plugin",
    "Additional Code Analysis Native plugins", "",
    cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },
  { "TreatSpecificWarningsAsErrors", "we", "Treat Specific Warnings As Errors",
    "", cmVS7FlagTable::UserValue | cmVS7FlagTable::SemicolonAppendable },

  // String Properties
  // Skip [TrackerLogDirectory] - no command line Switch.
  { "PreprocessOutputPath", "Fi", "Preprocess Output Path", "",
    cmVS7FlagTable::UserValue },
  { "PrecompiledHeaderFile", "Yc", "Precompiled Header Name", "",
    cmVS7FlagTable::UserValue },
  { "PrecompiledHeaderFile", "Yu", "Precompiled Header Name", "",
    cmVS7FlagTable::UserValueRequired },
  { "PrecompiledHeaderOutputFile", "Fp", "Precompiled Header Output File", "",
    cmVS7FlagTable::UserValue },
  { "AssemblerListingLocation", "Fa", "ASM List Location", "",
    cmVS7FlagTable::UserValue },
  { "ObjectFileName", "Fo", "Object File Name", "",
    cmVS7FlagTable::UserValue },
  { "ProgramDataBaseFileName", "Fd", "Program Database File Name", "",
    cmVS7FlagTable::UserValue },
  // Skip [XMLDocumentationFileName] - no command line Switch.
  // Skip [BrowseInformationFile] - no command line Switch.
  // Skip [AdditionalOptions] - no command line Switch.
  { 0, 0, 0, 0, 0 }
};
