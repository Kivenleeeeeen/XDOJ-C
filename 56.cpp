#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int t;
	if (a * a + b * b == c * c)
	{
		int s=a*b;
		printf("%d", s);
	}
	else
	{
		printf("no");
	}
	return 0;
}