//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;

    // Input
    printf("Input radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
