// Temperature Conversion 2
// Write a program that converts Celsius to Fahrenheit
//

#include <stdio.h>

int main() {
    // Assign variables
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 50.0;
    step = 5.0;

    printf("Celsius \t   -   \t Fahrenheit\n");

    celsius = lower;

    while (celsius <= upper) {
        fahrenheit = (celsius * 9 / 5) + 32.0;
        printf("%4.0f ºC \t   |   \t %6.2f ºF\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}
