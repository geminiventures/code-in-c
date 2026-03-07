// Add include guards using CIRCLE_H
#ifndef CIRCLE_H
#define CIRCLE_H
// Define the Circle struct with a double radius member
typedef struct Circle {
    double radius;
} Circle;

// Declare circle_area function
// Takes a const pointer to Circle, returns double
double circle_area(const Circle *circle);
// Declare circle_circumference function
// Takes a const pointer to Circle, returns double
double circle_circumference(const Circle *circle);
// Close include guards
#endif
