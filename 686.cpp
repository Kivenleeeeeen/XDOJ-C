#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, i, x[21];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int sum[21];
	for (i = 0; i < n; i++)
	{
		int temp=0;
		while (x[i] != 0)
		{
			temp += x[i] % 10;
			x[i] = x[i] / 10;
		}
		sum[i] = temp;
	}
	int sum0=0;
	for (i = 0; i < n; i++)
	{
		sum0 += sum[i];
	}
	printf("%d", sum0%10);
	return 0;
}