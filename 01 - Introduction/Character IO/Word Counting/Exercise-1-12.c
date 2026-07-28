// Word-Counting
// Write a program that prints the input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0


int main() {
    int c, nos, state; // 'nos' is number of spaces

    nos = 0;
    state = OUT;

    while((c = getchar()) != EOF) {

        // Space check
        if (nos == 1) {
            putchar('\n');
        }

        if (c != ' ' && c != '\n' && c != '\t') {
            nos = 0;
            putchar(c);
        } else if (c == ' ' || c == '\n' || c == '\t') {
            nos ++;
            state = OUT;
        }
    }
}
