#include <stdio.h>
#include <string.h>
#include "types.h"

int main() {
    // Read input
    char name[50];
    int age;
    int employee_id;
    
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline
    scanf("%d", &age);
    scanf("%d", &employee_id);
    
    // Create an Employee variable
    Employee employee;
    
    // Populate the embedded person's name and age
    // Hint: Use strcpy for the name, access with employee.person.name
    strcpy(employee.person.name, name);
    employee.person.age = age;
    // Set the employee_id
    employee.employee_id = employee_id;
    // Call print_employee with a pointer to your employee
    print_employee(&employee);
    return 0;
}
