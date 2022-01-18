#pragma once

#include "type.h"
#include "ps4.h"


#define KERN_PTRACE_CHECK 0x30D9AA // default is 5.05
#define KERN_PTRACE_CHECK_672 0x10F879
//#define KERN_PTRACE_CHECK_702
#define KERN_PTRACE_CHECK_755 0x361CF5
//#define KERN_PTRACE_CHECK_852
#define KERN_PTRACE_CHECK_900 0x41F4E5

#define KERN_DISABLE_ASLR_672 0x3CECE1

#define X86_CR0_WP (1 << 16)
uint64_t kernel_base;
u16 fw;


struct kernel_payload_args
{
  void* syscall_handler;
  uint64_t user_arg;
};

extern void patch_ptrace(void);
