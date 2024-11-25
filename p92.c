#include <stdio.h>
#include <string.h>

void main(){
    int arr[6] = {1,2,3,7,4,5};
    int *max = &arr[0];
    
    for (int i=1;i<6;i++){
        if (*max<arr[i]){
            *max = arr[i];
        }
    }
    printf("The Max. element in the array: %d", *max);
}
