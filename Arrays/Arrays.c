// Date: 04-14-25
// Name: Dillon Teakell
// Count digits, white spaces, and other characters

#include <stdio.h>

int main() {
    int c, i, white_spaces, other_char;
    int digits[10];

    white_spaces = other_char = 0;

    // Intialize the array with zeros
    for (i = 0; i < 10; ++i) {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9' ) {
            ++digits[c-'0'];
        }

        else if (c == ' ' || c == '\n' || c == '\t') {
            ++white_spaces;
        }

        else {
            ++other_char;
        }
    }

    printf("digits = ");

    for (i = 0; i < 10; ++i) {
        printf("%d", digits[i]);
    }

    printf("\nWhite Spaces: %d\n", white_spaces);
    printf("Other Characters: %d\n", other_char);

    return 0;
}
