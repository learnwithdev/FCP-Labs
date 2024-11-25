#include <stdio.h>

void main(){
    int i,j,k,l,m;
    k=0;

    for (i=1;i<=9;i+=2){    //Here, odd number sequence 1,3,5,... implies line 1,2,3,...
        printf("         ");
        
        l=3;
        while (l<=i){
            printf("\b");
            l+=2;
        }
        if (i>1){
            k++;
        }
        for (j=1;j<=i;j++){
            if (j<i-k){
                printf("%d",j);
            }
            if (j==i-k){
                m=j;
                while (m>0){
                    printf("%d", m);
                    m--;
                }
            }
        }   
        printf("\n");
    }
}

//        1
//       121
//      12321
//     1234321
