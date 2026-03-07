#ifndef TYPES_H
#define TYPES_H

// Define the Person struct
// - name: character array of 50 characters
// - age: integer
typedef struct Person {
    char name[50];
    int age;
} Person;

// Define the Employee struct
// - person: embedded Person struct (first member)
// - employee_id: integer
typedef struct Employee {
    Person person;
    int employee_id;
} Employee;

// Function declaration
void print_employee(Employee *emp);

#endif
