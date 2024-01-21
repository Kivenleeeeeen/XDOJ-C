#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	int i, x[101];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	float sum=0.0;
	for (i = 0; i < n; i++)
	{
		sum+=x[i];
	}
	float avg;
	avg = sum / n;
	printf("%.2f", avg);
	return 0;
}
