#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	int k = n % 10;
	int max = k, min = k;
	if (n == 0) cnt = 1;
	while (n != 0) 
	{
		k = n % 10;
		n /= 10;
		cnt++;
		if (max < k) max = k;
		if (min > k) min = k;
	}
	printf("%d %d %d", cnt, max, min);
	return 0;
}
