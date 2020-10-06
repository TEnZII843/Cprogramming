// 5) WAP to find the output of the 1-D, 3-Input AND Gate. Each 1-D Array is a 1*8 dimensional in
// nature shown as below:-
// A = { 0, 0, 0, 0, 1, 1, 1, 1 }; B[] = { 0, 0, 1, 1, 0, 0, 1, 1 }; C[] = { 0, 1, 0, 1, 0, 1, 0, 1 };
// Solve it by using For Loop. The Output should be: 0, 0, 0, 0, 0, 0, 0, 1.
#include <stdio.h>
int main()
{
 int A[8] = { 0, 0, 0, 0, 1, 1, 1, 1 }; 
 int B[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
 int C[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
 int i, X;
 for (i = 0; i < 8; i++) {
 	X = A[i] && B[i] && C[i] ;
 	printf("\n %d AND %d AND %d = %d",A[i], B[i], C[i], X);
 	}
}
