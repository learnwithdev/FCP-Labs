#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[100];
    float totalMarks;
};

void appendToFile(FILE *file, struct Student student) {
    fprintf(file, "Roll Number: %d\n", student.rollNumber);
    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Total Marks: %.2f\n", student.totalMarks);
    fprintf(file, "---------------------------\n");
}

void main() {
    FILE *file;
    int n;

    file = fopen("LNMIITSTUDENT.DAT", "a");

    printf("Enter the number of students to add/append: ");
    scanf("%d", &n);

    struct Student student[n];

    for (int i=0;i<n;i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &student[i].rollNumber);
        getchar(); // To clear the newline character from the buffer
        printf("Enter name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0';
        printf("Enter total marks: ");
        scanf("%f", &student.totalMarks);

        appendToFile(file, student[i]);
    }

    fclose(file);

    printf("\nStudent details have been appended to the file 'LNMIITSTUDENT.DAT'.\n");
}
