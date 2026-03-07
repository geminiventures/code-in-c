#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

// Implement create_student
// - Allocate memory for a new Student struct
// - Allocate memory for the name string and copy the input name
// - Set the grade
// - Return the pointer to the new Student
Student *create_student(char* name, int grade) {
    Student *student = malloc(sizeof(Student));
    student->name = malloc(strlen(name) + 1);
    strcpy(student->name, name);
    student->grade = grade;
    return student;
}
// Implement clone_student
// - This is the key function for deep copy
// - Allocate fresh memory for a new Student struct
// - Allocate fresh memory for the name string (don't just copy the pointer!)
// - Copy the actual string data using strcpy or similar
// - Copy the grade value
// - Return the pointer to the cloned Student
Student *clone_student(const Student *original) {
    Student *clone = malloc(sizeof(Student));
    clone->name = malloc(strlen(original->name));
    strcpy(clone->name, original->name);
    clone->grade = original->grade;
    return clone;
}

// Implement free_student
// - Free the name string first
// - Then free the Student struct itself
void free_student(Student *student) {
    free(student->name);
    free(student);
}
