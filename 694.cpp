#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, k;
	scanf("%d %d", &m, &k);
	int a[201];
	a[1] = 2;
	a[2] = 3;
	int i;
	for (i = 3; i <= k; i++)
	{
		a[i] = (i - 1) * (i - 1) + 3 * (i - 2) + 1;
	}
	int x = 0;
	int y = 0;
	int z = 0;
	for (i = 1; i <= k; i++)
	{
		if (a[i] % m == 0)
		{
			x++;
		}
		if (a[i] % m == 1)
		{
			y++;
		}
		if (a[i] % m > 1)
		{
			z++;
		}
	}
	printf("%d %d %d", x, y, z);
	return 0;
}