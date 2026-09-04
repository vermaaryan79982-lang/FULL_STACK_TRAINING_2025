#include <stdio.h>

int main() {
    int n;

    // Kitne students ka data lena hai
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Arrays banate hain
    int roll[n], age[n];
    float marks[n];

    // Input lena using for loop
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Age: ");
        scanf("%d", &age[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Output print karna using for loop
    printf("\n--- Personal Details ---\n");
    printf("Roll\tAge\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%.2f\n", roll[i], age[i], marks[i]);
    }

    return 0;
}
