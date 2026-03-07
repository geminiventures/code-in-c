#include <stdio.h>
#include <string.h>

// Define the Product struct here
struct Product {
    char name[50];
    float price;
    int stock;
} Product;
// Implement the findMostExpensive function that takes an array of struct Product and its size, and returns the index of the most expensive product

int findMostExpensive(struct Product* products, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (products[i].price > products[maxIndex].price) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Implement the calculateTotalValue function here
float calculateTotalValue(struct Product* products, int size) {
    float totalValue = 0.0;
    for (int i = 0; i < size; i++) {
        totalValue += products[i].price * ((float)products[i].stock);
    }
    return totalValue;
}
// Implement the findLowStock function here
int findLowStock(struct Product* products, int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (products[i].stock < threshold) {
            count++;
        }
    }
    return count;
}

int main() {
    // Create array of 3 products
    struct Product inventory[3];
    
    // Read input for each product
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }
    
    // Print each product's information rint each product's information in this exact format: Product [index]: [name] - Price: [price], Stock: [stock]
    for (int i = 0; i < 3; i++) {
        printf("Product %d: %s - Price: %.2f, Stock: %d\n", i, inventory[i].name, inventory[i].price, inventory[i].stock);
    }
    
    // Find and print the most expensive product
    int mostExpensiveIndex = findMostExpensive(inventory, 3);
    printf("Most expensive product: %s\n", inventory[mostExpensiveIndex].name);

    
    // Calculate and print total inventory value
    float totalValue = calculateTotalValue(inventory, 3);
    printf("Total inventory value: %.2f\n", totalValue);   
    
    // Read low stock threshold
    int threshold;
    scanf("%d", &threshold);
    
    // Find and print products with low stock
    int lowStockCount = findLowStock(inventory, 3, threshold);
    printf("Products with low stock: %d\n", lowStockCount);
    
    // Check if most expensive product is well stocked
    if (inventory[mostExpensiveIndex].stock > 10) {
        printf("Most expensive product is well stocked\n");
    } else {
        printf("Most expensive product needs restocking\n");
    }

    return 0;
}