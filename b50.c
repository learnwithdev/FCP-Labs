#include <stdio.h>

void main(){
    int i,j,k;
    k=65;
    for (i=1;i<=5;i++){
         printf("\n");
         for (j=1;j<=i;j++){
             printf("%c", k);
         }
         k++;    
    }
     printf("\n");
}
