#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double d;
	scanf("%lf", &d);
	double w;
	if (d >= 0 && d <= 110)
	{
		w = d * 0.5;
	}
	else if (d > 110 && d <= 210)
	{
		w = 110 * 0.5 + (d - 110) * 0.55;
	}
	else
	{
		w = 110 * 0.5 + 100 * 0.55 + (d - 210) * 0.7;
	}
	printf("%.2lf", w);
	return 0;
}
