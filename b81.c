#include <stdio.h>

int f_prime(int n) {
    int count = 0;
    for (int i=2; i<=n; i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==1){
        return 1;
    }
    else{
        return 0;
    }
}

void main(){
    int number;
    int res;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    res = f_prime(number);
    printf("\n%d", res);
}