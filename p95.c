#include <stdio.h>

struct Employee{
    int emp_no;
    char name[20];
    int salary;
} emp[50], *ptr;

void main(){
    ptr = emp;
    int n;
    printf("Enter the no. of employees: ");
    scanf("%d", &n);
    
    for (int i=0;i<n;i++){
        printf("Enter employee number: ");
        scanf("%d", &ptr->emp_no);
        printf("Enter employee name: ");
        scanf("%s", &ptr->name);
        printf("Enter employee salary: ");
        scanf("%d", &ptr->salary);
        ptr++;
        printf("\n");
    }
    
    ptr=ptr-n;
    
    for (int i=0;i<n;i++){
        printf("%d. Employee number: %d\n", (i+1), (ptr->emp_no));
        // scanf("%d", ptr->emp_no);
        printf("   Employee name: %s\n", (ptr->name));
        // scanf("%s", ptr->name);
        printf("   Employee salary: %d\n", (ptr->salary));
        // scanf("%d", ptr->salary);
        ptr++;
        printf("\n");
    }
}