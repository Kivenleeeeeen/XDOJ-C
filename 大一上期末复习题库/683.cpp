#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	int x[31], i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int y[31];
	for (i = 1; i < n - 1; i++)
	{
		y[i] = (x[i] + x[i - 1] + x[i + 1]) / 3;
	}
    y[0] = y[1];
	y[n - 1] = y[n - 2];
	for (i=0;i<n;i++)
	{
		printf("%d ", y[i]);
	}
	return 0;
}