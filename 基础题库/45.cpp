#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

int main() 
{
	int day;
	scanf("%d\n", &day);
	int i,c[32];
	for (i = 0; i < day; i++) 
	{
		scanf("%d", &c[i]);
	}
	int dif = 0;
	for (i = 0; i < day - 1; i++) 
	{
		if (dif < abs(c[i + 1] - c[i]))
		{
           dif = abs(c[i + 1] - c[i]);
		}
	}
	printf("%d", dif);
	return 0;
}
