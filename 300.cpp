#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long m;
	scanf("%ld", &m);
	int p=1;
	if (m < 10)
	{
		printf("1");
	}
	else
	{
		while (m > 10)
		{
			m /= 10;
			p++;
		}
		printf("%d", p);
	}
	return 0;
}