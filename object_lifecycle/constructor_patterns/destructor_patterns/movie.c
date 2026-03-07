#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

// Implement create_movie function
// - Allocate memory for the Movie struct
// - Allocate memory for the title string (don't forget null terminator)
// - Copy the title string
// - Set the year
// - Return the pointer to the new Movie
Movie *create_movie(const char *title, const int year) {
    Movie *movie = malloc(sizeof(Movie));
    movie->title = malloc(strlen(title) + 1);
    strcpy(movie->title, title);
    movie->year = year;
    return movie;
}

// Implement free_movie function
// - Add NULL check for safety
// - Free memory in REVERSE order of allocation:
//   1. First free the title string
//   2. Then free the struct itself
void free_movie(Movie *movie) {
    if (movie == NULL) {
        return;
    }
    free(movie->title);
    free(movie);
}
