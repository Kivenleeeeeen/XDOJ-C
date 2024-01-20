#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	scanf("%c|%c|%c|%c|%c", &c1, &c2, &c3, &c4, &c5);
	char x1, x2, x3, x4, x5;
	x1 = c1 + 32.0;
	x2 = c2 + 32.0;
	x3 = c3 + 32.0;
	x4 = c4 + 32.0;
	x5 = c5 + 32.0;
	printf("%c%c%c%c%c!", x1, x2, x3, x4, x5);
	return 0;
}