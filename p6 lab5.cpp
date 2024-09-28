#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter two numbers: \n");
	scanf("%d%d", &num1, &num2);
	
	num1>num2?printf("First number is greater than second number."):
	printf("Second number is greater than first.");
	
	return 0;
}