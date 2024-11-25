#include <stdio.h>

int main(){
	int b = 2;
	int p = 3;
	int i = 1;
	while (p>0){
		i=i*b;
		p--;
	}
	printf("The evaluated expression is: %d\n", i);
  	//printf("\n");
} 
