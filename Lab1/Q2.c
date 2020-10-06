// 2) WAP to evaluate the Expressions below by using the C operator precedence and
// associativity rules.
// a) 7 * 1 – (5 % 3) * 4 + 9
// b) 9 ** (6 % 2) + 1 * 3
#include <stdio.h>

int main(){
	float a= 7*1-(5%3)*4+9;
	printf("%f\n", a );
	

	int b= 9^(6%2)+1*3;
	printf("%d\n", b );
	return 0;
}