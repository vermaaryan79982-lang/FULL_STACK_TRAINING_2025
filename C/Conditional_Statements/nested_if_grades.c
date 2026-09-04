#include <stdio.h>

int main() {
    int n = 5;   // 5 students fixed
    float marks[5], total, percentage;

    for(int i = 0; i < n; i++) {
        total = 0;

        printf("\nEnter marks of 5 subjects for Student %d:\n", i+1);
        for(int j = 0; j < 5; j++) {
            printf("Subject %d: ", j+1);
            scanf("%f", &marks[j]);
            total += marks[j];
        }

        percentage = total / 5;

        // Nested if conditions
        printf("\nStudent %d Percentage: %.2f%%\n", i+1, percentage);

        if(percentage >= 60) {
            if(percentage >= 75) {
                if(percentage >= 90) {
                    printf("Grade: A+ (Excellent)\n");
                } else {
                    printf("Grade: A (Very Good)\n");
                }
            } else {
                printf("Grade: B (Good)\n");
            }
        } else {
            if(percentage >= 45) {
                printf("Grade: C (Average)\n");
            } else {
                printf("Grade: F (Fail)\n");
            }
        }
    }

    return 0;
}
