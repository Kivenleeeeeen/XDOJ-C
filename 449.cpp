#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float t;
	scanf("%f", &t);
	float A, B;
	A = 0.6 * t;
	B = 50 + 0.4 * t;
	if (A >= B)
	{
		printf("%.2f\n%.2f\nB",A,B);
	}
	else
	{
		printf("%.2f\n%.2f\nA", A, B);
	}
	return 0;
}