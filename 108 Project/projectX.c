#include <stdio.h>

// Function prototypes
void convertLength();
void convertTemperature();
void convertWeight();

int main() {
    int choice;

    while (1) {
        printf("Measurement Converter\n");
        printf("1. Length\n");
        printf("2. Temperature\n");
        printf("3. Weight\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertTemperature();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void convertLength() {
    double meters;
    printf("Enter length in meters: ");
    scanf("%lf", &meters);

    printf("Kilometers: %.2lf km\n", meters / 1000);
    printf("Miles: %.2lf miles\n", meters / 1609.344);
    printf("Feet: %.2lf ft\n", meters * 3.28084);
}

void convertTemperature() {
    double celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    printf("Fahrenheit: %.2lf °F\n", (celsius * 9/5) + 32);
}

void convertWeight() {
    double kilograms;
    printf("Enter weight in kilograms: ");
    scanf("%lf", &kilograms);

    printf("Pounds: %.2lf lbs\n", kilograms * 2.20462);
}
