//===-- RegisterContextNQC_powerpc.h -------------------------*- C++
//-*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_REGISTERCONTEXTNQC_POWERPC_H
#define LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_REGISTERCONTEXTNQC_POWERPC_H

#include "RegisterInfoInterface.h"

class RegisterContextNQC_powerpc
    : public lldb_private::RegisterInfoInterface {
public:
  RegisterContextNQC_powerpc(const lldb_private::ArchSpec &target_arch);
  ~RegisterContextNQC_powerpc() override;

  size_t GetGPRSize() const override;

  const lldb_private::RegisterInfo *GetRegisterInfo() const override;

  uint32_t GetRegisterCount() const override;
};

class RegisterContextNQC_powerpc32 : public RegisterContextNQC_powerpc {
public:
  RegisterContextNQC_powerpc32(const lldb_private::ArchSpec &target_arch);
  ~RegisterContextNQC_powerpc32() override;

  size_t GetGPRSize() const override;

  const lldb_private::RegisterInfo *GetRegisterInfo() const override;

  uint32_t GetRegisterCount() const override;
};

class RegisterContextNQC_powerpc64 : public RegisterContextNQC_powerpc {
public:
  RegisterContextNQC_powerpc64(const lldb_private::ArchSpec &target_arch);
  ~RegisterContextNQC_powerpc64() override;

  size_t GetGPRSize() const override;

  const lldb_private::RegisterInfo *GetRegisterInfo() const override;

  uint32_t GetRegisterCount() const override;
};

#endif // LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_REGISTERCONTEXTNQC_POWERPC_H
