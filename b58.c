#include <stdio.h>

void main(){
    int arr1[10], arr2[10];
    int sum[10];

    for (int i=0; i<10; i++){
        printf("Enter element %d for arr1: ", (i+1));
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for (int j=0; j<10; j++){
        printf("Enter element %d for arr2: ", (j+1));
        scanf("%d", &arr2[j]);
    }
    
    for (int k=0; k<10;k++){
        sum[k] = arr1[k] + arr2[k];
    }

    printf("\nThe sum array is: ");
    for (int l=0;l<10;l++){
        if (l<9){
            printf("%d,", sum[l]);
        }
        else{
            printf("%d", sum[l]);
        }
    }
    printf("\n");

}
