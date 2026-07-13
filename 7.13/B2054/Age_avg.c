#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += (float)a;
    }
    printf("%.2f", sum / n);
    return 0;
}