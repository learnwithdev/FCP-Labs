#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int max;
    int min;
    int current;
		printf("Enter a number: ");
		scanf("%d", &current);

		max = current;
		min = current;

    for (int i = 0; i < n-1; i++) {
        printf("Enter a number: ");
        scanf("%d", &current);

        if (current > max) {
            max = current;
        }
        if (current < min) {
            min = current;
        }
    }

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

}

