//===-- NativeRegisterContextNQC.h --------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef lldb_NativeRegisterContextNQC_h
#define lldb_NativeRegisterContextNQC_h

#include "lldb/Host/common/NativeThreadProtocol.h"

#include "Plugins/Process/Utility/NativeRegisterContextRegisterInfo.h"

namespace lldb_private {
namespace process_nqc {

class NativeProcessNQC;

class NativeRegisterContextNQC
    : public virtual NativeRegisterContextRegisterInfo {
public:
  // This function is implemented in the NativeRegisterContextNQC_*
  // subclasses to create a new instance of the host specific
  // NativeRegisterContextNQC. The implementations can't collide as only one
  // NativeRegisterContextNQC_* variant should be compiled into the final
  // executable.
  static NativeRegisterContextNQC *
  CreateHostNativeRegisterContextNQC(const ArchSpec &target_arch,
                                         NativeThreadProtocol &native_thread);
  virtual llvm::Error
  CopyHardwareWatchpointsFrom(NativeRegisterContextNQC &source) = 0;

protected:
  virtual NativeProcessNQC &GetProcess();
  virtual ::pid_t GetProcessPid();
};

} // namespace process_nqc
} // namespace lldb_private

#endif // #ifndef lldb_NativeRegisterContextNQC_h
