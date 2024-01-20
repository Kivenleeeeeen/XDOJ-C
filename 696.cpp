#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, i, x[25];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int y[25];
	for (i = 0; i < n; i++)
	{
		y[i] = x[i];
	}
	int z[25];
	for (i = 0; i < n; i++)
	{
		z[i] = x[i];
	}
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			int temp;
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (x[0] == y[i])
		{
			int temp;
			temp = z[0];
			z[0] = x[0];
			z[i] = temp;
			break;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (x[n - 1] == z[i])
		{
			int tmp;
			tmp = z[n - 1];
			z[n - 1] = x[n - 1];
			z[i] = tmp;
			break;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", z[i]);
	}
	return 0;
}