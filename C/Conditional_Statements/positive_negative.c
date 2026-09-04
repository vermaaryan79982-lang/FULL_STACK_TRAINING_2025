#include <stdio.h>

int main() {
    int num;

    // User se input lena
    printf("Enter a number: ");
    scanf("%d", &num);

    // If-Else condition
    if(num > 0) {
        printf("%d is Positive\n", num);
    } else if(num < 0) {
        printf("%d is Negative\n", num);
    } else {
        printf("The number is Zero\n");
    }

    return 0;
}
