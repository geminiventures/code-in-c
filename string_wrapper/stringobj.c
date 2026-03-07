#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringobj.h"

// Implement create_string
// 1. Allocate memory for StringObject struct
// 2. Allocate memory for text (strlen + 1 for null terminator)
// 3. Copy the input string to the allocated text buffer
// 4. Return the pointer to the new StringObject
StringObject *create_string(const char *text) {
    StringObject *obj = malloc(sizeof(StringObject));
    obj->text = malloc(strlen(text) + 1);
    strcpy(obj->text, text);
    return obj;
}

// Implement print_string
// Print in format: Text: {text}
void print_string(const StringObject *obj) {
    printf("Text: %s\n", obj->text);
}

// Implement free_string
// 1. Check if pointer is NULL for safety
// 2. Free the text buffer first
// 3. Free the struct itself
void free_string(StringObject *obj) {
    if (obj == NULL) {
        return;
    }
    free(obj->text);
    free(obj);
}
