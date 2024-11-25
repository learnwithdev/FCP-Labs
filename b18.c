#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c)
        ;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is: %d\n", max);

}

