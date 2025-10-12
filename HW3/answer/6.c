#include <stdio.h>

#define N_STUDENTS 10

int main(void) {
    int ids[N_STUDENTS];
    double scores[N_STUDENTS][3];
    double avg[N_STUDENTS];
    int i;

    printf("Please enter %d students' ID and three scores (ID s1 s2 s3) one per line:\n", N_STUDENTS);
    for (i = 0; i < N_STUDENTS; ++i) {
        printf("Student %d: ", i + 1);
        if (scanf("%d %lf %lf %lf", &ids[i],
                  &scores[i][0], &scores[i][1], &scores[i][2]) != 4) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        avg[i] = (scores[i][0] + scores[i][1] + scores[i][2]) / 3.0;
    }

    int max_idx = 0, min_idx = 0;
    for (int i = 1; i < N_STUDENTS; ++i) {
        if (avg[i] > avg[max_idx]) max_idx = i;
        if (avg[i] < avg[min_idx]) min_idx = i;
    }

    printf("\nID\tAverage\n");
    for (i = 0; i < N_STUDENTS; ++i) {
        printf("%d\t%.2f\n", ids[i], avg[i]);
    }

    printf("\nHighest average: ID %d, Average %.2f\n", ids[max_idx], avg[max_idx]);
    printf("Lowest average:  ID %d, Average %.2f\n", ids[min_idx], avg[min_idx]);

    return 0;
}