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
	int i;
	for (i = b;; i++)
	{
		if (i % a == 0 && i % b == 0)break;
	}
	printf("%d", i);
	return 0;
}