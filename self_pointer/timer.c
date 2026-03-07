#include "timer.h"

// TODO: Implement timer_tick function
// It should accept a Timer *self and an int amount
// Add the amount to the timer's seconds
void timer_tick(struct Timer *self, int amount) {
    self->seconds += amount;
}
// TODO: Implement timer_reset function
// It should accept a Timer *self
// Set its seconds to zero
void timer_reset(struct Timer *self) {
    self->seconds = 0;
}