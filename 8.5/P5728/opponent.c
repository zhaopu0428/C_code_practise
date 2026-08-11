#include <stdio.h>
#include <stdlib.h>  // abs  绝对值
#include <math.h>    // fabs  浮点数绝对值
int main()
{
    int a[1001][3];
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (abs(a[i][0] - a[j][0]) <= 5 && abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs((a[i][0]+a[i][1]+a[i][2]) - (a[j][0]+a[j][1]+a[j][2])) <= 10)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}