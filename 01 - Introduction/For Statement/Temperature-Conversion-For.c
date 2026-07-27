// Temperature Conversion (for loop)
// Change the conversion of the program from a while loop to a for loop

#include <stdio.h>

int main() {
    // Assign variables
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    printf("Fahrenheit \t   -   \t Celsius\n");

    for (fahrenheit = lower; fahrenheit <= upper; fahrenheit += step) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%4.0f ºF \t   |   \t %4.2f ºC\n", fahrenheit, celsius);
    }
}
