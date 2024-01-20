#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	int a[1001];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int j=1;
	for (i=0;i<n-1;i++)
	{
		if (a[i] != a[i + 1])
		{
			j ++;
		}
	}
	printf("%d", j);
	return 0;
}