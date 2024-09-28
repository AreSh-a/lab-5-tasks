#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	num>0?printf("The number is positive."):printf("The number is negative.");
	return 0;
}