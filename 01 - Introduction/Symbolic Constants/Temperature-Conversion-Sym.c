// Temperature Conversion (symbolic constants)
// Assign symbolic constants instead of magic numbers
// Assigning constants instead of magic numbers makes the program easier to read for other developers and makes it easier to change.

#define LOWER 0
#define UPPER 200
#define STEP 10

#include <stdio.h>

int main() {
    // Assign variables
    float fahrenheit, celsius;

    // Print header
    printf("Fahrenheit \t   -   \t Celsius\n");

    // Assign values to constants.
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%4.0f ºF \t   |   \t %4.2f ºC\n", fahrenheit, celsius);
    }
}
