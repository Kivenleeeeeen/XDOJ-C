#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float p;
	p = (a + b + c) / 2.0;
	float S;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2f", S);
	return 0;
}