/*
 * This file is in the public domain.
 */
/* $NQC$ */

#ifndef _MACHINE_STACK_H_
#define	_MACHINE_STACK_H_

#include <x86/stack.h>

#ifdef _SYS_PROC_H_

/* Get the current kernel thread stack usage. */
#define GET_STACK_USAGE(total, used) do {				\
	struct thread	*td = curthread;				\
	(total) = (vm_offset_t)get_pcb_td(td) - td->td_kstack;		\
	(used) = (vm_offset_t)get_pcb_td(td) - (vm_offset_t)&td;	\
} while (0)

static __inline bool
kstack_contains(struct thread *td, vm_offset_t va, size_t len)
{
	return (va >= td->td_kstack && va + len >= va &&
	    va + len <= (vm_offset_t)get_pcb_td(td));
}

#endif	/* _SYS_PROC_H_ */

#endif
