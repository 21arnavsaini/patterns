//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}