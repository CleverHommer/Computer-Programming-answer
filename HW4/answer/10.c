#include <stdio.h>

#define N 5   // number of students

// Define the structure to store student information
struct Student {
    char name[20];
    float score1;
    float score2;
};

int main() {
    struct Student stu[N];
    int i;
    float sum1 = 0, sum2 = 0;
    float max_total = 0;
    int max_index = 0;

    // Input student data
    printf("Please enter the name and two course scores for 5 students:\n");
    printf("Format: name score1 score2\n");

    for(i = 0; i < N; i++) {
        scanf("%s %f %f", stu[i].name, &stu[i].score1, &stu[i].score2);
        sum1 += stu[i].score1;
        sum2 += stu[i].score2;

        float total = stu[i].score1 + stu[i].score2;
        if(total > max_total) {
            max_total = total;
            max_index = i;
        }
    }

    // Calculate average scores
    float avg1 = sum1 / N;
    float avg2 = sum2 / N;

    // Output results
    printf("\nAverage score of course 1: %.2f\n", avg1);
    printf("Average score of course 2: %.2f\n", avg2);

    printf("\nStudent with the highest total score:\n");
    printf("Name: %s\n", stu[max_index].name);
    printf("Course 1 score: %.2f\n", stu[max_index].score1);
    printf("Course 2 score: %.2f\n", stu[max_index].score2);
    printf("Total score: %.2f\n", max_total);

    return 0;
}
