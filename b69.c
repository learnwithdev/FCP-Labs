#include <stdio.h>

int main() {
    int arr[] = {12, 34, 23, 56, 78, 90, 45};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
        printf("Element %d found at index %d.\n", target, i);
        }
    }
}
