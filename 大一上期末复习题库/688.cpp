#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, s[1000], i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	int cnt = 0;
	int cnt_max = 0;
	int n_min = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (s[i] == s[j])
			{
				cnt++;
			}
		}
		if (cnt > cnt_max)
		{
			n_min = s[i];
			cnt_max = cnt;
		}
		if (cnt == cnt_max && s[i] < n_min)
		{
			n_min = s[i];
		}
		cnt = 0;
	}
	printf("%d", n_min);
	return 0;
}