#include <stdio.h>

void get_int(int* px, int* py)
{
	printf("정수의 합은: %u", *px + *py);
}

int main()
{
	int a, b;

	printf("2개의 정수를 입력하시오");
	scanf_s("%d %d", &a, &b);

	get_int(a, b);
}