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

// System.MissingMethodException
struct MissingMethodException_t1488703331_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.MissingMethodException::.ctor()
extern "C"  void MissingMethodException__ctor_m_1180740275_0 (MissingMethodException_t1488703331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C"  void MissingMethodException__ctor_m_1966469419_0 (MissingMethodException_t1488703331_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMethodException__ctor_m_1922537202_0 (MissingMethodException_t1488703331_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C"  void MissingMethodException__ctor_m_1256055215_0 (MissingMethodException_t1488703331_0 * __this, String_t* ___className, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
extern "C"  String_t* MissingMethodException_get_Message_m_593602836_0 (MissingMethodException_t1488703331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
