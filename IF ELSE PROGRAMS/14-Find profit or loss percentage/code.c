#include <stdio.h>

int main() {
    float CP, SP;
    float profit, loss;
    float profitPercentage, lossPercentage;

    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    printf("Enter Selling Price: ");
    scanf("%f", &SP);

    if (SP > CP) {
        profit = SP-CP;
        profitPercentage = (profit * 100) / CP;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    }
    else if (CP > SP) {
        loss = CP - SP;
        lossPercentage = (loss * 100) / CP;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
