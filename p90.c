#include <stdio.h>
#include <string.h>

void main(){
    int cnt1=0, cnt2=0;
    char str[20] = "Hey there!";
    char *ptr;
    ptr = str;
    
    for (int i=0;i<20;i++){
        if (str[i]==' '){
            cnt2++;
        }
        if (str[i]!='\0'){
            printf("\%c", str[i]);
            cnt1++;
        }
        else{
            break;
        }
    }
    printf("\nLength of the input string including spaces: %d", cnt1);
    printf("\nLength of the input string excluding spaces: %d", (cnt1-cnt2));

}
