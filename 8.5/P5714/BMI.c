#include <stdio.h>
int main()
{
    double weight,height;
    scanf("%lf %lf",&weight,&height);
    double BMI=weight/height/height;
    if(BMI<18.5)
    {
        printf("Underweight");
    }
    else if(BMI<24)
    {
        printf("Normal");
    }
    /*那用 C 的话，对应 cout 默认精度的格式是 %g。
    %g 默认就是 6 位有效数字，自动在 %f 和 %e 之间切换，
    且去掉尾随零，行为和 cout 默认精度几乎一致。*/
    else
    {
        printf("%g\n",BMI);
        printf("Overweight");
    }
    return 0;
}