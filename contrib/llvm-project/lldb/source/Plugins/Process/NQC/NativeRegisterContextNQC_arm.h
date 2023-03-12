//===-- NativeRegisterContextNQC_arm.h ----------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#if defined(__arm__)

#ifndef lldb_NativeRegisterContextNQC_arm_h
#define lldb_NativeRegisterContextNQC_arm_h

// clang-format off
#include <sys/types.h>
#include <machine/reg.h>
#include <machine/vfp.h>
// clang-format on

#include "Plugins/Process/NQC/NativeRegisterContextNQC.h"
#include "Plugins/Process/Utility/RegisterInfoPOSIX_arm.h"

#include <array>

namespace lldb_private {
namespace process_nqc {

class NativeProcessNQC;

class NativeRegisterContextNQC_arm : public NativeRegisterContextNQC {
public:
  NativeRegisterContextNQC_arm(const ArchSpec &target_arch,
                                   NativeThreadProtocol &native_thread);

  uint32_t GetRegisterSetCount() const override;

  uint32_t GetUserRegisterCount() const override;

  const RegisterSet *GetRegisterSet(uint32_t set_index) const override;

  Status ReadRegister(const RegisterInfo *reg_info,
                      RegisterValue &reg_value) override;

  Status WriteRegister(const RegisterInfo *reg_info,
                       const RegisterValue &reg_value) override;

  Status ReadAllRegisterValues(lldb::WritableDataBufferSP &data_sp) override;

  Status WriteAllRegisterValues(const lldb::DataBufferSP &data_sp) override;

  llvm::Error
  CopyHardwareWatchpointsFrom(NativeRegisterContextNQC &source) override;

private:
  std::array<uint8_t, sizeof(reg) + sizeof(vfp_state)> m_reg_data;

  Status ReadRegisterSet(uint32_t set);
  Status WriteRegisterSet(uint32_t set);

  RegisterInfoPOSIX_arm &GetRegisterInfo() const;
};

} // namespace process_nqc
} // namespace lldb_private

#endif // #ifndef lldb_NativeRegisterContextNQC_arm_h

#endif // defined (__arm__)
