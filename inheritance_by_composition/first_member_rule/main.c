#include <stdio.h>
#include <string.h>
#include "animal.h"

int main() {
    // Read input
    char name[50];
    int legs;
    scanf("%s", name);
    scanf("%d", &legs);
    
    // Create a Dog variable
    Dog dog;

    // Set the dog's name using strcpy
    strcpy(dog.name, name);

    // Set the number of legs (access through the embedded Animal)
    dog.animal.legs = legs;

    // Print the dog's name in format: "Dog: <name>"
    printf("Dog: %s\n", dog.name);
    
    // Cast Dog* to Animal* and call print_animal
    // This demonstrates the first member rule!
    print_animal((Animal*)&dog);

    return 0;
}
