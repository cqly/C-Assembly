// sortasmOri.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>

int array[10] = {2, 1, 3, 6, 3, 4, 9, 6, 5, 0};

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0, j = 0, temp = 0;
	__asm
	{
	mov         dword ptr [i],0  
	mov         dword ptr [j],0  
	mov         dword ptr [temp],0  


	mov         dword ptr [i],0  
	jmp         ToLabel1  

ToLabel7:
	mov         eax,dword ptr [i]  
	add         eax,1  
	mov         dword ptr [i],eax  

ToLabel1:
	cmp         dword ptr [i],0Ah  
	jge         ToLabel2

	mov         dword ptr [j],0  
	jmp         ToLabel3 

ToLabel6:
	mov         ecx,dword ptr [j]  
	add         ecx,1  
	mov         dword ptr [j],ecx  

ToLabel3:
	cmp         dword ptr [j],0Ah  
	jge         ToLabel5
	
	mov         edx,dword ptr [i]  
	mov         eax,dword ptr [j]  
	mov         ecx,dword ptr [array+edx*4]  
	cmp         ecx,dword ptr [array+eax*4]  
	jle         ToLabel4

	mov         edx,dword ptr [i]  
	mov         eax,dword ptr [array+edx*4]  
	mov         dword ptr [temp],eax  
			
	mov         ecx,dword ptr [i]  
	mov         edx,dword ptr [j]  
	mov         eax,dword ptr [array+edx*4]  
	mov         dword ptr [array+ecx*4],eax  
			
	mov         ecx,dword ptr [j]  
	mov         edx,dword ptr [temp]  
	mov         dword ptr [array+ecx*4],edx  

ToLabel4:
	jmp        ToLabel6 
	
ToLabel5:
	jmp         ToLabel7 

ToLabel2:
	}
	getchar();
	return 0;
}

