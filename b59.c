#include <stdio.h>

void main(){
    int arr1[10], arr2[10];
    int x;

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
        x = arr1[k];
        arr1[k] = arr2[k];
        arr2[k] = x;
    }
    
    printf("\nSwapped array1: ");
    for (int l=0;l<10;l++){
        if (l<9){
            printf("%d,", arr1[l]);       
        }
        else{
            printf("%d", arr1[l]);
        }
    }
    printf("\nSwapped array2: ");
    for (int m=0; m<10; m++){ 
        if (m<9){
            printf("%d,", arr2[m]);       
        }
        else{
            printf("%d", arr2[m]);
        }
    }
    printf("\n");
}
