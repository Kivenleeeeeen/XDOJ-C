#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float r, n;
	scanf("%f %f", &r, &n);
	float x;
	x = 1 + r;
	float p;
	p = pow(x, n);
	printf("%.2f", p);
	return 0;
}
