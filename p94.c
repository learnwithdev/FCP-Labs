#include <stdio.h>
#include <string.h>

void main(){
    char st1[20] = "SVNITJAVA", st2[20];
    int l=0;
    
    for (int i=0; i<20; i++){
        if (st1[i]!='\0'){
            l++;
        }
    }
    char *ptr = &st1[l-1];
    
    for (int i=0; i<l; i++){
        st2[i] = *ptr;
        ptr--;
    }
    
    printf("String 1: ");
    for (int j=0; j<l; j++){
        printf("%c", st1[j]);
    }
    printf("\nString 2: ");
    for (int j=0; j<l; j++){
        printf("%c", st2[j]);
    }
}