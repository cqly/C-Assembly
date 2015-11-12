// sortasm.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>

int array[10] = {2, 1, 3, 6, 3, 4, 9, 6, 5, 0};

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0, j = 0, temp = 0;

	for( i = 0; i < 10; i++)
	{
		for( j = 0; j < 10; j++)
		{
			if ( array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	getchar();
	return 0;
}

