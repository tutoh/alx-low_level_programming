#include "main.h"
#include <stdio.h>

void print_times_table(int n) {
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}
