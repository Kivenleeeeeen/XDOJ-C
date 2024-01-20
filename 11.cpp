#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum, difference, product, quotient;
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a / b;
	printf("%d %d %d %d", sum, difference, product, quotient);
	return 0;
}