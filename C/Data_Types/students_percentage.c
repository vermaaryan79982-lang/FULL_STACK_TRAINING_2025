#include <stdio.h>

int main() {
    int n = 5;   // fixed 5 students
    float marks[5][5], total[5], percentage[5];

    // Input marks of 5 subjects for each student
    for(int i = 0; i < n; i++) {
        total[i] = 0;
        printf("\nEnter marks of 5 subjects for Student %d:\n", i+1);
        for(int j = 0; j < 5; j++) {
            printf("Subject %d: ", j+1);
            scanf("%f", &marks[i][j]);
            total[i] += marks[i][j];
        }
        percentage[i] = total[i] / 5;
    }

    // Output
    printf("\n--- Students Percentage ---\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d: Total = %.2f, Percentage = %.2f%%\n", i+1, total[i], percentage[i]);
    }

    return 0;
}
