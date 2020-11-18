#include <stdio.h>

int calculator(int a, int b,int option){
	int sum,diff,product,quoitent;
	switch(option){
		case 1:
		sum = a+b;
		printf("%d+%d=%d\n",a,b,sum);
		break;

		case 2:
		diff=a-b;
		printf("%d-%d=%d\n",a,b,diff);
		break;

		case 3:
		product=a*b;
		printf("%d*%d=%d\n",a,b,product);

		case 4:
		quoitent=a/b;
		printf("%d/%d=%d\n",a,b,quoitent );

	}
}
int main(){
	int choice,a,b;//variable declaration.
	printf("1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\nEnter your option:");
	scanf("%d",&choice);
	printf("Enter your first number: ");
	scanf("%d",&a);
	printf("Enter your second number: ");
	scanf("%d",&b);
	calculator(a,b,choice);//calling the function by pass by value.
}