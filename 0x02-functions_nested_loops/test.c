#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 50;

    for (int i = 1; i <= n; i++) {
        printf("%llu", fibonacci(i));
        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
