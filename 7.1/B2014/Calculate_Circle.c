#include <stdio.h>
double calculate(double r)
{
    double d = 0.0, c = 0.0, s =0.0;
    d = 2 * r;
    c = 3.14159 * d;
    s = 3.14159 * r * r;
    printf("%.4f %.4f %.4f", d, c, s);
    return 0;
}
int main()
{
    double r;
    scanf("%lf", &r);
    calculate(r);
    return 0;
}
