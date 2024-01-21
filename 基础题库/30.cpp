#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int n, j, sum;
	for (n = a; n <= b; n++)
	{
		sum = 0;
		for (j = 1; j < n; j++)
		{
			if (n % j == 0)
				sum += j;
			
		}
        if (sum == n)
		    printf("%d\n", n);
	}
	return 0;
}
