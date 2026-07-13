#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%7==0)
        {
            continue;
        }
        else if(i/10 == 7)
        {
            continue;
        }
        else if(i%10 == 7)
        {
            continue;
        }
        else{
            sum += i*i;
        }
    }
    printf("%d", sum);
    return 0;
}