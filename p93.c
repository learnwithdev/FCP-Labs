#include <stdio.h>
#include <string.h>

void main(){
    int cnt1=0, cnt2=0;
    char str[20] = "How you doin ";
    char *ptr;
    ptr = str;
    
    for (int i=0;i<20;i++){
        if (*ptr==' ' && *(ptr+1)!='\0'){
            cnt1++;
        }
        ptr++;
    }
    printf("The number of words in the given string: %d", (cnt1+1));
}
