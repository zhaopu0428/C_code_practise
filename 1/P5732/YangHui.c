#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[21][21] = {0};
	int n = 1;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) 
	{
		arr[i][1] = 1;
		arr[i][i] = 1;
		for (int j = 2;j < i;j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}