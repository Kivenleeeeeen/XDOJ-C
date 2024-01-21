#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i, gcd;
	if (a == 0) gcd = b;
	if (b == 0) gcd = a;
	for (i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	printf("%d", gcd);
	return 0;
}
