//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Real and same roots
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n");
    }

    return 0;
}