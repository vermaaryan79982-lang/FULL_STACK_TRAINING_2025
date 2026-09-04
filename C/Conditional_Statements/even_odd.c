#include <stdio.h>

int main() {
    int num;

    // User se input lena
    printf("Enter a number: ");
    scanf("%d", &num);

    // If-Else condition
    if(num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
