// Copy-IO
// Write a program to copy text entered to the console

#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
    }
}
