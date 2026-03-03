#include <stdio.h>
#include <string.h>

// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

int main() {
    // TODO: Create a Contact variable named person
    struct Contact person;
    // Read input values
    scanf("%s", person.name);
    scanf("%s", person.phone);
    scanf("%s", person.email);
    scanf("%d", &person.age);
    
    // TODO: Write your validation and output code below
    if (person.age < 0 || person.age > 120) {
        printf("Invalid age\n");
        return -1;
    }
    if (strlen(person.phone) < 10) {
        printf("Invalid phone number\n");
        return -1;
    }
    printf("Contact Information:\n");
    printf("Name: %s\nPhone: %s\nEmail: %s\nAge: %d\n", 
        person.name, person.phone, person.email, person.age);
    printf("Name length: %d\n", (int)strlen(person.name));
    if (person.age <= 17) {
        printf("Category: Minor\n");
    }
    else if (person.age < 65) {
        printf("Category: Adult\n");
    } else {
        printf("Category: Senior\n");
    }
    return 0;
}