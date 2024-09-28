#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	
	printf("First number is now: %d.\n",num1);
	printf("Second number is now: %d",num2);
	return 0;
}