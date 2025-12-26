// Practical 7 — Q1
// Program: Diamond pattern
// Name: Avinash Dehariya
// ERP: 10334

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // upper part
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }

    // lower part
    for(int i = n-1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

/*
Sample Output (n = 4):

   *
  ***
 *****
*******
 *****
  ***
   *
*/