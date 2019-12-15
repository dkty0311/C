#include <stdio.h>

void arrat_print(int* A, int size)
{
	int i;
	printf("A[]={ ");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(A + i));
	}
	printf("A[]= }\n");
}

int main()
{
	int a[8] = { 1,2,3,4,5,6 };

	arrat_print(a, sizeof(a[8]));
}