
#ifndef TEMPERATURE_H
#define TEMPERATURE_H
typedef struct Temperature {
    double celsius;
} Temperature;
void temp_display(const Temperature *temp);
void temp_adjust(Temperature *temp, double amount);
void temp_to_fahrenheit(const Temperature *temp);
#endif