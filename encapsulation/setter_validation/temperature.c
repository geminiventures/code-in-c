#include <stdlib.h>
#include "temperature.h"

// Define the actual struct Temperature with a hidden int degrees member
typedef struct Temperature {
    int degrees;
} Temperature;
// Implement create_temperature
// Allocate memory and initialize with the given degrees value
Temperature *create_temperature(int degrees) {
    Temperature *temp = malloc(sizeof(Temperature));
    if (temp == NULL) {
        return NULL;
    }
    temp->degrees = degrees;
    return temp;
}

// Implement free_temperature
// Free the allocated memory
void free_temperature(Temperature* temp) {
    free(temp);
}
// Implement temp_get_degrees
// Return the current temperature value
int temp_get_degrees(Temperature* temp) {
    return temp->degrees;
}
// Implement temp_set_degrees
// Only accept values between -50 and 150 (inclusive)
// Return 0 and leave unchanged if outside range
// Return 1 and update value if valid
int temp_set_degrees(Temperature* temp, int degrees) {
    if (degrees < -50 || degrees > 150) {
        return 0;
    }
    temp->degrees = degrees;
    return 1;
}