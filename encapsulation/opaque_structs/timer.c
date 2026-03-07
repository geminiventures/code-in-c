#include "timer.h"
#include <stdlib.h>

// Define the actual struct Timer here
// It should have two members:
// - int seconds
// - int running (1 for running, 0 for stopped)
typedef struct Timer {
    int seconds;
    int running;
} Timer;
// Implement create_timer function
// - Allocate memory for the struct
// - Initialize seconds with the provided value
// - Set running to 1
// - Return the pointer
Timer *create_timer(int seconds) {
    Timer *t = malloc(sizeof(Timer));
    t->seconds = seconds;
    t->running = 1;
    return t;
}
// Implement free_timer function
// - Free the allocated memory
void free_timer(Timer *timer) {
    if (timer == NULL) {
        return;
    }
    free(timer);
}