#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact* createContact() {
    struct Contact* contactPtr = (struct Contact*)malloc(sizeof(struct Contact));
    
    if (contactPtr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';
    contactPtr->age = 0;
    
    return contactPtr;
}

void displayContact(const struct Contact *contactPtr) {
    if (contactPtr == NULL) {
        printf("Invalid contact pointer\n");
    }
    
    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d\n", contactPtr->age);
    // printf("Name length: %d characters\n", (int)strlen(contactPtr->name));
    // if (contactPtr->age <= 12) {
    //     printf("Generation: Child\n");
    // } else if (contactPtr->age <= 19) {
    //     printf("Generation: Teenager\n");
    // } else if (contactPtr->age <= 39) {
    //     printf("Generation: Young Adult\n");
    // } else if (contactPtr->age <= 59) {
    //     printf("Generation: Middle-aged Adult\n");
    // } else {
    //     printf("Generation: Senior\n");
    // }
    // if (strchr(contactPtr->email, '@') == NULL) {
    //     printf("Email format: Invalid\n");
    // } else {
    //     printf("Email format: Valid\n");
    // }
}

struct Contact* populateContact(struct Contact* contactPtr) {
    if (contactPtr == NULL) {
        printf("Invalid contact pointer\n");
        return NULL;
    }
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", contactPtr->name);
    printf("Enter phone: ");
    scanf("%s", contactPtr->phone);
    printf("Enter email: ");
    scanf("%s", contactPtr->email);
    printf("Enter age: ");
    scanf("%d", &contactPtr->age);
    if (contactPtr->age < 0 || contactPtr->age > 120) {
        printf("Invalid age entered\n");
        return NULL;
    }
    printf("--- Initial Contact ---\n");
    displayContact(contactPtr);
    // if (strlen(contactPtr->phone) < 10) {
    //     printf("Invalid phone number\n");
    //     return NULL;
    // }
    
    return contactPtr;
}

void updateContact(struct Contact* contactPtr) {
    if (contactPtr == NULL) {
        printf("Invalid contact pointer\n");
        return;
    }
    int edit_choice;
    printf("--- Updating Contact ---\n");
    printf("What would you like to update?\n");
    printf("1. Name\n");
    printf("2. Phone\n");
    printf("3. Email\n");
    printf("4. Age\n");
    printf("Enter choice (1-4): \n");
    scanf("%d", &edit_choice);
    if (edit_choice == 1) {
        printf("Enter new name: \n");
        char name[50];
        scanf("%s",name);
        strcpy(contactPtr->name, name);
    } else if (edit_choice == 2) {
        printf("Enter new phone: \n");
        char phone[20];
        scanf("%s", phone);
        strcpy(contactPtr->phone, phone);
    } else if (edit_choice == 3) {
        printf("Enter new email: \n");
        char email[40];
        scanf("%s", email);
        strcpy(contactPtr->email, email);
    } else if (edit_choice == 4) {
        printf("Enter new age: \n");
        scanf("%d", &contactPtr->age);
        if (contactPtr->age < 0 || contactPtr->age > 120) {
            printf("Invalid age entered\n");
            return;
        }
    } else {
        printf("Invalid choice\n");
    }

    // if (strlen(contactPtr->phone) < 10) {
    //     printf("Invalid phone number\n");
    //     return;
    // }
    
    printf("Contact updated successfully\n");
    printf("--- Updated Contact ---\n");
}

int main() {
    struct Contact* newContact;
    
    newContact = createContact();
    // if (newContact == NULL) {
    //     printf("Failed to create contact\n");
    //     free(newContact);
    //     return 1;
    // }
    populateContact(newContact);
    // if (newContact == NULL) {
    //     printf("Failed to populate contact\n");
    //     free(newContact);
    //     return 1;
    // }
    updateContact(newContact);
    displayContact(newContact);
    free(newContact);
    printf("Contact management completed\n");
    
    return 0;
}