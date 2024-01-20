#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long S;
	scanf("%ld", &S);
	long A;
	A = S - 3500;
	long tax;
	if (A < 0)
	{
		tax = 0;
	}
	else if (A > 0 && A <= 1500)
	{
		tax = A * 0.03;
	}
	else if (A > 1500 && A <= 4500)
	{
		tax = 1500 * 0.03 + (A - 1500) * 0.1;
	}
	else if (A > 4500 && A <= 9000)
	{
		tax = 1500 * 0.03 + 3000 * 0.1+(A-4500)*0.2;
	}
	else if (A > 9000 && A <= 35000)
	{
		tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + (A - 9000) * 0.25;
	}
	else
	{
		tax = 1500 * 0.03 + 3000 * 0.1 + 4500 * 0.2 + 26000 * 0.25 + (A - 35000) * 0.3;
	}
	long T;
	T = S - tax;
	printf("%ld", T);
	return 0;
}