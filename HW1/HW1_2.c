#include <stdio.h>
#include <limits.h>

int main() {
    printf("Testing int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Testing long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Testing short: %hd to %hd\n", SHRT_MIN, SHRT_MAX);

    int i = INT_MAX;
    printf("Overflow of int: %d\n", i + 1);

    long l = LONG_MAX;
    printf("Overflow of long: %ld\n", l + 1);

    short s = SHRT_MAX;
    printf("Overflow of short: %hd\n", s + 1);

    return 0;
}
