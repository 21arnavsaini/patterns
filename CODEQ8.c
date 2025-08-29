//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;

    // Input
    printf("Input a natural number: ");
    scanf("%d", &n);

    // Calculation using formula
    sum = n * (n + 1) / 2;

    // Output
    printf("Sum=%d\n", sum);

    return 0;
}