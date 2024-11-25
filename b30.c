#include <stdio.h>

int main(){
	int i, digit;
	printf("Enter a number: ");
	scanf("%d", &i);
	printf("The reverse is: ");
	while (i>0){
		digit = i%10;
		printf("%d", digit);
		i /= 10;
	}
	printf("\n");
}
