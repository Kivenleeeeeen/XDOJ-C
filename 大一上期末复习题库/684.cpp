#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x1, r;
	scanf("%lf %lf", &x1, &r);
	int i = 0;
	int flag = 0;
	double x[1001];
	x[0] = x1;
	for (i = 1; i < 1000; i++)
	{
		x[i] = r * x[i - 1] * (1 - x[i - 1]);
		if (fabs(x[i] - x[i - 1]) < 0.00001)	
		{
			flag = 0;
			printf("%.4lf 1", x[i]);
			break;
		}
		else
			flag = 1;
	}
	if (flag == 1)
		printf("%.4lf 0", x[999]);
	return 0;
}