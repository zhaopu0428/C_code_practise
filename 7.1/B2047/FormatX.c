#include <stdio.h>

void f1(double x);
void f2(double x);
void f3(double x);

int main()
{
    double x;
    scanf("%lf", &x);
    if (x < 5)
        f1(x);
    else if (x < 10)
        f2(x);
    else
        f3(x);
    return 0;
}

void f1(double x)
{
    double y = -x + 2.5;
    printf("%.3f\n", y);
}

void f2(double x)
{
    double y = 2 - 1.5 * (x - 3) * (x - 3);
    printf("%.3f\n", y);
}

void f3(double x)
{
    double y = x / 2 - 1.5;
    printf("%.3f\n", y);
}