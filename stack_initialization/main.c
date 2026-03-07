#include <stdio.h>
#include "temperature.h"

int main() {
    double celsius_input;
    scanf("%lf", &celsius_input);
    
    // Use create_temperature to create a Temperature struct
    Temperature temp = create_temperature(celsius_input);
    // Print the Celsius value using %.2f format
    printf("Celsius: %.2f\n", temp.celsius);
    // Use temperature_to_fahrenheit to convert and print the Fahrenheit value
    printf("Fahrenheit: %.2f\n", temperature_to_fahrenheit(&temp));
    return 0;
}
