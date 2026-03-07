#ifndef ANIMAL_H
#define ANIMAL_H

// Define the Animal struct with a 'legs' field (int)
typedef struct Animal{
    int legs;
} Animal;

// Define the Dog struct with Animal as its FIRST member
// and a 'name' field (char array of 50 characters)
typedef struct Dog {
    Animal animal;
    char name[50];
} Dog;

// Declare the print_animal function that takes an Animal* parameter
void print_animal(Animal *animal);
#endif
