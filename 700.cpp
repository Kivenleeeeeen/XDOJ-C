#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum_odd = 0;
	int sum_even = 0;
	int nub_odd = 0;
	int nub_even = 0;
	if (n % 2 == 0)
	{
		nub_odd = n / 2;
		nub_even = n / 2;
		sum_odd = ((1 + (n - 1)) * nub_odd) / 2;
		sum_even = ((2 + n) * nub_even) / 2;
	}
	else
	{
		nub_odd = (n + 1) / 2;
		nub_even = (n - 1) / 2;
		sum_odd = ((1 + n) * nub_odd) / 2;
		sum_even = ((2 + (n - 1)) * nub_even) / 2;
	}
	printf("%d %d", sum_odd, sum_even);
	return 0;
}