#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	if (m >= 90)
	{
		printf("A");
	}
	else if (m <= 89 && m >= 80)
	{
		printf("B");
	}
	else if (m <= 79 && m >= 70)
	{
		printf("C");
	}
	else if (m <= 69 && m >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}
