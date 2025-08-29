//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);
    
    // Perform calculations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;  // Integer division

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}