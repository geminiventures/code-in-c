#include <stdio.h>
#include "temperature.h"

int main() {
    double initial_celsius, adjustment;
    scanf("%lf", &initial_celsius);
    scanf("%lf", &adjustment);

    // Create a Temperature struct and initialize it with initial_celsius
    Temperature temp;
    temp.celsius = initial_celsius;
    // Call temp_display to show the starting temperature
    temp_display(&temp);
    // Call temp_adjust to modify the temperature by the adjustment amount
    temp_adjust(&temp, adjustment);

    // Call temp_display again to show the updated temperature
    temp_display(&temp);
    // Print the Fahrenheit conversion using temp_to_fahrenheit
    // Format: "Fahrenheit: %.1fF\n"
    temp_to_fahrenheit(&temp);
    return 0;
}