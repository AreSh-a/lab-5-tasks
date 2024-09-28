#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num<=0){
		if(num<0){
			printf("The number is negative.");
		}else if(num==0){
			printf("The number is zero.");
		}
	}else{
		printf("The number is positive.");
		if(num%2==0){
			printf("The number is even.");
		}else{
			printf("The number is odd.");
		}
	}
	return 0;
}