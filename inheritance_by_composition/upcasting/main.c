#include <stdio.h>
#include "vehicle.h"

int main() {
    int initial_speed, max_speed, has_sidecar, boost_amount;

    // Read inputs
    scanf("%d", &initial_speed);
    scanf("%d", &max_speed);
    scanf("%d", &has_sidecar);
    scanf("%d", &boost_amount);

    // Create a Motorcycle and initialize all its fields
    // Remember: Motorcycle embeds Vehicle as its first member
    Motorcycle motorcycle = { .vehicle = { .speed = initial_speed, .max_speed = max_speed }, .has_sidecar = has_sidecar };

    // Demonstrate upcasting by calling boost
    // Cast your Motorcycle* to Vehicle* to pass it to the boost function
    boost((Vehicle*)&motorcycle, boost_amount);

    // Print the motorcycle's information
    print_motorcycle(&motorcycle);

    return 0;
}
