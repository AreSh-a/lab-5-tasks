#include <stdio.h>
int main(){
	int age, income, credit;
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter income: ");
	scanf("%d", &income);
	printf("Enter credit score: ");
	scanf("%d", &credit);
	
	if(age>=18 && income>=100000 && credit>=580){
		printf("Eligible for loan.");
	}else{
		printf("Not eligible for loan.");
	}
	return 0;
}