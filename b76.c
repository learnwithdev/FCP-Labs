#include <stdio.h>
#include <math.h>

void f_even_odd(int n) {
    if (n%2==0){
        printf("%d is even.", n);
    }
    else{
        printf("%d is odd.", n);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    f_even_odd(number);
}
