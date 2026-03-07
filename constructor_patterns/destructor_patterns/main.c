#include <stdio.h>
#include <stdlib.h>
#include "movie.h"

int main() {
    char title[100];
    int year;
    
    // Read input
    scanf("%[^\n]", title);
    scanf("%d", &year);
    
    // Create a movie using create_movie
    Movie *mov = create_movie(title, year);
    // Print the movie information in format:
    // Movie: {title} ({year})
    printf("Movie: %s (%d)\n", mov->title, mov->year);
    // Free the movie using free_movie
    free_movie(mov);

    // Print "Memory freed"
    printf("Memory freed\n");
    return 0;
}
