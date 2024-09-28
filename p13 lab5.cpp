#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("First number is the greatest.");
		}else{
			printf("Third number is the greatest.");
		}
	}else if(num2>num3){
		printf("Second number is the greatest.");
	}else{
		printf("Third number is the greatest.");
	}
	return 0;
}