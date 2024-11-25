#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void sortStrings(char *arr[], int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    char *arr[n];

    printf("Enter the strings:\n");
    for (int i=0;i<n;i++) {
        arr[i] = (char *)malloc(100 * sizeof(char)); 
        scanf("%s", arr[i]);
    }

    sortStrings(arr, n);

    printf("\nSorted strings in ascending order:\n");
    for (int i=0;i<n;i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); 
    }

    return 0;
}
