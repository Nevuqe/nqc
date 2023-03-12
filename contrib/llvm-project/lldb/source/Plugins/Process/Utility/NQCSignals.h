//===-- NQCSignals.h ----------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_NQCSIGNALS_H
#define LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_NQCSIGNALS_H

#include "lldb/Target/UnixSignals.h"

namespace lldb_private {

/// NQC specific set of Unix signals.
class NQCSignals : public UnixSignals {
public:
  NQCSignals();

private:
  void Reset() override;
};

} // namespace lldb_private

#endif // LLDB_SOURCE_PLUGINS_PROCESS_UTILITY_NQCSIGNALS_H
