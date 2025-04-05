#include <stdio.h>

int main() {
    // Declare input character
    int c;

    // Get the value of EOF (End of File)
    printf("The value of EOF is: %d\n", EOF);

    while((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
