#include <stdio.h>

void main(){
    int arr[10];
    int k=0, j=0, l=0;

    for (int i=0; i<10; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d", &arr[i]);

        if (arr[i]>0){
            k++;
        }
        else if (arr[i]==0){
            j++;
        }
        else{
            l++;
        }
    }
    printf("\n");
    printf("Total number of positive elements: %d\n", k);
    printf("Total number of negative elements: %d\n", l);
    printf("Total number of zero elements: %d\n", j);
}
