#include <stdio.h>
#include "shape.h"

// Implement set_color function
// This function should set the color field of the Shape
void set_color(Shape* shape, int color) {
    shape->color = color;
}

// Implement print_rect function
// This function should print:
// Width: <width>
// Height: <height>
// Color: <color>

void print_rect(const Rect* rect) {
    printf("Width: %d\n", rect->width);
    printf("Height: %d\n", rect->height);
    printf("Color: %d\n", rect->shape.color);
}
