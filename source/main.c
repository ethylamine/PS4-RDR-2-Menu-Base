#include "ps4.h"
#include "kern.h"
#include "proc.h"
#include "gta.h"

extern char gtaPayload[];
extern int gtaPayloadSize;

int gamePID;
int GameVersion;


void sysNotify(char* msg) {
	sceSysUtilSendSystemNotificationWithText(222, msg);
}

BOOL gameCheck() {
	procAttach(gamePID);

	u8 testBytes;
	procReadBytes(gamePID, GameCheckAddress, (void*)&testBytes, sizeof(testBytes));

	BOOL success = FALSE;
	
	if (testBytes == 0x11)
	{
		GameVersion = 0x64;
		success = FALSE;
		sysNotify("Detected Game. \nYour version 1.00");
	}
		
	else if (testBytes == 0x00)
	{
		GameVersion = 0x81;
		success = TRUE;
		sysNotify("Detected Game. \nYour version 1.29");
	}

	else
	{
		success = FALSE;
		sysNotify("Failed to detect RDR 2.");
	}

	procDetach(gamePID);
	return success;
}
BOOL setupDone() {
	procAttach(gamePID);

	BOOL allocationNeeded;
	procReadBytes(gamePID, &gtaVars->allocationNeeded, &allocationNeeded, sizeof(allocationNeeded));

	procDetach(gamePID);
	return !allocationNeeded;
}

void runSetup() {
	procAttach(gamePID);

	BOOL allocationNeeded = TRUE;
	procWriteBytes(gamePID, &gtaVars->allocationNeeded, &allocationNeeded, sizeof(allocationNeeded));

	void* null = NULL;
	procWriteBytes(gamePID, &gtaVars->executableSpace, &null, sizeof(null));
	procWriteBytes(gamePID, &gtaVars->dataSpace, &null, sizeof(null));

	int executableSize = (int)ceil((double)gtaPayloadSize / 0x4000) * 0x4000;
	procWriteBytes(gamePID, &gtaVars->allocationSize, &executableSize, sizeof(executableSize));

	procWriteBytes(gamePID, PayloadAddress, nativeHook, 0x3000);

	u8 syscallASM[] = { SyscallBytes };
	procWriteBytes(gamePID, SyscallAddress, syscallASM, sizeof(syscallASM));

	if (GameVersion == 0x81) //new for 1.29
	{
		u8 hookASM[] = { 0x48, 0x8D, 0x15, 0x48, 0x7C, 0x43, 0x05 };
		procWriteBytes(gamePID, HookAddress, hookASM, sizeof(hookASM));
	}

	/*else if (GameVersion == 0x64)
	{
		u8 hookASM[] = { HookBytes };
		procWriteBytes(gamePID, HookAddress, hookASM, sizeof(hookASM));
	}*/

	else
	{
		sysNotify("Unsupported game version detected\n. Use 1.29 patch only");
	}


	procDetach(gamePID);
}
void startExecution() {
	procAttach(gamePID);

	void* executableSpace;
	procReadBytes(gamePID, &gtaVars->executableSpace, &executableSpace, sizeof(executableSpace));

	procWriteBytes(gamePID, executableSpace, gtaPayload, gtaPayloadSize);

	procDetach(gamePID);
}

int _main(void) {
	initKernel();
	initLibc();

	jailbreak();
	disable_aslr();
	initSysUtil();
	
	fw = get_firmware();
	kernel_base = get_kernel_base();

	if (fw != 505 && fw != 755 && fw != 900) // shitty check for firmware
		return 0;

	syscall(11, patch_ptrace);


	sysNotify("Payload loaded.\nPlease launch RDR 2.");
	gamePID = findProcess("eboot.bin");

	sceKernelSleep(3);

	if (!gameCheck()) {
		return 0;
	}

	sysNotify("Setting up environment.");
	runSetup();

	while (!setupDone()) sceKernelSleep(3);

	sceKernelSleep(5);
	startExecution();
	sysNotify("Mods activated.\nOpen menu with R1 + R3. \nEnjoy!");

	return 0;
}
