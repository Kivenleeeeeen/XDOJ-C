#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	scanf("%lf", &a);
	double x0 = a / 2.0;
	double x1 = 0.5 * (x0 + a / x0);
	while (fabs(x0 - x1)  > pow(10, -5))
	{
		x0 = x1;
		x1 = 0.5 * (x0 + a / x0);
	}
	printf("%.5lf", x1);
	return 0;
}
