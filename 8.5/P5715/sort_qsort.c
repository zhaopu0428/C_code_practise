#include <stdio.h>
#include <stdlib.h>  // qsort 函数在这个头文件里

/*
 * 比较函数：qsort 会用它来判断两个元素谁应该排在前面
 * 参数 a、b 是 const void* 类型（万能指针），需要强转成 int* 才能用
 * 返回值规则：
 *   负数 -> a 应该排在 b 前面
 *   0    -> a 和 b 相等，顺序不变
 *   正数 -> a 应该排在 b 后面
 *
 * 升序写法：*(int*)a - *(int*)b
 * 降序写法：*(int*)b - *(int*)a  （把 a 和 b 互换）
 */
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    // qsort 四个参数：
    //   a         -> 要排序的数组名（即首元素地址）
    //   3         -> 数组里有多少个元素
    //   sizeof(int) -> 每个元素占多少字节（int 通常是 4 字节）
    //   cmp       -> 比较函数的名字（告诉 qsort 怎么比较大小）
    qsort(a, 3, sizeof(int), cmp);

    printf("%d %d %d", a[0], a[1], a[2]);
    return 0;
}
