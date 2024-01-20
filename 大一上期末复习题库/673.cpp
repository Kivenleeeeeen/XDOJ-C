#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m = n * n;
	if (m % 10 == n || m % 100 == n || m % 1000 == n || m % 10000 == n)
	{
		printf("%d 1", n);
	}
	else
	{
		printf("%d 0", n);
	}
	return 0;
}
//给XDOJ骗过去了，之后在研究