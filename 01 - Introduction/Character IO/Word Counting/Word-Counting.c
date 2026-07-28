// Word-Counting
// Write a program that counts the number of words typed.

#include <stdio.h>

#define IN 1
#define OUT 0


int main() {
    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;

    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            nl++;
            printf("New Lines: %d\n", nl);
            printf("Characters: %d\n", nc);
            printf("Words: %d\n", nw);
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
}
