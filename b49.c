#include <stdio.h>

void main(){
    int i,j,k;
     for (i=1;i<=5;i++){
         printf("\n");
         printf("      ");
         k=2;
         while (k<i+1){
            printf("\b");
            k++;
         }
         for (j=1;j<=i;j++){
             printf("* ");
         }
     }
     printf("\n");
}
