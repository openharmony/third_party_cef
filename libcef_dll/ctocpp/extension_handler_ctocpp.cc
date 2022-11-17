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
// $hash=befb9e9bd438e431bb55b7c67413d9d7a7b263f2$
//

#include "libcef_dll/ctocpp/extension_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/extension_cpptoc.h"
#include "libcef_dll/cpptoc/get_extension_resource_callback_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefExtensionHandlerCToCpp::OnExtensionLoadFailed(cef_errorcode_t result) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_extension_load_failed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_extension_load_failed(_struct, result);
}

NO_SANITIZE("cfi-icall")
void CefExtensionHandlerCToCpp::OnExtensionLoaded(
    CefRefPtr<CefExtension> extension) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_extension_loaded))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return;

  // Execute
  _struct->on_extension_loaded(_struct, CefExtensionCppToC::Wrap(extension));
}

NO_SANITIZE("cfi-icall")
void CefExtensionHandlerCToCpp::OnExtensionUnloaded(
    CefRefPtr<CefExtension> extension) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_extension_unloaded))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return;

  // Execute
  _struct->on_extension_unloaded(_struct, CefExtensionCppToC::Wrap(extension));
}

NO_SANITIZE("cfi-icall")
bool CefExtensionHandlerCToCpp::OnBeforeBackgroundBrowser(
    CefRefPtr<CefExtension> extension,
    const CefString& url,
    CefRefPtr<CefClient>& client,
    CefBrowserSettings& settings) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_background_browser))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return false;
  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return false;

  // Translate param: client; type: refptr_same_byref
  cef_client_t* clientStruct = NULL;
  if (client.get())
    clientStruct = CefClientCToCpp::Unwrap(client);
  cef_client_t* clientOrig = clientStruct;

  // Execute
  int _retval = _struct->on_before_background_browser(
      _struct, CefExtensionCppToC::Wrap(extension), url.GetStruct(),
      &clientStruct, &settings);

  // Restore param:client; type: refptr_same_byref
  if (clientStruct) {
    if (clientStruct != clientOrig) {
      client = CefClientCToCpp::Wrap(clientStruct);
    }
  } else {
    client = nullptr;
  }

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefExtensionHandlerCToCpp::OnBeforeBrowser(
    CefRefPtr<CefExtension> extension,
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefBrowser> active_browser,
    int index,
    const CefString& url,
    bool active,
    CefWindowInfo& windowInfo,
    CefRefPtr<CefClient>& client,
    CefBrowserSettings& settings) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_browser))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return false;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: active_browser; type: refptr_diff
  DCHECK(active_browser.get());
  if (!active_browser.get())
    return false;
  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return false;

  // Translate param: client; type: refptr_same_byref
  cef_client_t* clientStruct = NULL;
  if (client.get())
    clientStruct = CefClientCToCpp::Unwrap(client);
  cef_client_t* clientOrig = clientStruct;

  // Execute
  int _retval = _struct->on_before_browser(
      _struct, CefExtensionCppToC::Wrap(extension),
      CefBrowserCppToC::Wrap(browser), CefBrowserCppToC::Wrap(active_browser),
      index, url.GetStruct(), active, &windowInfo, &clientStruct, &settings);

  // Restore param:client; type: refptr_same_byref
  if (clientStruct) {
    if (clientStruct != clientOrig) {
      client = CefClientCToCpp::Wrap(clientStruct);
    }
  } else {
    client = nullptr;
  }

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowser> CefExtensionHandlerCToCpp::GetActiveBrowser(
    CefRefPtr<CefExtension> extension,
    CefRefPtr<CefBrowser> browser,
    bool include_incognito) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_active_browser))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return nullptr;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return nullptr;

  // Execute
  cef_browser_t* _retval = _struct->get_active_browser(
      _struct, CefExtensionCppToC::Wrap(extension),
      CefBrowserCppToC::Wrap(browser), include_incognito);

  // Return type: refptr_diff
  return CefBrowserCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall")
bool CefExtensionHandlerCToCpp::CanAccessBrowser(
    CefRefPtr<CefExtension> extension,
    CefRefPtr<CefBrowser> browser,
    bool include_incognito,
    CefRefPtr<CefBrowser> target_browser) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_access_browser))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return false;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: target_browser; type: refptr_diff
  DCHECK(target_browser.get());
  if (!target_browser.get())
    return false;

  // Execute
  int _retval = _struct->can_access_browser(
      _struct, CefExtensionCppToC::Wrap(extension),
      CefBrowserCppToC::Wrap(browser), include_incognito,
      CefBrowserCppToC::Wrap(target_browser));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefExtensionHandlerCToCpp::GetExtensionResource(
    CefRefPtr<CefExtension> extension,
    CefRefPtr<CefBrowser> browser,
    const CefString& file,
    CefRefPtr<CefGetExtensionResourceCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_extension_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_extension_resource))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: refptr_diff
  DCHECK(extension.get());
  if (!extension.get())
    return false;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: file; type: string_byref_const
  DCHECK(!file.empty());
  if (file.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = _struct->get_extension_resource(
      _struct, CefExtensionCppToC::Wrap(extension),
      CefBrowserCppToC::Wrap(browser), file.GetStruct(),
      CefGetExtensionResourceCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefExtensionHandlerCToCpp::CefExtensionHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefExtensionHandlerCToCpp::~CefExtensionHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_extension_handler_t* CefCToCppRefCounted<
    CefExtensionHandlerCToCpp,
    CefExtensionHandler,
    cef_extension_handler_t>::UnwrapDerived(CefWrapperType type,
                                            CefExtensionHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefExtensionHandlerCToCpp,
                                   CefExtensionHandler,
                                   cef_extension_handler_t>::kWrapperType =
    WT_EXTENSION_HANDLER;
