#include <stdio.h>

int main()
{
	struct account {
		int number;
		char name[20];
		int balance;
	};

	struct account s1 = { 1,"ȫ�浿",10000 };

	printf("{%d,%s,%d}", s1.number, s1.name, s1.balance);
}