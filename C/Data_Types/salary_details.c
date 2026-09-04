#include <stdio.h>

int main() {
    int emp_id;          // integer type
    char name[50];       // character array (string)
    float salary;        // float type

    // Input lena
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", name);   // single word name ke liye

    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Output print karna
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp_id);
    printf("Name: %s\n", name);
    printf("Salary: %.2f\n", salary);

    return 0;
}
