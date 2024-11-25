#include <stdio.h>
#include <math.h>
int main(){
	int count,p,digit,sum,p1,p2;
	sum=0,count=0;
	printf("Enter a number: ");
	scanf("%d", &p);
	p1=p, p2=p;

	while (p>0){
		count+=1;
		p/=10;
	}
	//printf("%d\n", count);
	while (p1>0){
		digit = p1 % 10; //reverse the number
		//printf("%d", digit);
		sum += digit*(pow(10, --count));
		p1 /= 10;
	}
	//printf("%d", sum);

	if (p2==sum){
		printf("It is a palindrome.\n");
	}
	else{
		printf("Not a palindrome.\n");
	}


}

