#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
	int p;
	scanf("%d", &p);
	int cnt = 0;
	int sum = 0;
	int n, i;
	for (n = 2; cnt < p + 10; n++) 
	{
		for (i = 2; i < n; i++) 
		{
			if (n % i == 0) break;
		}
		if (i == n) 
		{
			cnt++;
			if (cnt >= p) sum += n;
		}
	}
	printf("%d", sum);
	return 0;
}