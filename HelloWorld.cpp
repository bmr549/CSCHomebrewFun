#include <cstring.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
	consoleInit(NULL);
	
	printf("Hello World!");
	
	while(appletMainLoop())
	{
		hidScanInput();
		
		u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
		
		if (kDown & KEY_PLUS)
			
		consoleUpdate(NULL);
	}
	
	consoleExit(NULL);
	return 0;
}