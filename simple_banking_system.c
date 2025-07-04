#include <stdio.h>

float balance = 0;

void deposit(float amount) {
    balance += amount;
    printf("Deposited: %.2f | New Balance: %.2f\n", amount, balance);
}

void withdraw(float amount) {
    if (amount > balance)
        printf("Insufficient balance!\n");
    else {
        balance -= amount;
        printf("Withdrawn: %.2f | New Balance: %.2f\n", amount, balance);
    }
}

void checkBalance() {
    printf("Current Balance: %.2f\n", balance);
}

int main() {
    int choice;
    float amount;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
