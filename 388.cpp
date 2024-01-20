#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	int x=0;
	scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
	char c[5] = { c1,c2,c3,c4,c5 };
	for (int i = 0; i < 5; i++)
	{
		if (c[i] == 'a'||c[i] == 'A')
		{
			x++;
		}
	}
	printf("%d", x);
	return 0;
}