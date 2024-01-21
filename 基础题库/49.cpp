#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long n;
	scanf("%ld", &n);
	int m,stop=0;
	for (m = 0; m < 3163; m++)
	{
		if (n == m * m)
		{
			stop = 1;
				break;
		}
	}
	if (stop == 1)
	{
		printf("%d", m);
	}
	if (stop == 0)
	{
		printf("no");
	}
	return 0;
}
