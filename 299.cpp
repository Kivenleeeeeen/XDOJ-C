#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long I;
	scanf("%ld", &I);
	long w;
	if (I <= 100000)
	{
		w = I * 0.1;
	}
	else if (I > 100000 && I <= 200000)
	{
		w = 100000 * 0.1 + (I - 100000) * 0.075;
	}
	else if (I > 200000 && I <= 400000)
	{
		w = 100000 * 0.1 + 100000 * 0.075 + (I - 200000) * 0.05;
	}
	else if (I > 400000 && I <= 600000)
	{
		w = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
	}
	else if (I > 600000 && I <= 1000000)
	{
		w = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
	}
	else
	{
		w = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;
	}
	printf("%ld", w);
	return 0;
}