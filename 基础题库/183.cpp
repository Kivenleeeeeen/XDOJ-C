#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		int temp;
		temp = m;
		m = n;
		n = temp;
	}
	int i;
	for (i = m; i>0; i--)
	{
		if (m % i == 0 && n % i == 0)
			break;
	}
	int g;
	g = m * n / i;
	printf("%d %d", i, g);
	return 0;
}
