#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a=0, b=0, c=0;
	int i;
	int d = 0;
	for (i = 0; i < n + d; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7 || (i / 100) % 10 == 7)
		{
			d = d + 1;
			if (i % 3 == 0)c = c + 1;
			else if (i % 3 == 2)b = b + 1;
			else if (i % 3 == 1)a = a + 1;
		}
	}
	printf("%d %d %d", a, b, c-1);
	return 0;
}
