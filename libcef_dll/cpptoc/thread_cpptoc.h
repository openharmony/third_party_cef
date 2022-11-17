// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=820a6a8e017c6ba2a19f5c0b8db0f8aa628a0cfa$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_THREAD_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_THREAD_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_thread_capi.h"
#include "include/cef_thread.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefThreadCppToC
    : public CefCppToCRefCounted<CefThreadCppToC, CefThread, cef_thread_t> {
 public:
  CefThreadCppToC();
  virtual ~CefThreadCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_THREAD_CPPTOC_H_
