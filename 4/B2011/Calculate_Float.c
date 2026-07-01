#include <stdio.h>
double calculate(double a, double b)
{
    double x;
    x = a / b;
    return x;
}
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.9f", calculate(a, b));
    return 0;
}
