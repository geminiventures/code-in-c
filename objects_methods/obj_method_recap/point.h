// Add include guards using POINT_H
#ifndef POINT_H
#define POINT_H

// Define the Point struct with x and y integer members
typedef struct Point {
    int x;
    int y;
} Point;

// Declare point_move function
// - Takes a pointer to Point and two integers (dx, dy)
// - Modifies the point's position
void point_move(Point *point, int dx, int dy);
// Declare point_print function
// - Takes a const pointer to Point
// - Should not modify the point
void point_print(const Point *point);
// Close include guards
#endif