#include <stdio.h>
#include "point.h"

int main() {
    // Read input values
    int x, y, dx, dy;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &dx);
    scanf("%d", &dy);
    
    // Create a Point with initial coordinates (x, y)
    Point point = {x, y};
    // Print the initial position using point_print
    point_print(&point);
    // Move the point by (dx, dy) using point_move
    point_move(&point, dx, dy);
    // Print the new position using point_print
    point_print(&point);
    return 0;
}
