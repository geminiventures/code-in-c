#include <stdio.h>
#include "student.h"

// Implement set_person_age function
// This function should modify the age inside the embedded Person struct
// Use the arrow-then-dot syntax: s->person.age
void set_person_age(Student* s, int new_age) {
    s->person.age = new_age;
}

// Implement print_student function
// Access and display all fields from both the embedded person and the student
// Output format:
// Name: <name>
// Age: <age>
// Grade: <grade>
void print_student(const Student* s) {
    printf("Name: %s\n", s->person.name);
    printf("Age: %d\n", s->person.age);
    printf("Grade: %d\n", s->grade);
}
