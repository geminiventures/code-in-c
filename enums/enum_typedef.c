#include <stdio.h>

// Define the TrafficLight enum here
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Read input
    int input;
    scanf("%d", &input);
    
    // Declare currentLight variable and assign enum value based on input
    enum TrafficLight currentLight;
    if (input == 0) {
        currentLight = RED;
    } else if (input == 1) {
        currentLight = YELLOW;
    } else {
        currentLight = GREEN;
    }
    
    // Print current light status
    if (currentLight == RED) {
        printf("Current light: RED\n");
    } else if (currentLight == YELLOW) {
        printf("Current light: YELLOW\n");
    } else {
        printf("Current light: GREEN\n");
    }
    
    // Print numeric value
    printf("Numeric value: %d\n", currentLight);
    
    // Print action based on current light
    if (currentLight == RED) {
        printf("Action: Stop\n");
    } else if (currentLight == YELLOW) {
        printf("Action: Caution\n");
    } else {
        printf("Action: Go\n");
    }
    
    // Calculate and print next light
    enum TrafficLight nextLight;
    if (currentLight == RED) {
        nextLight = GREEN;
    } else if (currentLight == YELLOW) {
        nextLight = RED;
    } else {
        nextLight = YELLOW;
    }
    
    if (nextLight == RED) {
        printf("Next light: RED\n");
    } else if (nextLight == YELLOW) {
        printf("Next light: YELLOW\n");
    } else {
        printf("Next light: GREEN\n");
    }
    
    return 0;
}