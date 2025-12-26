// Practical 7 — Q3
// Program: Alphabet pattern
// Name: Aryan Mishra
// ERP: 10293

#include <stdio.h>

int main() {
    for(char i = 'A'; i <= 'D'; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:

A
AB
ABC
ABCD
*/