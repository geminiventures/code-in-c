#include <stdlib.h>
#include "score.h"

// Define the actual struct Score with a single member: int points
typedef struct Score {
    int points;
} Score;

// Implement create_score
// Allocate memory for Score, set initial points, return pointer
Score *create_score(int points) {
    Score *score = malloc(sizeof(Score));
    if (score == NULL) {
        return NULL;
    }
    score->points = points;
    return score;
}

// Implement free_score
// Free the allocated memory
void free_score(Score *score) {
    free(score);
}

// Implement score_get_points (getter)
// Return the points value from the Score struct
// Remember: parameter should be const Score *
int score_get_points(const Score *score) {
    return score->points;
}

// Implement score_set_points (setter)
// Update the points value in the Score struct
void score_set_points(Score *score, int points) {
    score->points = points;
}
