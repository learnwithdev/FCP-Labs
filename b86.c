#include <stdio.h>
#include <string.h>

void f_slength(){
    char s[50];
    int l;
    printf("Enter a string: ");
    scanf("%s", &s);
    l = strlen(s);
    printf("The length of the string: %d", l);
}
void main(){
    f_slength();
}