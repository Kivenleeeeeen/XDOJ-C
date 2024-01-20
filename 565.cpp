#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int nub, change;
	nub = n;
	change = n;
	while (change > k)
	{
		change = change / k;
		nub += change;
		change = n - change * k + change;
		n = change;
	}
	printf("%d", nub);
	return 0;
}//只有60分，开摆