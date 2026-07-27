// Temperature Conversion
// Write a program that converts Fahrenheit to Celsius
//
#include <stdio.h>

int main() {
    // Assign variables
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    printf("Fahrenheit \t   -   \t Celsius\n");

    fahrenheit = lower;

    while (fahrenheit <= upper) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%4.0f ºF \t   |   \t %4.2f ºC\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
