#include "kern.h"

void patch_ptrace()
{
	uint8_t *kernel_ptr = (uint8_t*)kernel_base;
	
	// Disable write protection
	uint64_t cr0 = readCr0();
	writeCr0(cr0 & ~X86_CR0_WP);
	
	
	if (fw == 505)
		// Disable ptrace check
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK] = 0xEB;
		
	else if (fw == 672)
		// Disable ptrace check, 6.72
		*(uint64_t *)&kernel_ptr[KERN_PTRACE_CHECK_672] = 0x909090909090;
		
	else if (fw == 755)
		// Disable ptrace check, 7.55
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK_755] = 0xEB;
	
	else if (fw == 900)
		// Disable ptrace check, 9.00
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK_900] = 0xEB;
	
	
	// Enable write protection
	writeCr0(cr0);
}