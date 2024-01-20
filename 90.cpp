#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int n1, n2, n3;
	n1 = n / 100.0;
	n2 = n % 100 / 10.0;
	n3 = n % 10;
	int sum;
	sum = n1 + n2 + n3;
	printf("%d", sum);
	return 0;
}