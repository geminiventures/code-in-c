#ifndef STUDENT_H
#define STUDENT_H

// Define the Student struct with:
// - char *name (dynamically allocated string)
// - int grade
typedef struct Student {
    char *name;
    int grade;
} Student;

// Declare the following functions:
// - create_student: constructor that takes a name and grade, returns Student*
// - clone_student: takes const Student*, returns a new independent copy
// - free_student: destructor that frees all allocated memory
Student *create_student(char *name, int grade);
Student *clone_student(const Student *original);
void free_student(Student *student);
#endif
