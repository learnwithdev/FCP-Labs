#include <stdio.h>

float get_hat_size(float circumference) {
    float sizes[] = {20.5, 21, 21.25, 21.5, 21.75, 22, 22.25, 22.5, 22.75, 23};
    float hat_sizes[] = {6.5, 6.75, 7, 7.25, 7.375, 7.5, 7.625, 7.75, 7.875, 8};

    int size_count = sizeof(sizes) / sizeof(sizes[0]); // Number of sizes

    for (int i = 0; i < size_count; i++) {
        if (circumference <= sizes[i]) {
            return hat_sizes[i];
        }
    }
    
    return hat_sizes[size_count - 1];
}

int main() {
    float circumference;

    printf("Enter your head circumference in inches: ");
    scanf("%f", &circumference);

    float hat_size = get_hat_size(circumference);

    printf("Your correct hat size is: %.2f\n", hat_size);
}
