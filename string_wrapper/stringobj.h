// Add include guards using STRINGOBJ_H
#ifndef STRINGOBJ_H
#define STRINGOBJ_H

// Define the StringObject struct with a char *text member
typedef struct StringObject {
    char *text;
} StringObject;

// Declare create_string function
// Takes const char * and returns StringObject *
StringObject *create_string(const char *text);
// Declare print_string function
// Takes const StringObject * and displays the text
void print_string(const StringObject *obj);

// Declare free_string function
// Takes StringObject * and frees all memory
void free_string(StringObject *obj);

// End include guards
#endif
