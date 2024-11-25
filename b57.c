#include <stdio.h>

void main(){
    int arr[10];
    int k = 0,j;
    int max,sec_max;

    for (int i=0; i<10; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    max = arr[0];

    for (j=1;j<10;j++){
        if (arr[j]>max){
            sec_max = max;
            max = arr[j];
        }
    }
    printf("The max element: %d\n", max);
    printf("The second max element: %d\n", sec_max);
}
