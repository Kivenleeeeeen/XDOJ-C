#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	float x;
	x = (a+b+c)/ 3.0;
	printf("%.2f", x);
	return 0;
}
