<<<<<<< HEAD
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 2a4f49640a57514f1390d0c358f827dbac7506ab
