#include <stdio.h>

void main(){
    //{rollNo,sub1,sub2,sub3}
    int total,rn,k,rn1;
    int max,arr_tot[10];
    int data[10][4] = { 
        {1,86,90,77},
        {2,35,65,77},
        {3,78,86,48},
        {4,93,74,75},
        {5,76,54,87},
        {6,65,87,43},
        {7,87,54,76},
        {8,65,87,34},
        {9,87,98,79},
        {10,86,95,92}
    };

    printf("Total marks: \n");
    for (int i=0;i<10;i++){
        total=0;
        for (int j=1;j<4;j++){
            total += data[i][j];
        }
        arr_tot[i] = total;
        printf("Roll No. %d: %d\n",(i+1),(total));
    }
    printf("\n");
    
    printf("Highest marks scored in subjects: \n");
    for (int u=1;u<4;u++){
        max=data[0][u];
        rn = 1;
        for (int v=1;v<10;v++){
            if (max<data[v][u]){
                max=data[v][u];
                rn = (v+1); 
            }
        }
        printf("In subject %d, Roll No. %d: %d\n",u,rn,max);
    }
    printf("\n");

    printf("Student who scored Highest total marks: \n");
    
    k = arr_tot[0];
    rn1 = 1;
    for (int w=1;w<10;w++){
        if (k<arr_tot[w]){
            k=arr_tot[w];
            rn1 = w+1;
        }
    }
    printf("Roll No. %d: %d\n", rn1,k);
}

