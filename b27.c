#include <stdio.h>

int main(){
	int p;
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &p);

	if (p<=1){
		printf("Not a Prime number.");
	}
	
	for (int i=1; i<=p; i++){
		if (p%i==0){
			n++;
		}
	}
	if (n==2){
		printf("It's a Prime number.\n");
	}
	else{
		printf("Not a Prime number.\n");
	}
}
