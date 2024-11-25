#include <stdio.h>

void main(){
    char i,j,k;
    
    for (i=1;i<=5;i++){
        printf("\n");
        k=65;
        for (j=1;j<=i;j++){
             printf("%c", k);
             k++;
         }
     
    }
     printf("\n");
}
