#include <stdio.h>

int main(){
	int n, count;
	printf("Enter a number: ");
	scanf("%d",&n);
	count=0;
	while(n!=0){
		if(n&1){
			count=count+1;
		}
		n=n>>1;
	}
	printf("Number of ones in the binary operation of this number are: %d.",count);
	return 0;
}