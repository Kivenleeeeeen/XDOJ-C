#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, i, a[1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if ((a[i] * a[i]) % 10 == a[i] || (a[i] * a[i]) % 100 == a[i] || (a[i] * a[i]) % 1000 == a[i])
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("No");
		}
	}
	return 0;
}//格式错误我也不知道哪错了，就这样吧...