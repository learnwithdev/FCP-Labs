#include <stdio.h>
#include <ctype.h>  // For tolower() function

// Function to count vowels in a file
int countVowels(FILE *file) {
    char ch;
    int vowelCount = 0;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Convert the character to lowercase for easier comparison
        ch = tolower(ch);
        
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

void main() {
    FILE *file;
    char filename[100];

    // Ask user to input the file name
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;  // Exit if file could not be opened
    }

    // Count the number of vowels in the file
    int vowels = countVowels(file);

    // Output the result
    printf("The number of vowels in the file '%s' is: %d\n", filename, vowels);

    // Close the file
    fclose(file);
}
