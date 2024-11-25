#include <stdio.h>

int f_vowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("It's a Vowel.");
    } else {
        printf("It's not a Vowel.");
    }
}

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    f_vowel(ch);
}
