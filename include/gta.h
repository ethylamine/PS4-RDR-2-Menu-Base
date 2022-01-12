#pragma once

#include "type.h"

// Same for all regions
//#define PayloadAddress (void*)0x66A6BE0 //new
#define PayloadAddress (void*)0x75FCA80
// 1.29 patch = 0x75FCA80 good for US & EU
//#define GTAVarsAddress (void*)0x74580FE // new
#define GTAVarsAddress (void*)0x8387E2E
// 1.29 patch = 0x8387E2E good for US & EU


//#define SyscallAddress (void*)0x537B964 // unused code within .text
#define SyscallAddress (void*)0x6270664
// 1.29 patch = 0x6270664 good for US & EU
#define SyscallBytes 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF7, 0x48, 0x89, 0xD6, 0x48, 0x89, 0xCA, 0x4D, 0x89, 0xC2, 0x4D, 0x89, 0xC8, 0x4C, 0x8B, 0x4C, 0x24, 0x08, 0x0F, 0x05, 0xC3 //stays the same
/*
mov rax, rdi
mov rdi, rsi
mov rsi, rdx
mov rdx, rcx
mov r10, r8
mov r8, r9
mov r9, [rsp+0x8]
syscall
ret
*/

// Location not important, this is a random place in the EBOOT to detect region and version
#define GameCheckAddress (void*)0x5E57A4 // new

// GET_CLOCK_DAY_OF_MONTH
//#define HookAddress (void*)0x2129DFB // new
#define HookAddress (void*)0x21C4E31
// 1.29 patch = 0x21C4E31 good for US & EU

#define HookBytes 0x48, 0x8D, 0x15, 0xDE, 0xCD, 0x57, 0x04 // 1.00 version
// 1.29 patch = 48 8D 15 48 7C 43 05

/*
lea rdx, [rip+0x457CDDE]
1.29 = lea rdx, [rip+0x5437C48]
*/

struct _gtaVars {
	BOOL allocationNeeded;
	int allocationSize;
	void* executableSpace;
	void* dataSpace;
};
static struct _gtaVars *gtaVars = (struct _gtaVars*)GTAVarsAddress;

extern BOOL nativeHook();