#include <stdio.h>
#include "stringobj.h"

int main() {
    char input[256];
    fgets(input, sizeof(input), stdin);
    
    // Remove newline if present
    int len = 0;
    while (input[len] != '\0') len++;
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    
    // Create a StringObject with the input text
    StringObject *obj = create_string(input);
    // Print the string using print_string
    print_string(obj);

    // Free the StringObject using free_string
    free_string(obj);

    // Print "Freed" to confirm cleanup
    printf("Freed\n");

    return 0;
}
