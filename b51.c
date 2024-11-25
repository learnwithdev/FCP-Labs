#include <stdio.h>
//output
//10000
//01000
//...

void main(){
    int i,j,k;

    for (i=1; i<=5; i++){
        for (j=1; j<=5; j++){
            if (j==i){
                printf("1");
            }
            else{
               printf("0") ;
            }
        }
        printf("\n");
    }
}
