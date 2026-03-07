#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Employee struct here
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};
// Implement fillEmployeeData function here
void fillEmployeeData(struct Employee *e) {
    int id, yearsOfService;
    float salary;
    scanf("%d", &id);
    scanf("%s", e->name);
    scanf("%s", e->department);
    scanf("%f", &salary);
    scanf("%d", &yearsOfService);
    e->id = id;
    e->yearsOfService = yearsOfService;
    e->salary = salary;

    if (e->yearsOfService >= 5) {
        e->salary *= 1.10;
    } else {
        e->salary *= 1.05;       
    }
}
// Implement displayEmployee function here
void displayEmployee(struct Employee *e) {
    printf("Employee Details:\n");
    printf("ID: %d\n",e->id);
    printf("Name: %s\n",e->name);
    printf("Department: %s\n",e->department);
    printf("Salary: %.2f\n",e->salary);
    printf("Years of Service: %d\n",e->yearsOfService);
}
// Implement promoteEmployee function here
void promoteEmployee(struct Employee *e) {
    e->salary *= 1.15;
    e->yearsOfService += 1;
    printf("Employee promoted successfully!\n");
}
int main() {
    // Declare empPtr and allocate memory
    struct Employee *empPtr = malloc(sizeof(struct Employee));
    // Check if memory allocation was successful
    if (empPtr == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    } else {
        printf("Memory allocated successfully\n");
    }
    // Fill employee data, display initial data, promote, and display after promotion
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
    free(empPtr);
    printf("Memory freed successfully\n");
    // Free memory and print success message
    
    return 0;
}