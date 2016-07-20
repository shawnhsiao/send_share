#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// NativeShare
struct NativeShare_t_20126751_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_ConfigSt2049620293.h"
#include "AssemblyU2DCSharpU2Dfirstpass_NativeShare_SocialSh_921898474.h"

// System.Void NativeShare::.ctor()
extern "C"  void NativeShare__ctor_m1126673231_0 (NativeShare_t_20126751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::Share(System.String,System.String,System.String,System.String)
extern "C"  void NativeShare_Share_m_146368470_0 (Object_t * __this /* static, unused */, String_t* ___shareText, String_t* ___imagePath, String_t* ___url, String_t* ___subject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::showAlertMessage(NativeShare/ConfigStruct&)
extern "C"  void NativeShare_showAlertMessage_m447426541_0 (Object_t * __this /* static, unused */, ConfigStruct_t2049620293_0 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::showSocialSharing(NativeShare/SocialSharingStruct&)
extern "C"  void NativeShare_showSocialSharing_m1817940662_0 (Object_t * __this /* static, unused */, SocialSharingStruct_t_921898474_0 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::CallSocialShare(System.String,System.String)
extern "C"  void NativeShare_CallSocialShare_m_1987356803_0 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::CallSocialShareAdvanced(System.String,System.String,System.String,System.String)
extern "C"  void NativeShare_CallSocialShareAdvanced_m300608371_0 (Object_t * __this /* static, unused */, String_t* ___defaultTxt, String_t* ___subject, String_t* ___url, String_t* ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
