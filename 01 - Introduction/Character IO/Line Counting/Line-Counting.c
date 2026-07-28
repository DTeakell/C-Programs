// Line-Counting
// Write a program to count the number of new lines entered.

#include <stdio.h>

int main() {
    int c, nl;

    nl = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
            printf("New Lines: %d\n", nl);
        }
    }
}
