//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user for three numbers
    printf("Enter three numbers: ");
    // Read the three numbers from standard input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if the first number is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } 
    // Check if the second number is the largest
    else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } 
    // If neither of the above, the third number is the largest
    else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}
