#include <stdio.h>

int main() {
    int fib1 = 1, fib2 = 2, fib3;
    printf("%d, %d", fib1, fib2);
    for (int i = 2; i < 98; i++) {
        fib3 = fib1 + fib2;
        printf(", %d", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    printf("\n");
    return 0;
}
