#include <stdio.h>

int main()
{
	char c;
	
	printf("문자를 입력하시오");
	scanf_s(" %c", &c);

	printf("아스키 코드값: %d", c);
}