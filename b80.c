#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1;

    if (n >= 1) {
        printf("%d ", a);
    }

    if (n >= 2) {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf("%d ", next);
        
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    printFibonacci(n);

}
