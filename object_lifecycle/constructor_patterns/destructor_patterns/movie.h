#ifndef MOVIE_H
#define MOVIE_H

// Define the Movie struct with:
// - char *title (dynamically allocated string)
// - int year
typedef struct Movie {
    char *title;
    int year;
} Movie;
// Declare the constructor function
Movie *create_movie(const char *title, int year);

// Declare the destructor function
void free_movie(Movie *movie);

#endif
