#include <stdio.h>
#include "timer.h"

int main() {
    int seconds;
    scanf("%d", &seconds);
    
    // Create a timer with the provided seconds value
    Timer *t = create_timer(seconds);
    // Print "Timer created"
    printf("Timer created\n");
    // Free the timer
    free_timer(t);
    // Print "Timer freed"
    printf("Timer freed\n");
    return 0;
}
