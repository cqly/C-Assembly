// sortasm.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>
#include <time.h>

int array[10000];

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0, j = 0, temp = 0;
	clock_t start, end;
	double diff;

	for (int i = 0; i < 10000; i++) {
		array[i] = rand() % 100;
	}

	start = clock();

	for( i = 0; i < 10000; i++)
	{
		for( j = 0; j < 10000; j++)
		{
			if ( array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	

	
	end = clock();

	diff = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%f", diff);
	getchar();
	
	return 0;
}

