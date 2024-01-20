#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float s;
	int t;
	scanf("%f %d", &s, &t);
	float w;
	if (s <= 3)
	{
		w = 10+(t/5)*2;
	}
	else if (s > 3 && s <= 10)
	{
		w = 10 + (s - 3) * 2+ (t / 5) * 2;
	}
	else
	{
		w = 24 + (s - 10) * 3+ (t / 5) * 2;
	}
	printf("%.1f", w);
	return 0;
}