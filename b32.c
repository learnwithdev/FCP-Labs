#include <stdio.h>

int main() {
    int n;
  
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int max;
    int second_max;
    int current;

    printf("Enter a number: ");
    scanf("%d", &current);
    max = current;

    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &current);
        
        if (current > max){
            second_max = max;
            max = current;
        } 
				else if (current > second_max && current < max) {
            second_max = current;
        }
    }
    printf("Maximum number is: %d\n", max);
    printf("Second maximum number is: %d\n", second_max);

}

