#include <stdio.h>

void main(){
    int arr[10];
    int sum=0;

    for (int i=0; i<10; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of elements in your array: %d\n", sum);

}    

