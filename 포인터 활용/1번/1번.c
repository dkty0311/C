#include <stdio.h>
void set_proverb(char** q, int n);

int main()
{
	int a;

	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�?");
	scanf_s("%d", &a);

	set_proverb(a, a);
}

void set_proverb(char** q, int n)
{
	static char* array[10] = { "a","b","c","d","e","f","g","h","i","z" };
}