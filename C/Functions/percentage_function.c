#include <stdio.h>

// Function to calculate percentage
float calcPercentage(float total, int subjects) {
    return total / subjects;
}

int main() {
    float total;
    int subjects;

    printf("Enter total marks obtained: ");
    scanf("%f", &total);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    float percentage = calcPercentage(total, subjects);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
