#include <stdio.h>
#include <string.h>

void Split(char* arr);


int main(void)
{
    char a[20] = { 0 };

    printf("문자열 입력");
    scanf_s("%s", a,20);
    Split(a);

    return 0;
}

void Split(char* arr)
{
    char* tk;
    tk = strtok(arr, " ");

    while (tk != NULL)
    {
        printf("%s", tk);
        tk = strtok(NULL, " ");
    }
}