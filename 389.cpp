#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int cnt=0,sum=0;
	int n, i;
	for (n = 2;cnt<=b; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)break;
		}
		if (i == n)
		{
			cnt++;
			if (cnt >= a && cnt <= b)
			{
				sum += n;
			}
		}
	}
	printf("%d", sum);
	return 0;
}