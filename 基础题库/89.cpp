#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float r;
	scanf("%f", &r);
	float pi = 3.14;
	float V;
	V = (4 * pi * r * r * r) / 3.0;
	printf("%.2f", V);
	return 0;
}
