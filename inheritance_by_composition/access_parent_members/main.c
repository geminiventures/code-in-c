#include <stdio.h>
#include <string.h>
#include "student.h"

int main() {
    char name[50];
    int initial_age, grade, new_age;
    
    // Read inputs
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline
    scanf("%d", &initial_age);
    scanf("%d", &grade);
    scanf("%d", &new_age);
    
    // Create a Student variable
    Student student;

    // Initialize all fields of the student
    // - Copy name to the embedded person's name using strcpy
    // - Set the embedded person's age to initial_age
    // - Set the student's grade
    strcpy(student.person.name, name);
    student.person.age = initial_age;
    student.grade = grade;

    // Call set_person_age to update the age to new_age
    set_person_age(&student, new_age);

    // Call print_student to display the result
    print_student(&student);

    return 0;
}
