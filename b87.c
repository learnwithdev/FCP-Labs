#include <stdio.h>

struct student{
    char name[30];
    int roll_no;
    int marks;
};
void main() {
    struct student stud[3];
    for (int i=0;i<3;i++){
        printf("Enter name: ");
        scanf("%s", stud[i].name);
        printf("Enter Roll number: ");
        scanf("%d", &stud[i].roll_no);
        printf("Enter marks: ");
        scanf("%d",&stud[i].marks);
        printf("\n");
    }
    
    printf("The students who scored more than 500 marks are: \n");
    for (int j=0;j<3;j++){
        if (stud[j].marks>500){
            printf("%s\n", stud[j].name);
            printf("%d\n", stud[j].roll_no);
            printf("%d\n", stud[j].marks);
            printf("\n");
        }
    }
}