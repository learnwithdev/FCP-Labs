#include <stdio.h>

int n[5];
int f_read_arr(){
    //int n[5];
    for (int i=0; i<5; i++){
        printf("Enter value: ");
        scanf("%d", &n[i]);
    }
}

int f_arr_max(){
    int max = n[0];
    for (int i=1; i<5; i++){
        if (n[i]>max){
            max = n[i];
        }
    }
    return max;
}

void main(){
    int max;
    
    f_read_arr();
    max = f_arr_max();
    printf("Max value in the array: %d", max);
}