#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double p(int n, double x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return (p(n - 1, x) * x * (2 * n - 1) - p(n - 2, x) * (n - 1)) / (n);
}
int main()
{
	int n;
	double x;
	scanf("%d %lf", &n, &x);
	double sum = 0.0;
	int i=0;
	for (i = 1; i <= n; i++)
	{
		sum += p(i, x);
	}
	printf("%.4lf", sum);
	return 0;
}