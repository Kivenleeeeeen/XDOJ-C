#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int x1, x2, x3, x4, x5, x6;
	x1 = x / 100.0;
	x2 = (x - x1 * 100) / 50.0;
	x3 = (x - x1 * 100 - x2 * 50) / 20.0;
	x4 = (x - x1 * 100 - x2 * 50 - x3 * 20) / 10.0;
	x5 = (x - x1 * 100 - x2 * 50 - x3 * 20 - x4 * 10) / 5.0;
	x6 = x - x1 * 100 - x2 * 50 - x3 * 20 - x4 * 10 - x5 * 5;
	printf("%d %d %d %d %d %d", x1, x2, x3, x4, x5, x6);
	return 0;
}
