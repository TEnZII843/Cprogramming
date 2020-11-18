#include<stdio.h>
int binary(int num){
	if (num==0){
		return 0;
	}
	else{
		int quo = num/2;
		int a = num%2;

		binary(quo);
		printf("%d",a);
	}	
}
int main(){
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf(binary(n));
	return 0;
}