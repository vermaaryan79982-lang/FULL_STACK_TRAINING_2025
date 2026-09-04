#include <stdio.h>

int main() {
    int n = 5;   // fixed 5 items
    float price[5], gst_rate[5], gst_amount[5], final_price[5];

    // Input prices and GST rates
    for(int i = 0; i < n; i++) {
        printf("\nEnter price of item %d: ", i+1);
        scanf("%f", &price[i]);

        printf("Enter GST rate (%%) for item %d: ", i+1);
        scanf("%f", &gst_rate[i]);

        // Calculate GST amount and final price
        gst_amount[i] = (price[i] * gst_rate[i]) / 100;
        final_price[i] = price[i] + gst_amount[i];
    }

    // Output
    printf("\n--- GST Calculation ---\n");
    printf("Item\tPrice\tGST%%\tGST Amt\tFinal Price\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i+1, price[i], gst_rate[i], gst_amount[i], final_price[i]);
    }

    return 0;
}
