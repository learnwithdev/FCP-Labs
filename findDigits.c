#include <stdio.h>

void main(){
    int count;
    int a=0;
    
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int n1 = n;
    int n2 = n;
    int i=0;
    
    while(n2>0){
        a++;
        n2 /= 10;
    }
    int rem[a];
    
    while (n1!=0){
        rem[i] = n1%10;
        n1 /= 10;
        i++;
    }
    for (int j=0; j<a; j++){
        if (n%rem[j]==0){
            count++;
        }
    }
    printf("The number of digits in %d which exactly divides %d are:  %d", n, n, count);
}