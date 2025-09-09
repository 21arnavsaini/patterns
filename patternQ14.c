#include <stdio.h>

int main() {
    int i, j;
    int num =1;
    for(i =0; i <= 5; i++)       
 {  
    for(char ch = 'A';ch<='A'+i;ch++)
      printf("%c",ch);    
      printf("\n");
 }
    return 0;
}