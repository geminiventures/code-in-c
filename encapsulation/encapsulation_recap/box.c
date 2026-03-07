#include <stdlib.h>
#include "box.h"

// Define the actual struct Box with three members:
// int width, int height, int depth
typedef struct Box {
    int width;
    int height;
    int depth;
} Box;

// Implement create_box
// Allocate memory for a Box, initialize with given dimensions, return pointer
Box *create_box(int width, int height, int depth) {
    Box *box = malloc(sizeof(Box));
    if (box == NULL) {
        return NULL;
    }
    box->width = width;
    box->height = height;
    box->depth = depth;
    return box;
}

// Implement destroy_box
// Free the allocated memory
void destroy_box(Box *box) {
    if (box == NULL) {
        return;
    }
    free(box);
}


// Implement get_volume
// Return width * height * depth
int get_volume(const Box *box) {
    if (box == NULL) {
        return -1;
    }
    return box->width * box->height * box->depth;
}

// Implement set_dimensions
// Validate that all three values are positive (greater than zero)
// If any value fails validation, reject the entire update and return 0
// If all valid, update dimensions and return 1
int set_dimensions(Box *box, int width, int height, int depth) {
    if (box == NULL || width <= 0 || height <= 0 || depth <= 0) {
        return 0;
    }
    box->width = width;
    box->height = height;
    box->depth = depth;
    return 1;
}

