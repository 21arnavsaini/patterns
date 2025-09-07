<<<<<<< HEAD
=======
// Voting and Driving eligibilty code
>>>>>>> 2a4f49640a57514f1390d0c358f827dbac7506ab
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid input. Please enter a valid age.\n");
        return 1;
    }

    if (age >= 18) {
        printf("You are eligible to vote.\n");
        printf("You are eligible to drive.\n");
    } else {
        printf("You are not eligible to vote.\n");
        printf("You are not eligible to drive.\n");
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 2a4f49640a57514f1390d0c358f827dbac7506ab
