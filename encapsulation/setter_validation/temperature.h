#ifndef TEMPERATURE_H
#define TEMPERATURE_H

// Forward declaration - opaque pointer pattern
// Declare the Temperature type using a forward declaration
typedef struct Temperature Temperature;
// Declare create_temperature function
// Takes an integer for initial degrees, returns a Temperature pointer
Temperature *create_temperature(int degrees);
// Declare free_temperature function
// Releases the allocated memory
void free_temperature(Temperature* temp);

// Declare temp_get_degrees function
// Getter that returns the current temperature value
int temp_get_degrees(Temperature* temp);

// Declare temp_set_degrees function
// Setter that returns an int (1 for success, 0 for failure)
int temp_set_degrees(Temperature* temp, int degrees);
#endif
