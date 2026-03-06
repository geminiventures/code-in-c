#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Write your concatenateStrings function here
char* concatenateStrings(char* str1, char* str2) {
    //calculate the total memory needed for both strings and the null terminator
    int totalLength = strlen(str1) + strlen(str2) + 1;
    //allocate memory for the concatenated string
    char* concatPtr = (char*)malloc(totalLength * sizeof(char));
    //check if memory allocation was successful
    if (concatPtr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    //use strcpy copy the first string to the allocated memory
    strcpy(concatPtr, str1);
    //use strcat to append the second string to the allocated memory
    strcat(concatPtr, str2);
    //return the pointer to the concatenated string
    return concatPtr;
}
// TODO: Write your processText function that takes 3 char* parameters, word1, word2, and separator
char* processText(char* word1, char* word2, char* separator) {
    // Concatenate the first word and the separator
    char* temp = concatenateStrings(word1, separator);
    // Concatenate the result with the second word
    char* result = concatenateStrings(temp, word2);
    // Free the memory allocated for the temporary string
    free(temp);
    // Return the final concatenated string
    return result;
}

int main() {
    // Read input
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
    
    // TODO: Write your code below
    // Call processText function and handle the result
    char* concatenated_string = processText(firstWord, secondWord, connector);
    if (concatenated_string == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Print the concatenated string
    printf("Result: %s\n", concatenated_string);
    // calculate and print the length of the concatenated string
    printf("Length: %lu\n", strlen(concatenated_string));
    // Free the memory allocated for the concatenated string
    free(concatenated_string);
    return 0;
}