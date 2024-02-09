#include <stdio.h>

long exchange(long *xp, long y) {
    long x = *xp;
    *xp = y;
    return x;
}

int main() {
    long a = 2;
    long b = 7;
    long result = exchange(&a, b);
    printf("\n\nAfter exchange, a=%ld, result=%ld\n", a, result);
    return 0;
}
