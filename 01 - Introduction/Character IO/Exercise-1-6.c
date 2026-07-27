// Exercise 1-6
// Write a program to test if getChar() != EOF is 1 or 0

#include <stdio.h>

int main() {
    int c;

    c = (getchar() != EOF);

    printf("%d", c);
}
