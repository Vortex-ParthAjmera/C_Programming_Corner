#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0f;  // Initial predefined balance
    float amount;

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                    printf("Current Balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Deposit amount must be positive.\n");
                }
                break;
            
            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    if(amount <= balance) {
                        balance -= amount;
                        printf("Amount withdrawn successfully.\n");
                        printf("Current Balance: %.2f\n", balance);
                    } else {
                        printf("Insufficient balance.\n");
                    }
                } else {
                    printf("Invalid amount. Withdrawal amount must be positive.\n");
                }
                break;

            case 3: // Check Balance
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4: // Exit
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice. Please select from 1 to 4.\n");
        }
    } while(choice != 4);

    return 0;
}
