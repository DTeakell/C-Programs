//Date: 04-07-25
//Name: Dillon Teakell
// Copy input to output, replace tabs, backspaces, and backslash

#include <stdio.h>

int main() {
    // Set variables
    int c;

    while ((c = getchar()) != EOF) {
    //Replace tabs
       if (c == '\t') {
           putchar('\\');
           putchar('t');
       }
       // Replace backspaces
       else if (c == '\b') {
           putchar('\\');
           putchar('b');
       }
       // Replace backslashes
       else if (c == '\\') {
           putchar('\\');
           putchar('\\');
       }
       else {
           putchar(c);
       }
    }
    return 0;
}
