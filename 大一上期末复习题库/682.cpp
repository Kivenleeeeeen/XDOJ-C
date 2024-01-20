#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m;
	m = pow(2, (int)n) - 1;
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i < n)
	{
		printf("%d 0", m);
	}
	else
	{
		printf("%d 1", m);
	}
	return 0;
}