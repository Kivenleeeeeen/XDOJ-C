#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char max;
	scanf("%c", &max);
	int n = max - 'A' + 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("%c", 'A' + k);
		}
		for (int l = i - 1; l >= 0; l--)
		{
			printf("%c", 'A' + l);
		}
		printf("\n");
	}
	return 0;
}
