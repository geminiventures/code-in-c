#include <stdio.h>
#include "counter.h"

int main() {
    // Read input
    int starting_value;
    int num_increments;
    scanf("%d", &starting_value);
    scanf("%d", &num_increments);
    
    // Create a Counter and initialize it with starting_value
    Counter counter = { .value = starting_value };
    // Call counter_increment the specified number of times
    for (int i = 0; i < num_increments; i++) {
        counter_increment(&counter);
    }
    // Use counter_get to retrieve the final value and print it
    // Print format: "Final value: {result}"
    printf("Final value: %d\n", counter_get(&counter));

    return 0;
}
