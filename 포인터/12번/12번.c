#include <stdio.h>

void get_int(int* px, int* py)
{
	printf("������ ����: %u", *px + *py);
}

int main()
{
	int a, b;

	printf("2���� ������ �Է��Ͻÿ�");
	scanf_s("%d %d", &a, &b);

	get_int(a, b);
}