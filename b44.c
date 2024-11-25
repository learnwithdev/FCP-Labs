#include <stdio.h>

int main(){
	int unit;
	float charge,rate;
	printf("Enter units: ");
	scanf("%d", &unit);

	if (unit<=200){
			rate = 0.5;
			charge = unit*rate;
			printf("The bill amount: %f\n",charge);
	} 
	else if((unit>=201) && (unit<=400)){
			rate = 0.65;
			charge = 100 + unit*rate;
			printf("The bill amount: %f\n", charge);
	}
	else if((unit>=401) && (unit<=600)){
			rate = 0.8;
			charge = 230 + unit*rate;
			printf("The bill amount: %f\n", charge);
	}
	else{
			rate = 1.25;
			charge = 425 + unit*rate;
			printf("The bill amount: %f\n", charge);
	}

}
