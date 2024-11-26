#include <stdio.h>

/*
void fib(int n){
    
    if (n >= 1) {
        printf("Fibonacci Series: 0, 1");
    }
    
    int a = 0, b = 1, next;

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    
    printf("\n");
}*/
void main(){
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);
    
    /*
    if (n >= 1 ){
        printf("Fibonacci Series: 0, 1");
    }*/
    
    int a = 0, b = 1, next;
    if (inp==0){
        printf("%d IsFibo.", a);
    }
    else if(inp>0){
        printf("%d\n", a);
        printf("%d\n", b);
        for (int i = 3; i <= 100000; i++) {
            next = a + b;
            printf("%d", next);
            a = b;
            b = next;
            if (next==inp){
                printf(" IsFibo");
                break;
            }
            printf("\n");
        }
    }
    printf("\n");
}