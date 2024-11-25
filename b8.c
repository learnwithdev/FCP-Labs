#include <stdio.h>

void main(){
    int s = 31558150;
    int days, hours, minutes;
    days = s/(60*60*24);
    hours = s/(60*60);
    minutes = s/60;

    printf("\nEarth takes %d days to revolve around The Sun.", days);
    printf("\nEarth takes %d hours to revolve around The Sun.", hours);
    printf("\nEarth takes %d minutes to revolve around The Sun.", minutes);
}