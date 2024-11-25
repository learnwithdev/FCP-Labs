#include <stdio.h>

void main(){
    int arr[10];
    int k = 0, j = 0;

    for (int i=0; i<10; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d", &arr[i]);

        if (arr[i]%2==0){
            k++;
        }
        else{
            j++;
        }
    }
    printf("\n");
    printf("Total number of odd elements: %d\n", j);
    printf("Total number of even elements: %d\n", k);

}
