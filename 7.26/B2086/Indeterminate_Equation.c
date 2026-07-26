#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count = 0;
    for (int x = 0; x <= c / a; x++)
    {
        int remainder = c - a * x;
        if (remainder % b == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}