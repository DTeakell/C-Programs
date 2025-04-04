// Date: 04-04-25
// Name: Dillon Teakell

#include <stdio.h>
#define LOWER 0     // Lower limit
#define UPPER 200   // Upper limit
#define STEP 10     // Step size

int main() {
    // Declare variables
    float fahrenheit, celsius;

    printf("Fahrenheit\tCelsius\n");

    // Loop to print temperature table
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.0f", fahrenheit);
        printf("\t\t");
        printf("%.2f\n", celsius);
    }
    return 0;
}
