#include <stdio.h>

int main(){
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age<13){
		printf("Category: child.");
	}else if(age>=13 && age<18){
		printf("Category: teenager.");
	}else if(age>=18 && age<70){
		printf("Category: adult.");
	}else if(age>=70){
		printf("Category: senior.");
	}
}