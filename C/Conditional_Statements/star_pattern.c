#include <stdio.h>

int main() {
    int n;

    // User se input lena
    printf("Enter a number: ");
    scanf("%d", &n);

    // Pattern print karna using for loop
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
