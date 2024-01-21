#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int i;
	double j = 1.0;
	double sum=0.0;
	double a[1000];
	for (i = 0; i < N; i++)
	{
		a[i] = j * (i+1) / (2.0*i+1);
		sum += a[i];
		j = -j;
	}
	printf("%.3lf", sum);
	return 0;
}
