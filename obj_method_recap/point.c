#include <stdio.h>
#include "point.h"

// Implement point_move
// - Add dx to the point's x coordinate
// - Add dy to the point's y coordinate
void point_move(Point *point, int dx, int dy) {
    point->x += dx;
    point->y += dy;
}

// Implement point_print
// - Use a const pointer since we're only reading
// - Output format: Point: ({x}, {y})
void point_print(const Point *point) {
    printf("Point: (%d, %d)\n", point->x, point->y);
}
