# include <stdio.h>

int main(){
    int phys = 86;
    int chem = 92;
    int maths = 95;
    int comp = 90;
    int eng = 77;
    float tot_marks = 500;
    float obt_marks;
    float percent;

    obt_marks = phys+chem+maths+comp+eng;
    printf("obtained marks: %f", obt_marks);
    percent = (obt_marks/tot_marks)*100;
    printf("The percentage obtained by student is: %f", percent);
}