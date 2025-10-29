#include <stdio.h>

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n,i;
    int tmp;

    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);

    if (n == 0) {
        printf("error\n");
        return 1;
    }
    else {
        if (n < 1 || n > MAX) {
            printf("Invalid size.\n");
            return 1;
        }
        printf("Enter %d integer elements (separated by spaces or newlines):\n", n);
        for (i = 0; i < n; ++i) {
            if (scanf("%d", &arr[i]) != 1) return 1;
        }
    }

    printf("\nOriginal array (index : value):\n");
    for (i = 0; i < n; ++i) {
        printf("%d : %d\n", i, arr[i]);
    }

    // reverse in-place
    for (i = 0; i < n / 2; ++i) {
        tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }

    printf("\nReversed array (index : value):\n");
    for (i = 0; i < n; ++i) {
        printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}