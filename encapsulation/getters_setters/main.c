#include <stdio.h>
#include "score.h"

int main() {
    int initial_points, new_points;
    scanf("%d", &initial_points);
    scanf("%d", &new_points);
    
    // Create a Score with initial_points
    Score *score = create_score(initial_points);
    // Print the initial value using the getter
    // Format: "Initial: {points}"
    printf("Initial: %d\n", score_get_points(score));
    // Update the score using the setter with new_points
    score_set_points(score, new_points);

    // Print the updated value using the getter
    // Format: "Updated: {points}"
    printf("Updated: %d\n", score_get_points(score));

    // Free the score and print "Freed"
    free_score(score);
    printf("Freed\n");

    return 0;
}
