#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n, i, j;
    int a[100], b[100], sum[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
        sum[i] = 0;
        while (a[i] >= 1) {
            sum[i] += a[i] % 10;
            a[i] /= 10;
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sum[i] > sum[j] || (sum[i] == sum[j] && b[i] > b[j])) {
                int tempSum = sum[i];
                sum[i] = sum[j];
                sum[j] = tempSum;
                int tempB = b[i];
                b[i] = b[j];
                b[j] = tempB;
            }
        }
    }
    printf("%d\n", b[n - 1]);
    return 0;
}
