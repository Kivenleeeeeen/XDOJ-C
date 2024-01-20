#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double V;
	V = a * b * c;
	printf("%.3lf", V);
	return 0;
}