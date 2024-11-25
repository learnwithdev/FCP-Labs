#include <stdio.h>

void main(){
    int arr[9] = {1,1,1,1,1,1,1,1,1};
    int b;

    for (int i=0;i<9;i++){
        int a=1;
        for (int j=i+1;j<9;j++){
            if (arr[i] == arr[j] && arr[i]!=0){
                b = i;                
                a++;
                arr[j] = '\0';
            }
        }
        if (a!=1){
            printf("Element %d has repeated %d times\n", arr[b], a);
        }
    }
}
