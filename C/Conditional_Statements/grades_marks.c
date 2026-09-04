#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Conditional statements for grade
    if(percentage >= 90) {
        printf("\nGrade: A+ (Excellent)\n");
    } else if(percentage >= 75) {
        printf("\nGrade: A (Very Good)\n");
    } else if(percentage >= 60) {
        printf("\nGrade: B (Good)\n");
    } else if(percentage >= 45) {
        printf("\nGrade: C (Average)\n");
    } else {
        printf("\nGrade: F (Fail)\n");
    }

    // Print details
    printf("\n--- Marks Details ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i+1, marks[i]);
    }
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
