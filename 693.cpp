#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, n, m, x[25];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	scanf("%d", &m);
	x[n] = m;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
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
	for (i = 0; i <= n; i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}