#ifndef ANIMAL_H
#define ANIMAL_H

// TODO: Define the Animal struct with a 'legs' field (int)
typedef struct Animal{
    int legs;
} Animal;

// TODO: Define the Dog struct with Animal as its FIRST member
// and a 'name' field (char array of 50 characters)
typedef struct Dog {
    Animal animal;
    char name[50];
} Dog;

// TODO: Declare the print_animal function that takes an Animal* parameter
void print_animal(Animal *animal);
#endif
