#include <stdio.h>

void main(){
    int a = 5;
    int b = 9;
    int c;
    printf("Values of a & b before swapping: %d, %d", a, b);
    c=a;
    a=b;
    b=c;
    printf("\nValues of a & b after swapping: %d, %d", a, b);

}