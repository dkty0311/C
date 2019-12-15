#include <stdio.h>
#include <stdlib.h>

void array_fill(int* A, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		*(A + i) = rand();
	}
}

int main()
{
	int a[5] = { 0 };

	array_fill(a, 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}