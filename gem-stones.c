#include <stdio.h>
#include <string.h>

struct str{
    char s[20];
    int slen;
}; 
void main(){
    int n;
    printf("Enter the number of stones: ");
    scanf("%d", &n);

    int a;
    int b=0;
    
    struct str sinp[n];
    for (int k=0;k<n;k++){
        char temp[20];
        printf("Enter their composition: ");
        scanf("%s", temp);
        sinp[k].slen = strlen(temp);
        strcpy(sinp[k].s, temp);
    }
    
    for (int i=0;i<sinp[0].slen;i++){
        a = 0;
        for (int j=1;j<=(n-1);j++){
            char* result = strchr(sinp[j].s, sinp[0].s[i]);
            if (result != NULL) {
                a++;
            }
        }
        if (a==(n-1)){
            b++;
        }
    }
    printf("Common gem-elements in these rocks: %d\n", b);
}