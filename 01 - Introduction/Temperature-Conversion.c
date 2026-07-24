// Temperature Conversion
// Write a program that converts a given temperature to another and prints out a table.
//
#include <stdio.h>

int main() {
    // Assign variables
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit - Celsius\n");

    fahrenheit = lower;

    while (fahrenheit <= upper) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%d \t   |   \t %d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
