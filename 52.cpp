#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	if (n >= 97 && n <= 122)
	{
		printf("%c", n - 32);
	}
	else
	{
		printf("%c", n);
	}
	return 0;
}