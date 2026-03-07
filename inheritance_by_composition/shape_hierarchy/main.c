#include <stdio.h>
#include "shape.h"

int main() {
    int width, height, initial_color, new_color;
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%d", &initial_color);
    scanf("%d", &new_color);

    // Create a Rect and initialize all its fields
    // (width, height, and the embedded Shape's color with initial_color)
    Rect rect;
    rect.width = width;
    rect.height = height;
    rect.shape.color = initial_color;

    // Call set_color with the rectangle cast to Shape*
    // to change the color to new_color
    set_color((Shape*)&rect, new_color);
    // Call print_rect to display the result
    print_rect(&rect);

    return 0;
}
