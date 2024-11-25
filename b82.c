#include <stdio.h>
int f_fact(int n){
    if (n>=2){
        int res = n;
        res *= f_fact(n-1);
        return res;
    }
}

int f_ncr(int n, int r) {
    float ncr;
    
    if (r==0 || n==0){
        return 1;
    }
    
    ncr = f_fact(n)/(f_fact(r)*f_fact(n-r));
    return ncr;
}

void main(){
    int res1,number1, number2; 
    
    printf("Enter N & R: ");
    scanf("%d, %d", &number1, &number2);
    
    res1 = f_ncr(number1,  number2);
    printf("\n%d", res1);
}