#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, s;
	scanf("%d %d", &m, &s);
	float t;
	t = m + s / 60.0;
	float c;
	if (t >= 0 && t <= 10)
		c = 100 - 5 * t;
	else if (t > 10 && t <= 30)
		c = 50 - (t - 10);
	else if (t > 30 && t <= 50)
		c = 30 - (t - 30) / 2.0;
	else
		c = 20;
	printf("%.1f", c);
	return 0;
}