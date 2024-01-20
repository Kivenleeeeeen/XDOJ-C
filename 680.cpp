#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	double y, x, max=0.0;
	for (x = 0.0; x <= 10.0; x += 0.0001)
	{
		y = (-x) * x * x + a * x * x;
		if (y > max)
		{
			max = y;
		}
	}
	printf("%.2lf", max);
	return 0;
}