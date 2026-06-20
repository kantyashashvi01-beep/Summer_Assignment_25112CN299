#include <stdio.h>

int main() {
    int accNo, choice;
    float balance = 5000, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > balance)
                    printf("Insufficient Balance!\n");
                else {
                    balance -= amount;
                    printf("Withdrawal Successful.\n");
                }
                break;

            case 4:
                printf("Thank You for Banking With Us.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}