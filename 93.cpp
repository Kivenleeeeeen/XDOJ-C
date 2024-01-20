#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	long m, n;
	scanf("%ld %ld", &m, &n);
	if (m > n)
	{
		printf("%ld %ld", m % 10, n * n);
	}
	else
	{
		printf("%ld %ld\n", n % 10, m * m);
	}
	return 0;
}