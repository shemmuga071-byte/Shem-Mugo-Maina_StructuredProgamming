#include <stdio.h>

int login();
void showMenu();
void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    double balance = 1000.0;  
    int choice;

    if (login()) {
        do {
            showMenu();
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    checkBalance(balance);
                    break;
                case 2:
                    balance = deposit(balance);
                    break;
                case 3:
                    balance = withdraw(balance);
                    break;
                case 4:
                    printf("Thank you for using the ATM. Goodbye!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 4);
    }

    return 0;
}

int login() {
    const int storedPIN = 1234;
    int enteredPIN;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN) {
            printf("Login successful!\n\n");
            return 1;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("Access denied. Exiting...\n");
    return 0;
}

void showMenu() {
    printf("\nATM Menu:\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void checkBalance(double balance) {
    printf("Your current balance is: %.2f\n", balance);
}

double deposit(double balance) {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
    } else {
        balance += amount;
        printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
    }
    return balance;
}

double withdraw(double balance) {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
    } else if (amount > balance) {
        printf("Insufficient funds.\n");
    } else {
        balance -= amount;
        printf("Withdrew %.2f. New balance: %.2f\n", amount, balance);
    }
    return balance;
}
