#include <stdio.h>
#include "vehicle.h"

// Implement the boost function
// - Increase the vehicle's speed by the given amount
// - Cap the speed at max_speed if it would exceed it
void boost(Vehicle* v, int amount) {
    v->speed += amount;
    if (v->speed > v->max_speed) {
        v->speed = v->max_speed;
    }
}

// Implement the print_motorcycle function
// Output format:
// Speed: <speed>
// Max Speed: <max_speed>
// Sidecar: Yes (or No)
void print_motorcycle(const Motorcycle* m) {
    printf("Speed: %d\n", m->vehicle.speed);
    printf("Max Speed: %d\n", m->vehicle.max_speed);
    printf("Sidecar: %s\n", m->has_sidecar ? "Yes" : "No");
}
