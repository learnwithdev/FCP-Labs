#include <stdio.h>

int main(){
	int i,n;
	int m = 0;
	printf("Enter n: ");
	scanf("%d", &n);

	for (i=1;i<=n*2;i++){
		if (i%2!=0){
			printf("%d,",i);
		}
	}
	printf("\n");
}
