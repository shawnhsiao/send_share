﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Object
struct Object_t1159094344_0;
struct Object_t1159094344_0_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_HideFlags1362580668.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m570634126_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t1159094344_0 * Object_Internal_CloneSingle_m_1165893540_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m_2034532203_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m176400816_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C"  void Object_DestroyImmediate_m1826427014_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m349958679_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m_585526451_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m1123518500_0 (Object_t1159094344_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m41317712_0 (Object_t1159094344_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C"  String_t* Object_ToString_m_2139934203_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C"  bool Object_Equals_m1697651929_0 (Object_t1159094344_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m1758859581_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m_1669757044_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___lhs, Object_t1159094344_0 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m434626365_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C"  int32_t Object_GetInstanceID_m200424466_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  IntPtr_t Object_GetCachedPtr_m1583421857_0 (Object_t1159094344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m264735768_0 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2106766291_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m_330376344_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___x, Object_t1159094344_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m1296218211_0 (Object_t * __this /* static, unused */, Object_t1159094344_0 * ___x, Object_t1159094344_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t1159094344_0_marshal(const Object_t1159094344_0& unmarshaled, Object_t1159094344_0_marshaled& marshaled);
extern "C" void Object_t1159094344_0_marshal_back(const Object_t1159094344_0_marshaled& marshaled, Object_t1159094344_0& unmarshaled);
extern "C" void Object_t1159094344_0_marshal_cleanup(Object_t1159094344_0_marshaled& marshaled);
