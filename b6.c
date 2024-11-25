#include <stdio.h>

void main(){
    int a,b;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);
    printf("\nValues of number 1 & 2 before swapping: %d, %d", a, b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("\nValues of number 1 & 2 after swapping: %d, %d", a, b);
    printf("\n\nVoila!");
}