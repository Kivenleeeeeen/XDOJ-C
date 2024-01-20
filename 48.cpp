#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n, q, r;
	scanf("%d %d %d %d", &m, &n, &q, &r);
	int q0, r0;
	q0 = m / n;
	r0 = m % n;
	if (q == m / n && r == m % n)
	{
		printf("yes");
	}
	else
	{
		printf("%d %d", q0, r0);
	}
	return 0;
}