#include "counter.h"

// Implement counter_increment
// This function takes a pointer to Counter and increases its value by 1
void counter_increment(Counter* counter) {
    counter->value += 1;
}
// Implement counter_get
// This function takes a pointer to Counter and returns its current value
int counter_get(Counter* counter) {
    return counter->value;
}
