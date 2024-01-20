#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int x[1001];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	int sum=0,avg;
	for (i = 0; i < n; i++)
	{
		sum += x[i];
	}
	avg = sum / n;
	int sumdif=0;
	for (i = 0; i < n; i++)
	{
		sumdif += (x[i] - avg) * (x[i] - avg);
	}
	int p;
	p = sumdif / n;
	printf("%d", p);
	return 0;
}