#include <stdio.h>
#define IN_WORD 1 // Inside of word
#define OUT_WORD 0 // Outside of word
#define IN_SENTENCE 1 // Inside of sentence
#define OUT_SENTENCE 0 // Outside of sentence

int main() {
    int c, nl, nw, nc, ns, word_state, sentence_state;

    word_state = OUT_WORD;
    sentence_state = OUT_SENTENCE;

    nl = nw = nc = ns = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        // Increment new line
        if (c == '\n') {
            ++nl;
        }

        // No longer in a word
        if (c == ' ' || c == '\n' || c == '\t') {
            word_state = OUT_WORD;
        }

        // In a word, so increment word counter
        if (word_state == OUT_WORD) {
            word_state = IN_WORD;
            ++nw;
        }

        // End of sentence, increment
        if (c == '.' || c == '?' || c == '!') {
            sentence_state = OUT_SENTENCE;
            ns++;
        }

        // In sentence
        else if (sentence_state == OUT_SENTENCE) {
            sentence_state = IN_SENTENCE;
        }
    }

    printf("New Lines: %d\n", nl);
    printf("Words: %d\n", nw);
    printf("Characters: %d\n", nc);
    printf("Sentences: %d\n", ns);

    return 0;
}
