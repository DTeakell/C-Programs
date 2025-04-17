// Date: 04-17-25
// Name: Dillon Teakell
//
//
// Create histogram of words, seperated by new lines


#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int c, i, state, word_length;

    state = OUT;

    word_length = 0;

    // Get input
    while((c = getchar()) != EOF) {

        // If the input isn't a seperator, then add to the word length
        if (c != ' ' && c != '\n' && c != '\t') {
            word_length++;
            state = IN;
        } else {
            // Print characters
            if (state == IN) {
                for (i = 0; i < word_length; ++i) {
                    putchar('*');
                }
                printf("\n");
                word_length = 0;
                state = OUT;
            }
        }
    }

    return 0;
}
