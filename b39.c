#include <stdio.h>

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	int i=1;
	int m = 1;
	float o = 0;

	while (i<=n){
		m = m*(i);
		printf("%d/%d!+",i,i);
		o+=(float)i/(float)m;
		i++;
	}
	printf("\n%f\n", o);
}
