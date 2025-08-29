//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("After swap: %d %d\n", a, b);

    return 0;
}