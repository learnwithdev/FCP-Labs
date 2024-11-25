#include <stdio.h>

void main(){
    char r;
    printf("Enter the character: ");
    scanf("%c", &r);

    if (r >= 'a' && r <= 'z')
        printf("\nInput is a Lower-Case character");
    
    else if(r >= 'A' && r <= 'Z')
        printf("\nInput is a Upper-Case character");
    
    else if(r >= '0' && r <= '9')
        printf("\nInput is an integer between 0-9");
    
    else
        printf("\nInput is a special character");
}