#include <stdio.h>

void main(){
    int mat1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int mat2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int mat3[3][3];

    printf("Matrix 1: \n");
    for (int k=0;k<3;k++){
        for (int l=0;l<3;l++){
            printf("%d ", mat1[k][l]);
        }
        printf("\n");
    }

    printf("Matrix 2: \n");
    for (int k=0;k<3;k++){
        for (int l=0;l<3;l++){
            printf("%d ", mat2[k][l]);
            }
        printf("\n");
    }

    for (int m=0;m<3;m++){
        for (int n=0;n<3;n++){
            mat3[m][n] = mat1[m][n]*mat2[m][n];
        }
    }

    printf("Multiplied Matrix : \n");
    for (int a=0;a<3;a++){
        for (int b=0;b<3;b++){
            printf("%d ", mat3[a][b]);
        }
        printf("\n");
    }
}
