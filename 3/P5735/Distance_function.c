#include <stdio.h>
#include <math.h>

// 定义点结构体
typedef struct {
    double x;
    double y;
} Point;

// 计算两点之间距离
double getDistance(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2, p3;
    // 输入三个点坐标
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    scanf("%lf %lf", &p3.x, &p3.y);

    // 计算三条边长
    double d1 = getDistance(p1, p2);
    double d2 = getDistance(p2, p3);
    double d3 = getDistance(p3, p1);

    // 周长求和
    double perimeter = d1 + d2 + d3;
    // 保留两位小数输出
    printf("%.2f\n", perimeter);

    return 0;
}