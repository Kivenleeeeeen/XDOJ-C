#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int r, R;
	scanf("%d %d", &r, &R);
	float m, M;
	float Pi = 3.1415926;
	m = (4.0 * 7.86 * Pi * r * r * r) / (3.0 * 8000.0);
	M = (4.0 * 19.3 * Pi * R * R * R) / (3.0 * 8000.0);
	printf("%.3f %.3f", m, M);
	return 0;
}
