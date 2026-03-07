#include <stdio.h>
#include "temperature.h"

// Implement temp_display
// Should print: "Current: %.1fC\n"
// Remember: const pointer means you cannot modify the struct's data
void temp_display(const Temperature *temp) {
    printf("Current: %.1fC\n", temp->celsius);
}
// Implement temp_adjust
// Should add the amount to the celsius value
// This function CAN modify the struct because it doesn't use const
void temp_adjust(Temperature *temp, double amount) {
    temp->celsius += amount;
}
// Implement temp_to_fahrenheit
// Should return: celsius * 9.0 / 5.0 + 32.0
// Remember: const pointer means you cannot modify the struct's data
void temp_to_fahrenheit(const Temperature *temp) {
    double fahrenheit = temp->celsius * 9.0 / 5.0 + 32.0;
    printf("Fahrenheit: %.1fF\n", fahrenheit);
}