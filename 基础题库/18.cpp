#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	char b;
	scanf("%d,%c", &a, &b);
	int sum;
	char sum0;
	sum = a + b;
	sum0 = a + b;
	printf("%d,%c", sum, sum0);
	return 0;
}
