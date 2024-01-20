#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int distance(int x, int y)
{
	int dis1 = (x - 4) * (x - 4) + (y - 4) * (y - 4);
	int dis2 = (x + 4) * (x + 4) + (y + 4) * (y + 4);
	if (dis1 < dis2)
		return 1;
	else
		return 2;
}
int main()
{
	int n, i, j, a[20][2];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", distance(a[i][0], a[i][1]));
	}
	return 0;
}