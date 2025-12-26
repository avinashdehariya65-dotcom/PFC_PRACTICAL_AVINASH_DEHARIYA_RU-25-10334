// Practical 6 — Q3
// Program: ATM PIN Authentication
// Name: Avinash Dehariya
// ERP: 10334

#include <stdio.h>

int main() {
    int pin, correctPin = 1234;
    int attempts = 0;

    while(attempts < 3) {
        printf("Enter ATM PIN: ");
        scanf("%d", &pin);

        if(pin == correctPin) {
            printf("Access Granted. Welcome!\n");
            return 0;
        } else {
            printf("Wrong PIN! Try again.\n");
        }

        attempts++;
    }

    printf("Card Blocked! Too many attempts.");

    return 0;
}

/*
Sample Output:
Enter ATM PIN: 1111
Wrong PIN! Try again.
Enter ATM PIN: 123
Wrong PIN! Try again.
Enter ATM PIN: 1234
Access Granted. Welcome!
*/