#include <stdio.h>

void main(){
    int i,j,k;

    for (i=1;i<=7;i+=2){
        printf("\n");
        printf("              ");
        k=2;
        while (k<i){
            printf("\b");
            k+=2;
        }
        for (j=1;j<=i;j++){
            printf("*");
            }
        }
    //printf("\n");

    for (i=5;i>=0;i-=2){
        printf("\n");
        printf("           ");
        k=5;
        while (k>=i){
            printf(" ");
            k-=2;
        }
        for (j=1;j<=i;j++){
            printf("*");
        }
    } 
    printf("\n");
}

