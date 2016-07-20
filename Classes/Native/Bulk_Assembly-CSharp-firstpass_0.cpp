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

// NativeShare
struct NativeShare_t_20126751_0;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1621492670.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_ConfigSt2049620293.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_ConfigSt2049620293MethodDeclarations.h"
#include "mscorlib_System_String_756155572.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_SocialSh_921898474.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_SocialSh_921898474MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_20126751.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_20126751MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NativeShare/ConfigStruct
extern "C" void ConfigStruct_t2049620293_0_marshal(const ConfigStruct_t2049620293_0& unmarshaled, ConfigStruct_t2049620293_0_marshaled& marshaled)
{
	marshaled.___title_0 = il2cpp_codegen_marshal_string(unmarshaled.___title_0);
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.___message_1);
}
extern "C" void ConfigStruct_t2049620293_0_marshal_back(const ConfigStruct_t2049620293_0_marshaled& marshaled, ConfigStruct_t2049620293_0& unmarshaled)
{
	unmarshaled.___title_0 = il2cpp_codegen_marshal_string_result(marshaled.___title_0);
	unmarshaled.___message_1 = il2cpp_codegen_marshal_string_result(marshaled.___message_1);
}
// Conversion method for clean up from marshalling of: NativeShare/ConfigStruct
extern "C" void ConfigStruct_t2049620293_0_marshal_cleanup(ConfigStruct_t2049620293_0_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___title_0);
	marshaled.___title_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: NativeShare/SocialSharingStruct
extern "C" void SocialSharingStruct_t_921898474_0_marshal(const SocialSharingStruct_t_921898474_0& unmarshaled, SocialSharingStruct_t_921898474_0_marshaled& marshaled)
{
	marshaled.___text_0 = il2cpp_codegen_marshal_string(unmarshaled.___text_0);
	marshaled.___url_1 = il2cpp_codegen_marshal_string(unmarshaled.___url_1);
	marshaled.___image_2 = il2cpp_codegen_marshal_string(unmarshaled.___image_2);
	marshaled.___subject_3 = il2cpp_codegen_marshal_string(unmarshaled.___subject_3);
}
extern "C" void SocialSharingStruct_t_921898474_0_marshal_back(const SocialSharingStruct_t_921898474_0_marshaled& marshaled, SocialSharingStruct_t_921898474_0& unmarshaled)
{
	unmarshaled.___text_0 = il2cpp_codegen_marshal_string_result(marshaled.___text_0);
	unmarshaled.___url_1 = il2cpp_codegen_marshal_string_result(marshaled.___url_1);
	unmarshaled.___image_2 = il2cpp_codegen_marshal_string_result(marshaled.___image_2);
	unmarshaled.___subject_3 = il2cpp_codegen_marshal_string_result(marshaled.___subject_3);
}
// Conversion method for clean up from marshalling of: NativeShare/SocialSharingStruct
extern "C" void SocialSharingStruct_t_921898474_0_marshal_cleanup(SocialSharingStruct_t_921898474_0_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_0);
	marshaled.___text_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___url_1);
	marshaled.___url_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___image_2);
	marshaled.___image_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subject_3);
	marshaled.___subject_3 = NULL;
}
// System.Void NativeShare::.ctor()
extern "C"  void NativeShare__ctor_m1126673231_0 (NativeShare_t_20126751_0 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeShare::Share(System.String,System.String,System.String,System.String)
extern "C"  void NativeShare_Share_m_146368470_0 (Object_t * __this /* static, unused */, String_t* ___shareText, String_t* ___imagePath, String_t* ___url, String_t* ___subject, const MethodInfo* method)
{
	{
		String_t* L_0 = ___shareText;
		String_t* L_1 = ___subject;
		String_t* L_2 = ___url;
		String_t* L_3 = ___imagePath;
		NativeShare_CallSocialShareAdvanced_m300608371_0(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeShare::showAlertMessage(NativeShare/ConfigStruct&)
extern "C" {void DEFAULT_CALL showAlertMessage(ConfigStruct_t2049620293_0_marshaled*);}
extern "C"  void NativeShare_showAlertMessage_m447426541_0 (Object_t * __this /* static, unused */, ConfigStruct_t2049620293_0 * ___conf, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (ConfigStruct_t2049620293_0_marshaled*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)showAlertMessage;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'showAlertMessage'"));
		}
	}

	// Marshaling of parameter '___conf' to native representation
	ConfigStruct_t2049620293_0_marshaled* ____conf_marshaled = { 0 };
	ConfigStruct_t2049620293_0_marshaled ____conf_marshaled_dereferenced = { 0 };
	ConfigStruct_t2049620293_0_marshal(*___conf, ____conf_marshaled_dereferenced);
	____conf_marshaled = &____conf_marshaled_dereferenced;

	// Native function invocation
	_il2cpp_pinvoke_func(____conf_marshaled);

	// Marshaling of parameter '___conf' back from native representation
	ConfigStruct_t2049620293_0  ____conf_result_dereferenced = { 0 };
	ConfigStruct_t2049620293_0 * ____conf_result = &____conf_result_dereferenced;
	ConfigStruct_t2049620293_0_marshal_back(*____conf_marshaled, *____conf_result);
	*___conf = *____conf_result;

	// Marshaling cleanup of parameter '___conf' native representation
	ConfigStruct_t2049620293_0_marshal_cleanup(*____conf_marshaled);

}
// System.Void NativeShare::showSocialSharing(NativeShare/SocialSharingStruct&)
extern "C" {void DEFAULT_CALL showSocialSharing(SocialSharingStruct_t_921898474_0_marshaled*);}
extern "C"  void NativeShare_showSocialSharing_m1817940662_0 (Object_t * __this /* static, unused */, SocialSharingStruct_t_921898474_0 * ___conf, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (SocialSharingStruct_t_921898474_0_marshaled*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)showSocialSharing;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'showSocialSharing'"));
		}
	}

	// Marshaling of parameter '___conf' to native representation
	SocialSharingStruct_t_921898474_0_marshaled* ____conf_marshaled = { 0 };
	SocialSharingStruct_t_921898474_0_marshaled ____conf_marshaled_dereferenced = { 0 };
	SocialSharingStruct_t_921898474_0_marshal(*___conf, ____conf_marshaled_dereferenced);
	____conf_marshaled = &____conf_marshaled_dereferenced;

	// Native function invocation
	_il2cpp_pinvoke_func(____conf_marshaled);

	// Marshaling of parameter '___conf' back from native representation
	SocialSharingStruct_t_921898474_0  ____conf_result_dereferenced = { 0 };
	SocialSharingStruct_t_921898474_0 * ____conf_result = &____conf_result_dereferenced;
	SocialSharingStruct_t_921898474_0_marshal_back(*____conf_marshaled, *____conf_result);
	*___conf = *____conf_result;

	// Marshaling cleanup of parameter '___conf' native representation
	SocialSharingStruct_t_921898474_0_marshal_cleanup(*____conf_marshaled);

}
// System.Void NativeShare::CallSocialShare(System.String,System.String)
extern TypeInfo* ConfigStruct_t2049620293_0_il2cpp_TypeInfo_var;
extern "C"  void NativeShare_CallSocialShare_m_1987356803_0 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigStruct_t2049620293_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		s_Il2CppMethodIntialized = true;
	}
	ConfigStruct_t2049620293_0  V_0 = {0};
	{
		Initobj (ConfigStruct_t2049620293_0_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_0 = ___title;
		(&V_0)->___title_0 = L_0;
		String_t* L_1 = ___message;
		(&V_0)->___message_1 = L_1;
		NativeShare_showAlertMessage_m447426541_0(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeShare::CallSocialShareAdvanced(System.String,System.String,System.String,System.String)
extern TypeInfo* SocialSharingStruct_t_921898474_0_il2cpp_TypeInfo_var;
extern "C"  void NativeShare_CallSocialShareAdvanced_m300608371_0 (Object_t * __this /* static, unused */, String_t* ___defaultTxt, String_t* ___subject, String_t* ___url, String_t* ___img, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialSharingStruct_t_921898474_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		s_Il2CppMethodIntialized = true;
	}
	SocialSharingStruct_t_921898474_0  V_0 = {0};
	{
		Initobj (SocialSharingStruct_t_921898474_0_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_0 = ___defaultTxt;
		(&V_0)->___text_0 = L_0;
		String_t* L_1 = ___url;
		(&V_0)->___url_1 = L_1;
		String_t* L_2 = ___img;
		(&V_0)->___image_2 = L_2;
		String_t* L_3 = ___subject;
		(&V_0)->___subject_3 = L_3;
		NativeShare_showSocialSharing_m1817940662_0(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
