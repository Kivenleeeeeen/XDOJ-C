#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	int min = A < B ? A : B;
	int max = A > B ? A : B;
	int i;
	int c3 = 0;
	int c4 = 0;
	int c5 = 0;
	for (i = min; i <= max; i++)
	{
		if (i % 3 == 0)
			c3++;
		if (i % 4 == 0)
			c4++;
		if (i % 5 == 0 && i % 2 != 0)
			c5++;
	}

	int a = c3 % c4;
	int b = c3 % c5;
	int c = c4 % c5;
	int d = c4 % c3;
	int e = c5 % c3;
	int f = c5 % c4;
	int x = a > b ? a : b;
	int y = c > d ? c : d;
	int z = e > f ? e : f;
	int u = x > y ? x : y;
	int MAX = z > u ? z : u;
	printf("%d %d %d\n%d", c3, c4, c5, MAX);
	return 0;
}