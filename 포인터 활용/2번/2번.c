#include <stdio.h>

int get_sum(int array[], int size)
{
	int you=0;

	for (int i = 0; i < size; i++)
	{
		you += array[i];
	}
	return you;
}

int main()
{
	int array[3][5] = { { 10,10,10,10,10 }, { 10,10,10,10,10 }, { 10,10,10,10,10 }};
	int sum=0;

	for (int i = 0; i < 3; i++)
	{
		sum += get_sum(array[i], 5);
	}

	printf("%d", sum);


}