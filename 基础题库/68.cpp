#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y, d;
	scanf("%d %d", &y, &d);
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		days[1] = 29;
	}
	int m=0;
	while (d > days[m])
	{
		d -= days[m];
		m++;
	}
	printf("%d %d", m + 1, d);
	return 0;
}
