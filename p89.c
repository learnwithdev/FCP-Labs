#include <stdio.h>
#include <string.h>

void main(){
    int arr1[5] = {1,2,3,4,5}, arr2[5], l;
    l = sizeof(arr1)/sizeof(arr1[0]);
    int *ptr = &arr1[l-1];
    
    for (int i=0; i<l; i++){
        arr2[i] = *ptr;
        ptr--;
    }
    for (int j=0; j<l; j++){
        printf("\n%d", arr2[j]);
    }
}