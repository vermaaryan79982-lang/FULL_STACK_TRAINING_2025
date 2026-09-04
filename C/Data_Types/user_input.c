#include <stdio.h>

int main() {
    int roll;          // integer type
    char name[50];     // character array (string)
    float salary;      // float type

    // User se input lena
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);   // single word name ke liye

    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Output print karna
    printf("\n--- User Details ---\n");
    printf("Roll Number: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Salary: %.2f\n", salary);

    return 0;
}
