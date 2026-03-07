#include <stdio.h>
#include <string.h>

// TODO: Write your extractWord function here
// Takes a char* sentence, an integer startIndex, and a char* word parameter
// Returns an integer representing the index after the extracted word
// Extracts a single word starting from startIndex until a space or null terminator is found
// Stores the extracted word in the word parameter
// Adds a null terminator to complete the extracted word
int extractWord(const char* sentence, int startIndex, char* word) {
    int wordIndex = 0;
    int i = startIndex;
    
    // Skip leading spaces
    while (sentence[i] == ' ') {
        i++;
    }
    
    // Extract characters until a space or null terminator is found
    while (sentence[i] != ' ' && sentence[i] != '\0') {
        word[wordIndex++] = sentence[i++];
    }
    
    word[wordIndex] = '\0'; // Null-terminate the extracted word
    return i; // Return the index after the extracted word
}

// TODO: Write a function named countWordOccurrences that:
// Takes two char* parameters: sentence and targetWord
// Returns an integer representing the number of times the target word appears in the sentence
// Uses a loop to process the sentence character by character
// Identifies word boundaries using spaces as delimiters
// Extracts each word from the sentence and compares it with the target word using strcmp()
// Counts exact matches (case-sensitive comparison)
int countWordOccurrences(const char* sentence, const char* targetWord) {
    int count = 0;
    char word[50]; // Buffer to hold each extracted word
    int wordIndex = 0; // Index for the current word
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            // Add character to the current word
            word[wordIndex++] = sentence[i];
        } else {
            // End of a word, null-terminate it
            if (wordIndex > 0) {
                word[wordIndex] = '\0'; // Null-terminate the word
                // Compare with targetWord
                if (strcmp(word, targetWord) == 0) {
                    count++;
                }
                wordIndex = 0; // Reset for the next word
            }
        }
    }
    
    // Check for the last word in the sentence if it exists
    if (wordIndex > 0) {
        word[wordIndex] = '\0'; // Null-terminate the last word
        if (strcmp(word, targetWord) == 0) {
            count++;
        }
    }
    
    return count;
}


// TODO: Write your analyzeText function here
// Takes a char* sentence parameter
// Returns an integer representing the total number of words in the sentence
// Counts words by identifying spaces as separators
// Handles multiple consecutive spaces correctly (treats them as single separators)
int analyzeText(const char* sentence) {
    int wordCount = 0;
    int inWord = 0; // Flag to indicate if we are currently in a word
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') { 
            if (!inWord) {
                wordCount++; // Start of a new word
                inWord = 1; // Set flag to indicate we are in a word
            }
        } else {
            inWord = 0; // End of a word
        }
    }
    
    return wordCount;
}
int main() {
    char inputSentence[200];
    char searchWord[50];
    
    // Read input sentence
    fgets(inputSentence, sizeof(inputSentence), stdin);
    // Remove newline character if present
    inputSentence[strcspn(inputSentence, "\n")] = '\0';
    
    // Read search word
    scanf("%s", searchWord);
    
    // TODO: Write your code below
    // Call analyzeText function and store total word count
    int totalWords = analyzeText(inputSentence);
    // Call countWordOccurrences function and store occurrences
    int occurrences = countWordOccurrences(inputSentence, searchWord);
    // Calculate frequency percentage
    double frequency = (totalWords > 0) ? ((double)occurrences / totalWords) * 100 : 0.0;
    // Determine frequency category based on frequency percentage
    printf("Total words: %d\n", totalWords);
    printf("Occurrences of '%s': %d\n", searchWord, occurrences);
    printf("Frequency: %.1f%%\n", frequency);
    if (frequency == 0) {
        printf("Category: Not found\n");
    } else if (frequency > 0.0 && frequency < 20.0) {
        printf("Category: Rare\n");
    } else if (frequency >= 20.0 && frequency <= 50.0) {
        printf("Category: Common\n");
    } else {
        printf("Category: Frequent\n");
    }
    
    // Output results in the required format

    
    return 0;
}