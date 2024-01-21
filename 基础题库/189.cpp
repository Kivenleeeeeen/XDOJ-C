#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	double s=100.0, h=50.0;
	int i;
	for (i = 1; i < n; i++)
	{
		s = s + h * 2.0;
		h = h / 2.0;
	}
	printf("s=%.3lf h=%.3lf", s, h);
	return 0;
}
