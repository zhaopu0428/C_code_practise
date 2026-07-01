#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Light(int arr[][104], int a, int b);
void Stone(int arr[][104], int a, int b);
int Print(int arr[][104], int n);
int main() {
	int n = 0, m = 0, k = 0;
	int arr[104][104] = {0};
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1;i <= m;i++)
	{
		int a=0 ,b = 0;
		scanf("%d %d", &a, &b);
		Light(arr, a + 2, b + 2);
	}
	if (k != 0)
	{
		for (int i = 1;i <= k;i++)
		{
			int a = 0, b = 0;
			scanf("%d %d", &a, &b);
			Stone(arr, a + 2, b + 2);
		}
	}
	int r = Print(arr, n + 2);
	printf("%d", r);
	return 0;
}
void Light(int arr[][104], int a, int b)
{
	arr[a][b] = 1;
	arr[a - 1][b] = 1;
	arr[a - 2][b] = 1;
	arr[a + 1][b] = 1;
	arr[a + 2][b] = 1;
	arr[a][b + 1] = 1;
	arr[a][b + 2] = 1;
	arr[a][b - 1] = 1;
	arr[a][b - 2] = 1;
	arr[a - 1][b - 1] = 1;
	arr[a - 1][b + 1] = 1;
	arr[a + 1][b - 1] = 1;
	arr[a + 1][b + 1] = 1;
}
void Stone(int arr[][104], int a, int b) 
{
	for (int i = a - 2;i <= a + 2;i++)
	{
		for (int j = b - 2;j <= b + 2;j++)
		{
			arr[i][j] = 1;
		}
	}
}
int Print(int arr[][104], int n)
{
	int x = 0;
	for (int i = 3;i <= n;i++)
	{
		for (int j = 3;j <= n;j++)
		{
			if (arr[i][j] == 0)
			{
				x += 1;
			}
		}
	}
	return x;
}