#include <stdio.h>

void main(){
    int k;
    int arr1[5] = {2,3,1,7,5};
    int arr2[5];
    
    printf("The bubble sorted array: ");

    for (int l=0;l<5;l++){
        for (int i=0;i<4;i++){
            for (int j=i+1;j<=i+1;j++){
                if (arr1[i]>arr1[j]){
                    k = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = k;
                } 
            }
        }
    }
    for (int m=0;m<5;m++){
        printf("%d,", arr1[m]);
    }
    printf("\n");
}
