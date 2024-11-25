#include <stdio.h>

void main(){
    int k;
    int arr1[5] = {2,3,1,7,5};
    
    printf("The selection sorted array: ");
    for (int i=0;i<5;i++){
        for (int j=i;j<5;j++){
            if (arr1[i]>arr1[j]){
                k = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = k;
            }
        }
        printf("%d,",arr1[i]);
    }
    printf("\b");
    printf("\n");
}
