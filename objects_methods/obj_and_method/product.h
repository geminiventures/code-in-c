#ifndef PRODUCT_H
#define PRODUCT_H

// Define the Product struct with:
// - char name[50]
// - double price
// - int quantity
typedef struct Product {
    char name[50];
    double price;
    int quantity;
} Product;

// Declare display_by_value function that takes a Product by value
void display_by_value(Product p);
// Declare display_by_pointer function that takes a const Product *
void display_by_pointer(const Product *p);
#endif
