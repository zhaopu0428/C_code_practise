#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    double a[3][2];              // 坐标可能是小数，用 double
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf %lf", &a[i][0], &a[i][1]);  // %lf 读 double
    }
    double x = distance(a[0][0], a[0][1], a[1][0], a[1][1]);
    double y = distance(a[0][0], a[0][1], a[2][0], a[2][1]);
    double z = distance(a[1][0], a[1][1], a[2][0], a[2][1]);
    double sum = x + y + z;
    printf("%.2f", sum);
    return 0;
}
