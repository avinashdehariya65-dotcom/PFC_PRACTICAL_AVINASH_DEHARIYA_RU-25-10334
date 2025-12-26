// Practical 8 — Q2
// Program: Swap using pass by reference
// Name: Avinash Dehariya
// ERP: 10334

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d", x, y);

    return 0;
}

/*
Sample Output:
Enter two numbers: 5 10
After swapping: x = 10, y = 5
*/