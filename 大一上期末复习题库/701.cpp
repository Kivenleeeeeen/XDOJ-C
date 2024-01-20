#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	double x[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &x[i]);
	}
	double avg_x, sum;
	sum = 0.0;
	for (i = 0; i < n; i++)
	{
		sum += x[i];
	}
	avg_x = sum / n;
	double sum_s=0.0;
	for (i = 0; i < n; i++)
	{
		sum_s += (x[i] - avg_x) * (x[i] - avg_x);
	}
	double S;
	S = sqrt((sum_s) / (n - 1));
	int nub = 0;
	for (i = 0; i < n; i++)
	{
		if (x[i] >= (avg_x - 3 * S) && x[i] <= (avg_x + 3 * S))
		{
			nub++;
		}
	}
	printf("%.4lf %d", S, (n - nub));
	return 0;
}