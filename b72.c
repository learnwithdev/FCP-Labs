#include <stdio.h>

void main() {
    int arr[5] = {1,2,3,4,5};
    int temp[5], n, l;
    printf("Enter the number of rotations: ");
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        temp[i] = arr[5-n+i];
    }
    for (int j=0;j<(5-n);j++){
        temp[n+j] = arr[j];
    }
    // for (int k=0;k<n;k++){
    //     arr[k] = temp[k];
    // }
    
    for (int m=0;m<5;m++){
        printf("%d\n", temp[m]);
    }
}