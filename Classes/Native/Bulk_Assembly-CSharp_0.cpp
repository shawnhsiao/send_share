#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ShareService
struct ShareService_t_744682415_0;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1621492670.h"
#include "AssemblyU2DCSharp_U3CModuleU3E1742281553.h"
#include "AssemblyU2DCSharp_U3CModuleU3E1742281553MethodDeclarations.h"
#include "AssemblyU2DCSharp_ShareService_744682415.h"
#include "AssemblyU2DCSharp_ShareService_744682415MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903MethodDeclarations.h"
#include "mscorlib_System_String_756155572.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Application1928857063MethodDeclarations.h"
#include "mscorlib_System_String_756155572MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_20126751MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShareService::.ctor()
extern Il2CppCodeGenString* _stringLiteral_526975583_0;
extern "C"  void ShareService__ctor_m955592037_0 (ShareService_t_744682415_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral_526975583_0 = il2cpp_codegen_string_literal_from_index(2717);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___seenshotName_2 = _stringLiteral_526975583_0;
		MonoBehaviour__ctor_m2022291967_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShareService::ShareScreenshotWithText(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral47_0;
extern "C"  void ShareService_ShareScreenshotWithText_m_1276621305_0 (ShareService_t_744682415_0 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral47_0 = il2cpp_codegen_string_literal_from_index(621);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Application_get_persistentDataPath_m_1740429849_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___seenshotName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1825781833_0(NULL /*static, unused*/, L_0, _stringLiteral47_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = (__this->___seenshotName_2);
		Application_CaptureScreenshot_m1449096047_0(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___text;
		String_t* L_5 = V_0;
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NativeShare_Share_m_146368470_0(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
