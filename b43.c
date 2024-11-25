#include <stdio.h>

int main(){
	int sales, comm;
	printf("Enter sales: ");
	scanf("%d", &sales);

	if (sales<=500){
		comm = 0.05*500;
		printf("The commision is %d/-\n", comm);
	}
	else if ((sales>500) && (sales <=2000)){
		comm = 35 + (0.1*sales);
		printf("The commision is %d/-\n", comm);
	}
	else if ((sales>2000) && (sales <=5000)){
		comm = 185 + (0.12*sales);
		printf("The commision is %d/-\n", comm);
	}
	else{
		comm = 0.125*sales;
		printf("The commision is: %d/-\n", comm);
	}
}
