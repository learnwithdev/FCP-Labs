#include <stdio.h>

int main(){
	int n,y;
	printf("Enter n: ");
	scanf("%d", &n);

	if (n==1){
			printf("y = 1 + x\n");
		}
	if (n==2){
			printf("y = (1+x)/n\n");
		}
	if (n==3){
			printf("y = 1 + x^n\n");
		}
	if (n>3 || n<1){
			printf("y = 1 + nx\n");
		}
}
