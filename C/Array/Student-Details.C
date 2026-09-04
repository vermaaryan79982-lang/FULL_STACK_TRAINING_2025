#include <stdio.h>

int main() {
    int n;

    // Kitne students ka data lena hai
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Arrays banate hain
    char name[50][50];   // 50 students max, har naam 50 chars tak
    int roll[50];
    float marks[50];

    // Input lena
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", name[i]);   // single word name ke liye

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Output print karna
    printf("\n--- Student Details ---\n");
    printf("Name\t\tRoll\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%s\t\t%d\t%.2f\n", name[i], roll[i], marks[i]);
    }

    return 0;
}
