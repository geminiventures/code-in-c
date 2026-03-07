/* When you assign one struct to another in C, you get a shallow copy—all fields are copied byte-for-byte.
This works fine for simple values like integers, but creates a problem with pointers:
both structs end up pointing to the same memory.

typedef struct {
    char *name;
    int age;
} Person;

Person alice = {"Alice", 30};
Person copy = alice;  // Shallow copy!
^^^ Both alice.name and copy.name point to the SAME string

If you free one, the other becomes invalid. If you modify the string through one, both see the change.
This is rarely what you want.
A deep copy allocates new memory for pointer members and copies the actual data:

Person *clone_person(const Person *original) {
    Person *copy = malloc(sizeof(Person));
    copy->name = malloc(strlen(original->name) + 1);
    strcpy(copy->name, original->name);
    copy->age = original->age;
    return copy;
}

Now each object owns its own string. You can modify or free one without affecting the other. The pattern is
straightforward: for each pointer member, allocate fresh memory and copy the contents—not just the address.
*/
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main() {
    char name[100];
    int grade;

    // Read input
    scanf("%s", name);
    scanf("%d", &grade);

    // Create a student with the provided name and grade
    Student *student = create_student(name, grade);

    // Create a clone of the student
    Student *clone = clone_student(student);

    // Print the original student's information
    // Format: "Original: {name}, Grade: {grade}"
    printf("Original: %s, Grade: %d\n", student->name, student->grade);

    // Print the clone's information
    // Format: "Clone: {name}, Grade: {grade}"
    printf("Clone: %s, Grade: %d\n", clone->name, clone->grade);

    // Free both students
    free_student(student);
    free_student(clone);

    // Print confirmation
    printf("Both freed\n");

    return 0;
}
