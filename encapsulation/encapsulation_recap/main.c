#include <stdio.h>
#include "box.h"

int main() {
    // Read initial dimensions
    int width, height, depth;
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%d", &depth);
    
    // Read new dimensions to attempt
    int new_w, new_h, new_d;
    scanf("%d", &new_w);
    scanf("%d", &new_h);
    scanf("%d", &new_d);
    
    // Create a Box with initial dimensions
    Box *box = create_box(width, height, depth);
    
    // Print initial volume in format: "Volume: {volume}"
    printf("Volume: %d\n", get_volume(box));

    
    // Attempt to set new dimensions and store the result
    int set_result = set_dimensions(box, new_w, new_h, new_d);

    
    // Print whether set succeeded in format: "Set: {0 or 1}"
    printf("Set: %d\n", set_result);

    
    // Print the resulting volume in format: "Volume: {volume}"
    printf("Volume: %d\n", get_volume(box));

    
    // Destroy the box and print "Destroyed"
    destroy_box(box);
    printf("Destroyed\n");
    
    return 0;
}
