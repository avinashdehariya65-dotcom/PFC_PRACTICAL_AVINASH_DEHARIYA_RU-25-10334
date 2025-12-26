// Practical 6 — Q2
// Program: Sum of even numbers using continue
// Name:  Avinash Dehariya
// ERP: 10334

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // skip odd numbers
        if(i % 2 != 0) {
            continue;
        }

        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d", n, sum);

    return 0;
}

/*
Sample Output:
Enter limit: 10
Sum of even numbers from 1 to 10 = 30
*/