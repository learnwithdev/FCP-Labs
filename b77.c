#include <stdio.h>
#include <math.h>

int f_palindrome(int n) {
    int num = n;  
    int num1 = n;
    int rev_num = 0;  
    int remainder;
    int j = 0;
    
    while (num1!=0){
        j++;
        num1 /= 10;
    }

    while (num!=0) {
        remainder = num % 10;           
        rev_num += remainder*pow(10, j-1);
        num /= 10;  
        j--;
    }

    return n == rev_num;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (f_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
}
