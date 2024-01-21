#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	double pm[105];
	for (i = 0; i < n; i++)
	{
		scanf("%lf",&pm[i]);
	}
	double sum=0;
	for (i = 0; i < n; i++)
	{
		sum=sum+pm[i];
	}
	double avg;
	avg = sum / n;
	int d1=0, d2=0, d3=0, d4=0, d5=0, d6=0;
	for (i = 0; i < n; i++)
	{
        if (pm[i] >= 0 && pm[i] <= 50) d1++;
	    else if (pm[i] >= 51 && pm[i] <= 100) d2++;
	    else if (pm[i] >= 101 && pm[i] <= 150) d3++;
	    else if (pm[i] >= 151 && pm[i] <= 200) d4++;
	    else if (pm[i] >= 201 && pm[i] <= 300) d5++;
	    else d6++;
	}
	printf("%.2lf\n%d %d %d %d %d %d", avg, d1, d2, d3, d4, d5, d6);
	return 0;
}
