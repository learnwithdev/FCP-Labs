#include <stdio.h>
#include <ctype.h>  

void countFileDetails(FILE *file, int *charCount, int *wordCount, int *lineCount) {
    char ch;
    int inWord = 0; 

    while ((ch = fgetc(file)) != EOF) {
        (*charCount)++;  

        if (ch == '\n') {
            (*lineCount)++; 
        }

        if (isspace(ch)) {
            inWord = 0; 
        } else {
            if (inWord == 0) {
                (*wordCount)++; 
            }
            inWord = 1;  
        }
    }

    if (*charCount > 0 && ch != '\n') {
        (*lineCount)++;
    }
}

int main() {
    FILE *file;
    char filename[100];
    int charCount = 0, wordCount = 0, lineCount = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    countFileDetails(file, &charCount, &wordCount, &lineCount);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    fclose(file);
}
