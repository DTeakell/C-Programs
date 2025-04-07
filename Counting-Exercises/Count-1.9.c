//Date: 04-07-25
//Name: Dillon Teakell
// Copy input to output, seperate by spaces

#include <stdio.h>

int main() {
    // Set variables
    int c;
    int space_flag = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (space_flag == 0) {
                putchar(c);
                space_flag = 1;
            }
        } else {
            putchar(c);
            space_flag = 0;
        }
    }
    return 0;
}
