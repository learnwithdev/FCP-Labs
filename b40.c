#include <stdio.h>

int main(){
	int i;
	int sum = 0;
	
	while (1){
		printf("Enter a number: ");
		scanf("%d", &i);

		if (i>=0){
			sum += i;
		}
		else{
			break;
		}
	}
	printf("The sum: %d\n", sum);
}
