#include <stdio.h>

int main()
{
	struct book
	{
		int id;
		char title[100];
		char author[20];
	};

	struct book s1 = { 1,"�ٶ��� �Բ� �������","������ ��ÿ" };

	printf("%d %s %s", s1.id,s1.author,s1.title);

	
}