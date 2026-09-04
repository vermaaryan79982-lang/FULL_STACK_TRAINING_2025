#include <stdio.h>

int main() {
    int n, i;

    // User se kitne numbers lena hai
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int arr[n];  // array to store numbers

    // Input numbers using for loop
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output numbers using for loop
    printf("\n--- You entered ---\n");
    for(i = 0; i < n; i++) {
        printf("Number %d: %d\n", i+1, arr[i]);
    }

    return 0;
}
