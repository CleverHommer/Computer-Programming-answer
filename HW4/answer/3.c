#include <stdio.h>

int main() {
    char *namesA[3] = {"A", "B", "C"};
    char *namesX[3] = {"X", "Y", "Z"};
    int i, j, k;
    int count = 0;

    // i for A's opponent, j for B's opponent, k for C's opponent
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            if (j == i) continue;
            for (k = 0; k < 3; ++k) {
                if (k == i || k == j) continue;

                // Constraints:
                // A does not play X  -> A_opponent != X (index 0)
                // C does not play X or Z -> C_opponent != X (0) and != Z (2)
                if (i == 0) continue;            // A vs X forbidden
                if (k == 0 || k == 2) continue; // C vs X or Z forbidden

                // valid matching
                printf("Match set %d:\n", ++count);
                printf("A vs %s\n", namesX[i]);
                printf("B vs %s\n", namesX[j]);
                printf("C vs %s\n\n", namesX[k]);
            }
        }
    }

    if (count == 0) {
        printf("No valid matching found with the given statements.\n");
    }

    return 0;
}