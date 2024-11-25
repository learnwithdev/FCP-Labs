#include <stdio.h>

void main(){
    char r;
    printf("Enter a char: ");
    scanf("%c", &r);

    if (r>'a' && r<'z'){
        printf("It's a lower-case letter.\n");
    }
    else{
        printf("It's an upper-case letter.\n");
    }
}
