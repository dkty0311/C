#include <stdio.h>

int main()
{
	char s[100] = { 0 };
	int a=0, b=0, c=0, d=0, e=0, f=0, g = 0,q=0,h=0;
	printf("문자열을 입력하시오");
	scanf("%s", s);

	for (int i = 0; i < 100; i++)
	{
		if (s[i] == 'a')
			a++;
		else if (s[i] == 'b')
			b++;
		else if (s[i] == 'c')
			c++;
		else if (s[i] == 'd')
			d++;
		else if (s[i] == 'e')
			e++;
		else if (s[i] == 'f')
			f++;
		else if (s[i] == 'g')
			g++;
		else if (s[i] == 'h')
			h++;
		else if (s[i] == 'i')
			q++;
			
	}
	

	printf("a:%d\n b:%d\n c:%d\n d:%d\n e:%d\n f:%d\n g:%d\n h:%d\n i:%d\n", a, b, c, d, e, f, g,h,q);
}