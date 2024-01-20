#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int x1, x2, x3, x4, x5;
	x1 = x / 10000.0;
	x2 = x % 10000 / 1000.0;
	x3 = x % 1000 / 100.0;
	x4 = x % 100 / 10.0;
	x5 = x % 10;
	printf("%d %d %d %d %d", x1, x2, x3, x4, x5);
	return 0;
}