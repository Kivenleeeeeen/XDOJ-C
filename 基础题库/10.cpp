#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int f;
	scanf("%d", &f);
	float c;
	c = (f-32.0)*5.0/9.0;
	printf("%.2f", c);
	return 0;
}
