#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int a[100] = {0};
    int length = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i != length - 2)
        {
            int num1 = str[i];
            int num2 = str[i + 1];
            int sum = num1 + num2;
            a[i] = sum;
        }
        else
        {
            int num1 = str[i];
            int num2 = str[0];
            int sum = num1 + num2;
            a[i] = sum;
        }
    }
    for (int i = 0; i<length; i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}