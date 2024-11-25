#include <stdio.h>

void main(){
    int arr[7];
    int b;
    int c=0;

// Reading votes
    for (int a=0;a<7;a++){
        printf("Enter you vote here: ");
        scanf("%d", &arr[a]);
    }
//Counting votes
    for (int i=0;i<7;i++){
        if (arr[i]>=6){
            c++;
        }
        int a=1;
        for (int j=i+1;j<7;j++){
            if (arr[i] == arr[j] && arr[i]!=0 && arr[i]<6){
                b = i;                
                a++;
                arr[j] = '\0';
            }
        }    
        if (a!=1){
            printf("Candidate %d has %d votes\n", arr[b], a);
        }
    }
    printf("Election has %d spoiled ballots\n",c);
}
