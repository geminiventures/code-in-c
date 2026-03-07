#include <stdio.h>
#include "circle.h"

int main() {
    double radius;
    scanf("%lf", &radius);
    
    // Create a Circle struct with the given radius
    Circle c = {radius};
    // Use circle_area and circle_circumference helper methods
    // to calculate and print the results
    printf("Area: %.2f\n", circle_area(&c));
    printf("Circumference: %.2f\n", circle_circumference(&c));
    // Print format:
    // printf("Area: %.2f\n", ...);
    // printf("Circumference: %.2f\n", ...);
    
    return 0;
}
