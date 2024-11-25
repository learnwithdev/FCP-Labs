#include <stdio.h>

void main(){
    int mat[3][3] = {
        {4,8,0},
        {2,9,1},
        {7,8,6}
    };
    int arr_min[3];
    int arr_max[3];
    int min,max,p,q;

//  max[0] = mat[0][0];
    for (int i=0;i<3;i++){
        p = mat[i][0];
        q = mat[i][0];
        for (int j=1;j<3;j++){
            if (p > mat[i][j]){
                //arr_min[i] = mat[i][j];
                p = mat[i][j];
            }
            if (q < mat[i][j]){
                q = mat[i][j];
            }
        }
        arr_min[i] = p;
        arr_max[i] = q;
    }
    
    min = arr_min[0];
    max = arr_max[0];
    for (int a=1;a<3;a++){
        if (min > arr_min[a]){
            min = arr_min[a];
        }
        if (max < arr_max[a]){
            max = arr_max[a];
        }
    } 
    printf("The minimum value: %d\n", min);
    printf("The maximum value: %d\n", max);
}
