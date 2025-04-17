#include <stdio.h>
#define IN 1 // Inside of the word
#define OUT 0 // Outside of the word

// Print program input on each line
int main() {

    // Define variables
    int c, state;

    // Initialize the state
    state = OUT;

    // Get user input
    while((c = getchar()) != EOF) {

        printf("%c", c);

        // Check if the input is a word seperator
        if (c == ' ' || c == '\n' || c == '\t') {
            printf("\n");
            state = OUT;
        }

        // Include conditions for punctuation
        if (c == '.' || c == '!' || c == '?' || c == ',') {
            printf("\n");
            state = OUT;
        }

        // Bring the state back to IN
        if (state == OUT) {
            state = IN;
        }
    }
    return 0;
}
