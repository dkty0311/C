#include <stdio.h>
void get(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int s, d;
	get(100, 200, &s, &d);

	printf("���ҵ��� ��:%d\n���ҵ��� ��:%d",s,d);
}


void get(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;

	*p_diff = x - y;
}