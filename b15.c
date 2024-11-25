# include <stdio.h>

int main(){
    int phys = 0;
    int chem = 0;
    int maths = 0;
    int comp = 0;
    int eng = 0;
    float tot_marks = 500;
    float obt_marks;
    float percent;

    obt_marks = phys+chem+maths+comp+eng;
    percent = (obt_marks/tot_marks)*100.0f;
    printf("The percentage obtained by student is: %f", percent);

    if (percent >= 35){
        printf("\nPass!");
    }
    else{
        printf("\nFail!");
    }
}