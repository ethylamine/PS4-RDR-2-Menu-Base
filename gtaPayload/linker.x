OUTPUT_FORMAT("elf64-x86-64", "elf64-x86-64", "elf64-x86-64")
OUTPUT_ARCH(i386:x86-64)

ENTRY(_start)

PHDRS
{
   code_seg PT_LOAD;
   data_seg PT_LOAD;
}

SECTIONS
{
	/* Code segment */
	.text : {
		*(.text.start)
		*(.text*)
	} : code_seg
	.rodata : { *(.rodata) *(.rodata*) } : code_seg

	/* Data segment */
	.data : { *(.data) } : data_seg
	.bss  : { *(.bss) }  : data_seg
}
