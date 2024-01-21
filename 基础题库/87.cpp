#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int sum = 0;
	int cnt = 0;
	while (a != 0) 
	{
		if (a == 1) 
		{
			sum += 1;
			cnt = 0;
		}
		if (a == 2) 
		{
			cnt += 1;
			sum += 2 * cnt;
		}
		scanf("%d", &a);
	}
	printf("%d", sum);
}
