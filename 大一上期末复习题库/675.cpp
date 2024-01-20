#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	int x[31], i;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &x[i]);
	}
	int nub = 0;
	for (i = 0; i < n-2; i++)
	{
		if (x[i] + x[i + 1] > x[i + 2] && x[i] + x[i + 2] > x[i + 1] && x[i + 1] + x[i + 2] > x[i])
		{
			nub++;
		}
	}
	printf("%d", nub);
	return 0;
}