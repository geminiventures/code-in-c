#include "circle.h"

// Use 3.14159 as the value of pi

// Implement circle_area
// Formula: pi * radius * radius
// Remember: only read the radius, don't modify it
double circle_area(const Circle* circle) {
    return 3.14159 * circle->radius * circle->radius;
}
// Implement circle_circumference
// Formula: 2 * pi * radius
// Remember: only read the radius, don't modify it
double circle_circumference(const Circle* circle) {
    return 2 * 3.14159 * circle->radius;
}
