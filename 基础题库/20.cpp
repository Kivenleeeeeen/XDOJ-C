#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	if (c == '+')
	{
		printf("%d+%d=%d",a,b, a + b);		
	}
	if (c == '-')
	{
		printf("%d-%d=%d",a,b, a - b);
	}
	if (c == '*')
	{
		printf("%d*%d=%d",a,b ,a * b);
	}
	if (c == '/')
	{
		printf("%/%d=%d",a,b, a / b);
	}
	if (c == '%')
	{
		printf("%d%%d=%d",a,b, a % b);
	}
	return 0;
}
