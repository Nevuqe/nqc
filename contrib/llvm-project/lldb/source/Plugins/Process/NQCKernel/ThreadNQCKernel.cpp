//===-- ThreadNQCKernel.cpp -------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "ThreadNQCKernel.h"

#include "lldb/Target/Unwind.h"
#include "lldb/Utility/Log.h"

#include "Plugins/Process/Utility/RegisterContextNQC_i386.h"
#include "Plugins/Process/Utility/RegisterContextNQC_x86_64.h"
#include "Plugins/Process/Utility/RegisterInfoPOSIX_arm64.h"
#include "ProcessNQCKernel.h"
#include "RegisterContextNQCKernel_arm64.h"
#include "RegisterContextNQCKernel_i386.h"
#include "RegisterContextNQCKernel_x86_64.h"
#include "ThreadNQCKernel.h"

using namespace lldb;
using namespace lldb_private;

ThreadNQCKernel::ThreadNQCKernel(Process &process, lldb::tid_t tid,
                                         lldb::addr_t pcb_addr,
                                         std::string thread_name)
    : Thread(process, tid), m_thread_name(std::move(thread_name)),
      m_pcb_addr(pcb_addr) {}

ThreadNQCKernel::~ThreadNQCKernel() {}

void ThreadNQCKernel::RefreshStateAfterStop() {}

lldb::RegisterContextSP ThreadNQCKernel::GetRegisterContext() {
  if (!m_reg_context_sp)
    m_reg_context_sp = CreateRegisterContextForFrame(nullptr);
  return m_reg_context_sp;
}

lldb::RegisterContextSP
ThreadNQCKernel::CreateRegisterContextForFrame(StackFrame *frame) {
  RegisterContextSP reg_ctx_sp;
  uint32_t concrete_frame_idx = 0;

  if (frame)
    concrete_frame_idx = frame->GetConcreteFrameIndex();

  if (concrete_frame_idx == 0) {
    if (m_thread_reg_ctx_sp)
      return m_thread_reg_ctx_sp;

    ProcessNQCKernel *process =
        static_cast<ProcessNQCKernel *>(GetProcess().get());
    ArchSpec arch = process->GetTarget().GetArchitecture();

    switch (arch.GetMachine()) {
    case llvm::Triple::aarch64:
      m_thread_reg_ctx_sp =
          std::make_shared<RegisterContextNQCKernel_arm64>(
              *this, std::make_unique<RegisterInfoPOSIX_arm64>(arch, 0),
              m_pcb_addr);
      break;
    case llvm::Triple::x86:
      m_thread_reg_ctx_sp = std::make_shared<RegisterContextNQCKernel_i386>(
          *this, new RegisterContextNQC_i386(arch), m_pcb_addr);
      break;
    case llvm::Triple::x86_64:
      m_thread_reg_ctx_sp =
          std::make_shared<RegisterContextNQCKernel_x86_64>(
              *this, new RegisterContextNQC_x86_64(arch), m_pcb_addr);
      break;
    default:
      assert(false && "Unsupported architecture passed to ThreadNQCKernel");
      break;
    }

    reg_ctx_sp = m_thread_reg_ctx_sp;
  } else {
    reg_ctx_sp = GetUnwinder().CreateRegisterContextForFrame(frame);
  }
  return reg_ctx_sp;
}

bool ThreadNQCKernel::CalculateStopInfo() { return false; }
