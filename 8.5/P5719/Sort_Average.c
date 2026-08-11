#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int x = n/k;
    int i = ((1+x)*x)/2;
    int sum_a = i*k;
    float avg = (float)(sum_a)/x;
    int sum = (n*(n+1))/2;
    int sum_b = sum - sum_a;
    float avg2 = (float)(sum_b)/(n-x);
    printf("%.1f %.1f\n",avg,avg2);
}