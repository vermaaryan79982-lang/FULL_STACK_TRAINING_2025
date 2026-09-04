#include <stdio.h>

int main() {
    int n;

    // Kitne numbers input lene hain
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    // Input lena
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max
    int min = arr[0];
    int max = arr[0];

    // For loop + if-else condition
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        else if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Output
    printf("\nMinimum value = %d\n", min);
    printf("Maximum value = %d\n", max);

    return 0;
}
