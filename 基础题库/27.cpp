#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double E,W;
	scanf("%lf", &E);
	if (E >= 0 && E <= 110) 
	{
		W = E * 0.5;
		printf("%.2lf", W);
	}
	else if (E > 110 && E <= 210) 
	{
		W = 110*0.5+(E-110) * 0.55;
		printf("%.2lf", W);
	}
	else 
	{
		W = 110*0.5+100*0.55+(E-210) * 0.7;
		printf("%.2lf", W);
	}
	return 0;
}
