#include <stdio.h>
int main(){
	int age;
	char sts;
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter citizenship (Y for citizen, N for not a citizen): ");
	scanf("%s", &sts);
	
	if((age>=18) && (sts=='y')){
		printf("You are eligible to vote.");
	}else{
		printf("You are not eligible to vote.");
	}
	return 0;
}