#include <stdio.h>
#include <string.h>

int main()
{
	char a[20] = { 0 };
	char b;
	int num = 0;
	printf("���ڿ��� �Է��Ͻÿ�");
	scanf("%s", a);
	printf("������ �� ���ڸ� �Է��Ͻÿ�");
	scanf(" %c",&b);

	for (int i = 0; i < 20; i++)
	{
		if(a[i] == b)
			num++;
	}

	printf("%d", num);


}