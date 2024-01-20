#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	int a[100];
	int i;
	int M = m - 1;
	for (i = 0; i < 100; i++)
	{
		a[i] = 3 * i * i + 2 * i + 1;
	}
	int sum_even = 0;
	int sum_odd = 0;
	for (i = 0; m != 0; i++)
	{
		if (a[i] > 100 && a[i] % 2 == 0)
		{
			sum_even += a[i];
			m--;
		}
	}
	for (i = 0; M != 0; i++)
	{
		if (a[i] > 100 && a[i] % 2 == 1)
		{
			sum_odd += a[i];
			M--;
		}
	}
	printf("%d %d", sum_even, sum_odd);
	return 0;
}