#include <stdio.h>

int main() {
    int i, j;
    for(i =1; i <= 9; i++)       
 { int y = i; if(i>5) y=10-i ; 
         for(j = 1; j <=y; j++) {
            printf("*");
        }
printf("\n");
    }
    return 0;
}
