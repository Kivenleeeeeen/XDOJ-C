#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i;
	int sum_odd = 0;
	int sum_even = 0;
	int sum_dif = 0;
	for (i = n; i <= n * n; i++)
	{
		if (i % 2 == 1)
			sum_odd++;
		else
			sum_even++;
		if (i % 4 == 0 && i % 3 != 0)
			sum_dif++;
	}
	printf("%d %d %d\n", sum_odd, sum_even, sum_dif);
	int a = sum_odd + sum_even;
	int b = sum_odd + sum_dif;
	int c = sum_even + sum_dif;
	int d;
	if (a > b)
		d = a;
	else
		d = b;
	int max;
	if (c > d)
		max = c;
	else
		max = d;
	printf("%d", max);
	return 0;
}