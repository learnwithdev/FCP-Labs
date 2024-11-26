#include <stdio.h>
#include <string.h>

/*Here, Nos. of Jars represent size of an array*/
void main(){
    int a,b,c,sum;
    int avg;
    int size;
    int M; //Operations to perform
    printf("Enter the number of Jars you want: ");
    scanf("%d", &size);
    
    int jars[size];
    
    printf("Enter the number of operations you wanna perform: ");
    scanf("%d", &M);
    
    for (int i=1; i<=M; i++){
        printf("Enter a couple of jar indices: ");
        scanf("%d,%d", &a,&b);
        printf("Enter the number of candies you wanna put: ");
        scanf("%d", &c);
        if (b==a+1){
            jars[a-1] += c;
            jars[b-1] += c;
        }
        else{
            for (int k=a-1; k<b; k++){
                jars[k] += c;
            }
        }
    }
    for (int j=0; j<size; j++){
        sum += jars[j];
    }
    avg = sum/size;
    printf("\nThe average number of candies are: %d", avg);
}