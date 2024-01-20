#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	char a[26] = {'a'};
	int i;
	for (i = 1; i < 26; i++)
	{
		a[i]  = a[i-1] + 1;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	for (i = 25; i >= 0; i--)
	{
		printf("%c ", a[i]);
	}
	return 0;
}
