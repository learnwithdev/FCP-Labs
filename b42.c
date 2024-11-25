#include <stdio.h>

int main(){
	int p;
	int n = 0; //number of factors
	printf("Enter a number: ");
	scanf("%d", &p);
	
	if (p<=1){
		printf("It's not a Prime number.\n");
	}
	for (int i=1; i<=p;i++){
		if (p%i==0){
			n++;
		}
	}
	if (n==2){
		printf("It's a Prime number.\n");
	}
	else{
		printf("It's a Composite number.\n");
	}
}
