// 3) WAP to perform following operation on two user input numbers:-
// (a) Addition
// (b) Subtraction
// (c) Multiplication
// (d) Division
// (e) Modular division
#include <stdio.h>

int main(){
	int a;
	printf("Enter first number:");
	scanf("%d", &a);
	int b;
	printf("Enter Second number:");
	scanf("%d", &b);

	int Add= a+b;
	int sub= a-b;
	int mul= a*b;
	int div= a/b;
	int mol= a%b;

	printf("Addition:%d\n",Add );
	printf("Subtraction:%d\n",sub );
	printf("Multiplication:%d\n",mul );
	printf("Division:%d\n",div );
	printf("Modulo:%d\n",mol );
}