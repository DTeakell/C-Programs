// Temperature Conversion
// Write a function that converts a temperature to a specified unit.

#include <stdio.h>

// Enum for temperature units
typedef enum {
    FAHRENHEIT,
    CELSIUS
} Unit;

// Displays the temperature with the converted unit type in the console
void displayTemperature(float temperature, Unit units) {
    switch (units) {
        case CELSIUS: {
            printf("%.2f ºC", temperature);
            return;
        }
        case FAHRENHEIT: {
            printf("%.2f ºF", temperature);
            return;
        }
    }
}

// Converts temperature to a given unit
float convertTemperature(float temperature, Unit toUnit) {
    switch (toUnit) {
        case FAHRENHEIT: {
            float fahrenheit;
            fahrenheit = (temperature * 9 / 5) + 32.0;
            displayTemperature(fahrenheit, FAHRENHEIT);
            return fahrenheit;
        }
        case CELSIUS: {
            float celsius;
            celsius = (temperature - 32) * 5 / 9;
            displayTemperature(celsius, CELSIUS);
            return celsius;
        }
    }
}


int main() {
    float temperatureInFahrenheit;
    temperatureInFahrenheit = 102.0;

    float convertedTemperature = convertTemperature(temperatureInFahrenheit, CELSIUS);

}
