#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int fac(int x)
{
	if (x > 0)
		return x * fac(x - 1);
	else
		return 1;
}
int main()
{
	int n;
	double x;
	scanf("%d %lf", &n, &x);
	double ret = 0.0;
	int i;
	int s = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret + pow(x, 2 * i - 1) / fac(2 * i - 1) * s;
		s = -s;
	}
	printf("%.4lf", ret);
	return 0;
}