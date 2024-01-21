#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x >= 0)
	{
		y = pow(x, 1 / 2.0);
	}
	else
	{
		y = pow(x + 1, 2) + x * 2 + 1 / x;
	}
	printf("%.2lf", y);
	return 0;
}
