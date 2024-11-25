#include <stdio.h>

void main(){
    int hrs, min, sec, tot_sec;
    printf("\nEnter total seconds: ");
    scanf("%d", &tot_sec);

    hrs = tot_sec/(60*60);
    // printf("%d", hrs);
    min = (tot_sec - hrs*60*60)/60;
    sec = tot_sec - hrs*60*60- min*60;

    printf("\nPresent time: %d:%d:%d", hrs, min, sec);
}