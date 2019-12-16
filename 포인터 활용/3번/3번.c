#include <stdio.h>

double get_average(int list[],int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += list[i];
	}

	printf("%d\n", sum);
}

int main()
{
	int score[3][3] = { { 1,2,3 }, { 5,40,13 }, { 8,5,3 } };

	for (int i = 0; i < 3; i++)
	{
		get_average(score, 3);
	}
}