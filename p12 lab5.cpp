#include <stdio.h>
int main(){
	int atten, asing, exam;
	float grade;
	printf("Enter the average attendance percentage: ");
	scanf("%d", &atten);
	printf("Enter the average assignment marks: ");
	scanf("%d", &asing);
	printf("Enter the exam marks: ");
	scanf("%d",&exam);
	
	grade=atten*0.15+exam*0.5+asing*0.35;
	
	if(grade>50){
		if(grade>80){
			printf("Grade is A.");
		}else if(grade>70){
			printf("Grade is B.");
		}else if(grade>60){
			printf("Grade is C.");
		}else if(grade>50){
		printf("Grade is D.");
	}
	}else{
		printf("Grade is F.");
	}
	 
	return 0;
}