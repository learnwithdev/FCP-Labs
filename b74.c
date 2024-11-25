#include <stdio.h>

void main(){
    int k;
    int arr1[5] = {2,3,1,7,5};
    int arr2[5] = {8,6,7,5,3};
    int arr3[10];
    
    for (int a=0;a<10;a++){
        if (a<5){
            arr3[a] = arr1[a];
        }
        if(a>=5){
            arr3[a] = arr2[a-5];
        }
    }
    
    //printf("The selection sorted array: ");
    for (int i=0;i<10;i++){
        for (int j=i;j<10;j++){
            if (arr3[i]>arr3[j]){
                k = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = k;
            }
        }
        printf("%d,",arr3[i]);
    }
    printf("\b");
    printf("\n");
}
