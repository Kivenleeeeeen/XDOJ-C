#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
int day, degree, number;
	scanf("%d %d %d", &day, &degree, &number);
	if (day == 6 || day == 7)
	{
		printf("%d no",number%10);
	}
	else
	{
		if (degree < 200)
		{
			printf("%d no", number % 10);
		}
		else if (degree >= 200 && degree < 400)
		{
			if (day == 1)
			{
				if (number % 10 == 1 || number % 10 == 6)
				{
					printf("%d yes", number % 10);
				}
				else
				{
					printf("%d no", number % 10);
				}
			}
			else if (day == 2)
			{
				if (number % 10 == 2 || number % 10 == 7)
				{
					printf("%d yes", number % 10);
				}
				else
				{
					printf("%d no", number % 10);
				}
			}
			else if (day == 3)
			{
				if (number % 10 == 3 || number % 10 == 8)
				{
					printf("%d yes", number % 10);
				}
				else
				{
					printf("%d no", number % 10);
				}
			}
			else if (day == 4)
			{
				if (number % 10 == 4 || number % 10 == 9)
				{
					printf("%d yes", number % 10);
				}
				else
				{
					printf("%d no", number % 10);
				}
			}
			else
			{
				if (number % 10 == 5 || number % 10 == 0)
				{
					printf("%d yes", number % 10);
				}
				else
				{
					printf("%d no", number % 10);
				}
			}
		}
		else
		{
			if (day % 2 != 0 && (number % 10) % 2 != 0)
			{
				printf("%d yes", number % 10);
			}
			else if (day % 2 == 0 && (number % 10) % 2 == 0)
			{
				printf("%d yes", number % 10);
			}
			else
			{
				printf("%d no", number % 10);
			}
		}
	}
	return 0;
}
	
