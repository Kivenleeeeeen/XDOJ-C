#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int sum = 0;
	while (a != 0)
	{
		if (a % 2 != 0)
		{
			sum += a;
		}
		scanf("%d", &a);
	}
	printf("%d", sum);
	return 0;
}
