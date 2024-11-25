#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	int count = 0;
	int digit=0;
	int n = 0;

	int result = a, flag = a;
	//int flag = a;

	while (a>0){
		a = a/10;
		count += 1;
	}

	const d = count;

	while (result>0){
		digit = result%10;
		n += pow(digit,d);
		result /= 10;
	}
	if (flag==n){
		printf("It's an Armstrong number.\n");
	}
	else{
		printf("It's not an Armstrong number.\n");
	}

}
