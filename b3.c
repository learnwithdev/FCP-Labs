# include <stdio.h>

int main(){
    float basic = 30000;
    float da = 20;
    float hra = 25;
    float gross_salary;

    gross_salary = basic + (da/100)*basic + (hra/100)*basic;
    printf("The gross salary is: %f", gross_salary);
}