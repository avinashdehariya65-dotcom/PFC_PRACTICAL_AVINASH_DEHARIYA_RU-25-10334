// Practical 6 — Q1
// Program: Print numbers from a to b
// Name: Avinash Dehariya
// ERP: 10334

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Numbers from %d to %d:\n", a, b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}

/*
Sample Output:
Enter value of a: 3
Enter value of b: 8
Numbers from 3 to 8:
3 4 5 6 7 8
*/