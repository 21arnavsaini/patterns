#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 5; i++) {
        char ch = 'E' - i;  // Start from E and go backward
        for(j = 0; j <= i; j++) {
            printf("%c ", ch + j);  // Print increasing letters from ch
        }
        printf("\n");
    }
    return 0;
}
