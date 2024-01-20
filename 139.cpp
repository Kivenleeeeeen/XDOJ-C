#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
	char c11, c22, c33, c44, c55;
	c11 = c1 + 4;
	c22 = c2 + 4;
	c33 = c3 + 4;
	c44 = c4 + 4;
	c55 = c5 + 4;
	printf("%c%c%c%c%c", c11, c22, c33, c44, c55);
	return 0;
}