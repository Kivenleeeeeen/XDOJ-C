#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int lcm(int a, int b)
{
	int m;
	m = a > b ? a : b;
	while (1)
	{
		if (m % a == 0 && m % b == 0)
		{
			break;
		}
		else
		{
			m++;
		}
	}
	return m;
}
int main()
{
	int n, i, x[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int sum = 0;
	for (i = 0; i < n - 1; i++)
	{
		sum += lcm(x[i], x[i + 1]);
	}
	printf("%d", sum);
	return 0;
}