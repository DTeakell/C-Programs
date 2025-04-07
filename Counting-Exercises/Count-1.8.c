// Date: 04-07-25
// Name: Dillon Teakell
// Count all characters, spaces, tabs, and Newlines

#include <stdio.h>

int main() {
    int c, cc, sp, tb, nl;

    cc = 0;
    sp = 0;
    tb = 0;
    nl = 0;

    while((c = getchar()) != EOF) {

        ++cc;
        // Add count to spaces
        if(c == ' ') {
            ++sp;
        }
        // Add count to tabs
        else if(c == '\t') {
            ++tb;
        }
        // Add count to newlines
        else if(c == '\n') {
            ++nl;
        }
    }

    printf("Spaces: %d\n", sp);
    printf("Tabs: %d\n", tb);
    printf("Newlines: %d\n", nl);
    printf("Total Characters: %d\n", cc);

    return 0;
}
