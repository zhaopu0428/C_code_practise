#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1,const void *p2)
{
    int a=*(int*)p1;
    int b=*(int*)p2;
    return a-b;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,m,sizeof(a[0]),cmp);   // 第4个参数传函数名 cmp
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
