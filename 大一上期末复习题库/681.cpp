#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int x[31], i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int nub = 0;
	for (i = 0; i < n; i++)
	{
		if (x[i] == 3)
		{
			if (x[i + 1] == 5)
			{
				if (x[i + 2] == 7)
				{
					nub++;
				}
			}
		}
	}
	printf("%d", nub);
	return 0;
}