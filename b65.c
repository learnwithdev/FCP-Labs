#include <stdio.h>

void main(){
    int mat1[3][3];
    int mat2[3][3];

// Taking user input as a Matrix
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("Enter the elements of row %d: ", (i+1));
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    printf("Before transpose: \n");
    for (int k=0;k<3;k++){
        for (int l=0;l<3;l++){
            printf("%d ", mat1[k][l]);
        }
        printf("\n");
    }

    for (int m=0;m<3;m++){
        for (int n=0;n<3;n++){
            mat2[m][n] = mat1[n][m];
            }
        }
    printf("After transpose: \n");
    for (int k=0;k<3;k++){
        for (int l=0;l<3;l++){
            printf("%d ", mat2[k][l]);
            }
        printf("\n");
        }
}
