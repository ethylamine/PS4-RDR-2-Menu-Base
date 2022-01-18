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
		
	else if (fw == 672) // these patches are needed for 6.72 to work
	{
		// patch dynlib_dlsym
		*(uint8_t *)&kernel_ptr[0x1D895A] = 0xE9;
		*(uint8_t *)&kernel_ptr[0x1D895A + 1] = 0xC7;
		*(uint8_t *)&kernel_ptr[0x1D895A + 2] = 0x01;
		*(uint8_t *)&kernel_ptr[0x1D895A + 3] = 0x00;
		*(uint8_t *)&kernel_ptr[0x1D895A + 4] = 0x00;
		
		// Disable ptrace check, 6.72
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK_672] = 0xEB;
		*(uint8_t *)&kernel_ptr[0x10FD22] = 0xE9;
		*(uint8_t *)&kernel_ptr[0x10FD22 + 1] = 0xE2;
		*(uint8_t *)&kernel_ptr[0x10FD22 + 2] = 0x02;
		*(uint8_t *)&kernel_ptr[0x10FD22 + 3] = 0x00;
		*(uint8_t *)&kernel_ptr[0x10FD22 + 4] = 0x00;
		
		// disable ASLR
		*(uint8_t *)&kernel_ptr[KERN_DISABLE_ASLR_672] = 0xEB;
	}
		
		
	else if (fw == 755)
		// Disable ptrace check, 7.55
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK_755] = 0xEB;
	
	else if (fw == 900)
		// Disable ptrace check, 9.00
		*(uint8_t *)&kernel_ptr[KERN_PTRACE_CHECK_900] = 0xEB;
	
	
	// Enable write protection
	writeCr0(cr0);
}
