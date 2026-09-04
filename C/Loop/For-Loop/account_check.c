#include <stdio.h>

int main() {
    int accounts[5];   // 5 account numbers
    int i;

    // Input account numbers using for loop
    printf("Enter 5 account numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &accounts[i]);
    }

    // Condition check using for loop + if-else
    printf("\n--- Account Check ---\n");
    for(i = 0; i < 5; i++) {
        if(accounts[i] % 2 == 0) {
            printf("Account %d: %d is VALID (Even)\n", i+1, accounts[i]);
        } else {
            printf("Account %d: %d is INVALID (Odd)\n", i+1, accounts[i]);
        }
    }

    return 0;
}
