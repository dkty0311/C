#include <stdio.h>

void array_copy(int* A, int* B, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(B+i) = *(A + i);
		printf("%d", *(B + i));
	}

}

int main()
{
	int A[5] = { 1,2,3 };
	int B[5] = { 0 };

	array_copy(A, B,5);

}