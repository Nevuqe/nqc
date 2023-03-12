//===--- PPCNQC.h - PowerPC ToolChain Implementations -------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_PPC_NQC_H
#define LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_PPC_NQC_H

#include "NQC.h"

namespace clang {
namespace driver {
namespace toolchains {

class LLVM_LIBRARY_VISIBILITY PPCNQCToolChain : public NQC {
public:
  PPCNQCToolChain(const Driver &D, const llvm::Triple &Triple,
                      const llvm::opt::ArgList &Args)
      : NQC(D, Triple, Args) {}

  void
  AddClangSystemIncludeArgs(const llvm::opt::ArgList &DriverArgs,
                            llvm::opt::ArgStringList &CC1Args) const override;
};

} // end namespace toolchains
} // end namespace driver
} // end namespace clang

#endif // LLVM_CLANG_LIB_DRIVER_TOOLCHAINS_PPC_NQC_H
