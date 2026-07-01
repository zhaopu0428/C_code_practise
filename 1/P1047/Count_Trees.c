#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int countTree(int arr[], int l);
void RemoveTree(int arr[], int a, int b);
void addTree(int arr[], int l);
int main()
{
    int l = 0, m = 0;
    int a = scanf("%d %d", &l, &m);
    int arr[10001] = { 0 };
    addTree(arr, l);
    int u = 0, v = 0;
    for (int i = 1;i <= m; i++) {
        int b = scanf("%d %d", &u, &v);
        RemoveTree(arr, u, v);
    }
    int r = countTree(arr, l);
    printf("%d", r);
    return 0;
}
void addTree(int  arr[], int l)
{
    for (int i = 0; i <= l;i++) {
        arr[i] = 1;
    }
}
void RemoveTree(int arr[], int a, int b)
{
    for (int i = a;i <= b;i++)
    {
        arr[i] = 0;
    }
}
int countTree(int arr[], int l)
{
    int r = 0;
    for (int i = 0;i <= l;i++) {
        if (arr[i] == 1) {
            r++;
        }
    }
    return r;
}