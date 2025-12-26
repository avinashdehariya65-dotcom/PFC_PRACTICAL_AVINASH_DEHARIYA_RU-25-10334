// Practical 8 — Q3
// Program: Right angle triangle of stars
// Name: Avinash Dehariya
// ERP: 10334

#include <stdio.h>

void printTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}

/*
Sample Output (n = 5):

*
**
***
****
*****
*/