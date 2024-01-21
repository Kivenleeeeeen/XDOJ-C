#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float mile;
	int time;
	scanf("%f %d", &mile, &time);
	int money;
	if (mile <= 3) 
	{
		money = 10 + (2 * time) / 5.0;
		printf("%d", money);
	}
	else if (mile > 3 && mile <= 10) 
	{
		money = 10 + 2 * (mile - 3) + (2 * time) / 5.0;
		printf("%d", money);
	}
	else 
	{
		money = 24 + (mile - 10) * 3 + 2 * (time / 5.0);
		printf("%d", money);
	}
	return 0;
}
