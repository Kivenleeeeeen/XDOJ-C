#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, a[31];
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			a[i] = n * (n - 1) + 1 + j * 2;
		    printf("%d ", a[i]);
		}
		break;
	}
	return 0;
}