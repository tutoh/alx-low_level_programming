#include <stdio.h>

int main() {
    int fib1 = 1, fib2 = 2, fib3, sum = 2;
    while (fib2 <= 4000000) {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        if (fib2 % 2 == 0) {
            sum += fib2;
        }
    }
    printf("%d\n", sum);
    return 0;
}
