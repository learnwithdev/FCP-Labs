#include <stdio.h>

void main(){
    char x;
    float a,b,z;
    printf("What operation do you wish to perform?");
    scanf("%c", &x);
    
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (x)
    {
    case 'a':
        z = a+b;
        printf("\nThe addition is: %f", z);
        break;
    case 's':
        z = a-b;
        printf("\nThe subtraction is: %f", z);
        break;
    case 'm':
        z = a*b;
        printf("\nThe addition is: %f", z);
        break;
    case 'd':
        z = a/b;
        printf("\nThe addition is: %f", z);
        break;
    }
}