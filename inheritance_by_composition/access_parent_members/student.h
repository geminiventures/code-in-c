#ifndef STUDENT_H
#define STUDENT_H

// Define the Person struct with:
// - name: character array of 50 characters
// - age: an integer
typedef struct Person {
    char name[50];
    int age;
} Person;

// Define the Student struct with:
// - person: embedded Person struct as first member
// - grade: an integer
typedef struct Student {
    Person person;
    int grade;
} Student;

// Declare the set_person_age function
// Takes a Student* and a new age value (int)
void set_person_age(Student* s, int new_age);
// Declare the print_student function
// Takes a Student* and displays all information
void print_student(const Student* s);
#endif
