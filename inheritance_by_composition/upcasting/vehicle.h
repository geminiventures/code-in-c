#ifndef VEHICLE_H
#define VEHICLE_H

// Define the Vehicle struct with:
// - speed (int): current speed
// - max_speed (int): vehicle's top speed
typedef struct Vehicle {
    int speed;
    int max_speed;
} Vehicle;

// Define the Motorcycle struct with:
// - Vehicle as its first member (for upcasting)
// - has_sidecar (int): 1 for yes, 0 for no
typedef struct Motorcycle {
    Vehicle vehicle;
    int has_sidecar;
} Motorcycle;

// Declare the boost function
// Takes a Vehicle* and an int amount
void boost(Vehicle* v, int amount);

// Declare the print_motorcycle function
// Takes a Motorcycle*
void print_motorcycle(const Motorcycle* m);

#endif
