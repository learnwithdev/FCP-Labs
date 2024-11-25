#include <stdio.h>

void main(){
    int hrs, min, sec, tot_sec;
    printf("\nEnter hours: ");
    scanf("%d", &hrs);
    printf("\nEnter minutes: ");
    scanf("%d", &min);
    printf("\nEnter seconds: ");
    scanf("%d", &sec);
    
    printf("\nPresent time: %d:%d:%d", hrs, min, sec);

    tot_sec = hrs*60*60 + min*60 + sec;
    printf("\nTotal seconds passed: %d", tot_sec);
}