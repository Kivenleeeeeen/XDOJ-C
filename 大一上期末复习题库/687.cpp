#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int x[51], i;
	for (i = 0; i < n; i++)
	{
		scanf(" %d", &x[i]);
	}
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += x[i];
	}
	int max = x[0];
	int max_sp = 1;
	int min = x[0];
	int min_sp = 1;
	for (i = 0; i < n; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
			max_sp = i + 1;
		}
		if (x[i] < min)
		{
			min = x[i];
			min_sp = i + 1;
		}
	}
	printf("%d %d %d %d %d", sum, max, max_sp, min, min_sp);
	return 0;
}