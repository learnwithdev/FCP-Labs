#include <stdio.h>
#include <math.h>

int f_swap(int x, int y) {
    printf("The entered vaules were: %d, %d\n", x, y);
    int a;
    a = x;
    x = y;
    y = a;
    
    printf("The swapped values are: %d, %d\n", x, y);
}

void main() {
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d,%d", &number1, &number2);
    
    f_swap(number1,number2);
}
