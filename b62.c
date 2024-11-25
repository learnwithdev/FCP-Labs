#include <stdio.h>

void main(){
    int arr[10]
    int x;

    for (int i=0; i<10; i++){
        printf("Enter element %d for arr1: ", (i+1));
        scanf("%d", &arr[i]);
    }
    for (int j=9;j>=0;j--){
        printf("%d,", arr[j]);
    }
    printf("\n");
}
 
