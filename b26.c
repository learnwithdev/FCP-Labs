#include <stdio.h>

int main(){
	int o,m=0;
	int i,n;

	printf("Enter n: ");
	scanf("%d", &n);
	for (i=i; i<=n; i++){
		if (i%2==0){
			m += i;
		}
		else{
			o += i;
		}
	}
	printf("The sum of even numbers between 1 to %d: %d\n", n, m);
	printf("The sum of odd numbers between 1 to %d: %d\n", n, o);

}
