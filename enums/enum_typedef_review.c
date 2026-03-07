#include <stdio.h>

// Define your enum ShapeType and typedef here
typedef enum ShapeType {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
} Shape;

// Implement the calculateArea function here
float calculateArea(Shape shape, float dimension1, float dimension2) {
    switch (shape) {
        case CIRCLE:
            return 3.14159 * dimension1 * dimension1; // dimension1 is radius
        case RECTANGLE:
            return dimension1 * dimension2; // dimension1 is length, dimension2 is width
        case TRIANGLE:
            return 0.5 * dimension1 * dimension2; // dimension1 is base, dimension2 is height
        default:
            return 0.0;
    }
}
// Implement the printShapeInfo function here
void printShapeInfo(Shape shape) {
    switch (shape) {
        case CIRCLE:
            printf("Shape: Circle\n");
            break;
        case RECTANGLE:
            printf("Shape: Rectangle\n");
            break;
        case TRIANGLE:
            printf("Shape: Triangle\n");
            break;
        default:
            printf("Shape: Unknown\n");
            break;
    }
}

int main() {
    // Read input
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    // Write your code below
    // Declare selectedShape variable and assign based on shapeChoice
    Shape selectedShape = shapeChoice;

    // Call printShapeInfo function
    printShapeInfo(selectedShape);
    // Print dimensions
    printf("Dimensions: %.1f %.1f\n", dim1, dim2);
    // Calculate and print area
    float area = calculateArea(selectedShape, dim1, dim2);
    printf("Area: %.2f\n", area);
    // Determine and print category
    if (area < 10.0) {
        printf("Category: Small\n");
    } else if (area >= 10.0 && area <= 50.0) {
        printf("Category: Medium\n");
    } else if (area > 50.0) {
        printf("Category: Large\n");
    }
    return 0;
}