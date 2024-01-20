#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() 
{
	int m,n;
	scanf("%d %d", &m, &n);
	int i=1;
	int nub1 = 0;
	int sum1 = 0;
	while(i<m)
	{
		if (m % i == 0) 
		{
			nub1++;
			sum1 += i;
		}
		i++;
	}
	int j = 1;
	int nub2 = 0;
	int sum2 = 0;
	while(j<n)
	{
		if (n % j == 0) 
		{
			nub2++;
			sum2 += j;
		}
		j++;
	}
	if (sum1 == n && sum2 == m) 
	{
		printf("yes ");
	}
	else 
	{
		printf("no ");
	}
	printf("%d %d", nub1, nub2);

	return 0;
}