#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	double pi4 = 0;
	double j = 1.0;
	double i;
	for (i = 0.0; fabs(j * 1.0 / (2.0 * i + 1.0)) >= 1e-6; i++)
	{
		pi4 += j * 1.0 / (2.0 * i + 1.0);
		j = -j;
	}
	printf("%.*lf", n, 4.0 * pi4);
	return 0;
}
