#include <stdio.h>
#include <string.h>

void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    int *ptr = &a;
    printf("The square & cube of %d: %d, %d", *ptr, (*ptr)*(*ptr), (*ptr*(*ptr)*(*ptr)));
}
