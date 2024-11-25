#include <stdio.h>

void main(){
    int p,c,m,e;
    float cm;
    p = 176.0;
    c = 182.0;
    m = 185.0;
    e = 88.0;

    cm = (p/2.0f)+(c/2.0f)+(m/2.0f)+e;
    printf("Cut-off marks for the student is: %f", cm);

}