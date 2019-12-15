#include <stdio.h>

void convert(double* grades, double* scores, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		*(*(grades + i)) = (scores + i) * 100;
	}
}

int main()
{
	double grades[10] = { 00.00,00.50,01.00,01.50,02.00,02.50,03.00,03.50,04.00,04.30 };
	double score[10] = { 0 };


	convert(grades, score,sizeof(grades));
}