#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

int next_permutation(char *str) {
    int length = strlen(str);
    int i = length - 2;

    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }
    if (i == -1) {
        return 0; 
    }

    int j = length - 1;
    while (str[j] <= str[i]) {
        j--;
    }

    swap(&str[i], &str[j]);

    reverse(str, i + 1, length - 1);

}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    if (next_permutation(word)) {
        printf("Next lexicographically greater word: %s\n", word);
    } else {
        printf("No lexicographically greater word exists.\n");
    }
}
