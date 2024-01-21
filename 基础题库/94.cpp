#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, a[4];
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}
	int j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3-i; j++)
		{
			int temp;
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j+1] = temp;
			}
		}
	}
	for (j = 0; j < 4; j++)
	{
		printf("%d ", a[j]);
	}
	return 0;
}
