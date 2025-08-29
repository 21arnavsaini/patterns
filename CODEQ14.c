//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline

    // Convert uppercase to lowercase for uniformity
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}