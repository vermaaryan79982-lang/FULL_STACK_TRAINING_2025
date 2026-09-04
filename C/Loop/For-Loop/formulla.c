#include <stdio.h>

int main() {
    int n = 5;   // 5 accounts fixed
    float principal, rate, time, interest;

    // Loop for multiple accounts
    for(int i = 1; i <= n; i++) {
        printf("\nEnter details for Account %d:\n", i);

        printf("Principal amount: ");
        scanf("%f", &principal);

        printf("Rate of interest (%%): ");
        scanf("%f", &rate);

        printf("Time (in years): ");
        scanf("%f", &time);

        // Formula: Simple Interest = (P * R * T) / 100
        interest = (principal * rate * time) / 100;

        printf("Account %d Interest = %.2f\n", i, interest);
    }

    return 0;
}
