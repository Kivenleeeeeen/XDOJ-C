#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float d, p, r;
	scanf("%f %f %f", &d, &p, &r);
	float m;
	m = log(p / (p - d * r)) / log(1 + r);
	printf("%.2f", m);
	return 0;
}
