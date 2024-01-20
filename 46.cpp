#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    int sales[1001];

    for (int i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    for (int i = 1; i < n - 1; i++) {
        if ((sales[i] > sales[i - 1] && sales[i] > sales[i + 1]) ||
            (sales[i] < sales[i - 1] && sales[i] < sales[i + 1])) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
