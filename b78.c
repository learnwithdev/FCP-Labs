#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int is_armstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;

    // Find the number of digits in the number
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Sum the digits raised to the power of the number of digits
    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == original);
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is Armstrong
    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
