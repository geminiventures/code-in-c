#include <stdio.h>

// TODO: Define the WeatherCondition enum here
enum WeatherCondition {
    SUNNY,
    CLOUDY,
    RAINY,
    STORMY,
    SNOWY   
};
// TODO: Implement the getWeatherAdvice function here
void getWeatherAdvice(enum WeatherCondition weather) {
    switch (weather) {
        case SUNNY:
            printf("Perfect day for outdoor activities!\n");
            break;
        case CLOUDY:
            printf("Good day for a walk, no sun protection needed.\n");
            break;
        case RAINY:
            printf("Don't forget your umbrella!\n");
            break;
        case STORMY:
            printf("Stay indoors and avoid travel.\n");
            break;
        case SNOWY:
            printf("Drive carefully and dress warmly.\n");
            break;
        default:
            // Handle invalid input if necessary
            break;
    }
}
// TODO: Implement the getActivitySuggestion function here
void getActivitySuggestion(enum WeatherCondition weather) {
    switch (weather) {
        case SUNNY:
            printf("Suggested activity: Beach or hiking\n");
            break;
        case CLOUDY:
            printf("Suggested activity: Photography or gardening\n");
            break;
        case RAINY:
            printf("Suggested activity: Reading or indoor games\n");
            break;
        case STORMY:
            printf("Suggested activity: Movie marathon\n");
            break;
        case SNOWY:
            printf("Suggested activity: Skiing or hot cocoa\n");
            break;
        default:
            // Handle invalid input if necessary
            break;
    }
}
int main() {
    // Read input
    int weatherInput;
    scanf("%d", &weatherInput);
    
    // TODO: Declare currentWeather variable and assign enum value based on input
    enum WeatherCondition currentWeather;
    currentWeather = (enum WeatherCondition)weatherInput;
    // TODO: Print current weather condition in format "Current weather: [numeric_value]"
    printf("Current weather: %d\n", currentWeather);
    // TODO: Call getWeatherAdvice function
    getWeatherAdvice(currentWeather);
    // TODO: Call getActivitySuggestion function
    getActivitySuggestion(currentWeather);
    
    return 0;
}