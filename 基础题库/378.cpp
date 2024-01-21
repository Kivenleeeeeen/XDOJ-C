#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a[20], i;
	scanf("%d", &n);
	if (n % 2 != 0)
	{
		printf("-1");
	}
	else
	{
		for (i = 19; i >= 1; i--)
	    {
		    if (n >= pow(2, i))
		    {
			    printf("%.0f ", pow(2, i));
			    n = n - pow(2, i);
		    }
		    if (n == 0)break;
	    }
	}
	return 0;
}
