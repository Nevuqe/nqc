//===-- NativeRegisterContextNQC.cpp ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "NativeRegisterContextNQC.h"

#include "Plugins/Process/NQC/NativeProcessNQC.h"

#include "lldb/Host/common/NativeProcessProtocol.h"

using namespace lldb_private;
using namespace lldb_private::process_nqc;

// clang-format off
#include <sys/types.h>
#include <sys/ptrace.h>
// clang-format on

NativeProcessNQC &NativeRegisterContextNQC::GetProcess() {
  return static_cast<NativeProcessNQC &>(m_thread.GetProcess());
}

::pid_t NativeRegisterContextNQC::GetProcessPid() {
  return GetProcess().GetID();
}
