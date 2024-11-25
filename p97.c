#include <stdio.h>

void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);
    char *st = str;
    int cnt = 0;

    while (*st) {
        if (*st == 'a' || *st == 'e' || *st == 'i' || *st == 'o' || *st == 'u' ||
            *st == 'A' || *st == 'E' || *st == 'I' || *st == 'O' || *st == 'U') {
            cnt++;
        }
        st++;  
    }

    printf("Number of vowels: %d\n", cnt);
}
