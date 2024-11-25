#include <stdio.h>

int main(){
	int i, digit;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &i);

	while (i>0){
		digit = i%10;
		sum += digit;
		i /= 10;
	}
	printf("The sum of the digits is: %d\n", sum);
}
