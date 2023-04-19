#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int num = 500; num < 600; num++) {
        if (num / 100 == 5 && is_prime(num)) {
            printf("%d\n", num);
        }
    }
    return 0;
}
