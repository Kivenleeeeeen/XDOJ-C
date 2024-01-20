#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int x[4];
	x[0] = (a + b) * (a + b);
	x[1] = (a - b) * (a - b);
	x[2] = a * a + b * b;
	x[3] = a * a - b * b;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			int temp;
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	printf("%d %d", x[3], x[0]);
	return 0;
}