#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int root(int n)
{
    int sum;
    sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = root(n);
    while (sum >= 10)
    {
        sum = root(sum);
    }
    printf("%d", sum);
    return 0;
}

