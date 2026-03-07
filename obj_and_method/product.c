#include <stdio.h>
#include "product.h"

// Implement display_by_value
// This function receives a Product by value (a copy)
// Use the dot operator to access members (e.g., p.name)
// Print format: Product: {name}, Price: {price}, Qty: {quantity}
// Use %.2f for price
void display_by_value(Product p) {
    printf("Product: %s, Price: %.2f, Qty: %d\n", p.name, p.price, p.quantity);
}

// Implement display_by_pointer
// This function receives a const Product * (pointer)
// Use the arrow operator to access members (e.g., p->name)
// Print format: Product: {name}, Price: {price}, Qty: {quantity}
// Use %.2f for price
void display_by_pointer(const Product *p) {
    printf("Product: %s, Price: %.2f, Qty: %d\n", p->name, p->price, p->quantity);
}
