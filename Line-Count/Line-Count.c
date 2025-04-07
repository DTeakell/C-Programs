// Date: 04-07-25
// Name: Dillon Teakell
// Count all lines
#include <stdio.h>


int main() {

    int c, nl;

    c = 0;
    nl = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        printf("Line: %d", nl);
        printf("\n");
    }

    return 0;
}
