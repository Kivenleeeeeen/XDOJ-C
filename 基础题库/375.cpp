#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	int d[11],i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
	}
	int cnt = 0;
	double f[11];
	for (i = 0; i < n; i++)
	{
		f[i] = d[i] * 9 / 5.0 + 32;
		printf("%.1lf ", f[i]);
		cnt++;
		if (cnt % 5 == 0)
		{
			printf("\n");
			cnt = 0;
		}
	}
	double sum = 0.0, avg;
	for (i = 0; i < n; i++)
	{
		sum += f[i];
	}
	avg = sum / n;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (f[j] > f[j + 1])
			{
				int temp;
			    temp = f[j];
			    f[j] = f[j + 1];
			    f[j + 1] = temp;
			}
		}
	}
	printf("\n%.1lf %.1lf %.1lf", f[0], f[n-1], avg);
	return 0;
}
