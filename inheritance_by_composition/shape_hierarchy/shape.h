#ifndef SHAPE_H
#define SHAPE_H

// Define the Shape struct with a color field (int)
typedef struct Shape {
    int color;
} Shape;

// Define the Rect struct that embeds Shape as its first member
// and adds width and height fields (both int)
typedef struct Rect {
    Shape shape;
    int width;
    int height;
} Rect;

// Declare set_color function that takes a Shape* and an int color
void set_color(Shape* shape, int color);
// Declare print_rect function that takes a Rect*
void print_rect(const Rect* rect);

#endif
