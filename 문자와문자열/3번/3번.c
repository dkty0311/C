#include <stdio.h>
#include <string.h>

int main()
{
	char a[20] = { 0 };
	char b;
	int num = 0;
	printf("문자열을 입력하시오");
	scanf("%s", a);
	printf("개수를 셀 문자를 입력하시오");
	scanf(" %c",&b);

	for (int i = 0; i < 20; i++)
	{
		if(a[i] == b)
			num++;
	}

	printf("%d", num);


}