#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	for (i = 0; n != 1; i++)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = 3 * n + 1;
		}
	}
	printf("%d", i);
	return 0;
}