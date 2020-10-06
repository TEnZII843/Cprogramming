// 1) WAP to check if the Characters (of the same address/position) of one Array A are exactly
// matching with those of the Array B. Each 2-D Array is 2*4 dimensional in nature shown as
// below:-
// A = {{ 'A', 'B', 'C', 'D' }, { 'a', 'b', 'c', 'd' }};
// B = {{ 'A', 'B', 'C', 'D' }, { 'E', 'F', 'G', 'H' }};
//Solve it by using For Loop. The Output should be: 1,1,1,1,0,0,0,0 (vertically).
#include <stdio.h>
int main()
{
   int A[2][4] = {{ 'A', 'B', 'C', 'D' },
               { 'a', 'b', 'c', 'd' }};
   int B[2][4] = {{ 'A', 'B', 'C', 'D' }, 
               { 'E', 'F', 'G', 'H' }}; 
   int i, j, X;
   
   for (i = 0; i < 2; i++) {
      for (j=0; j<4; j++) { 
      X = A[i][j] == B[i][j];
   printf("\n (%d = %d) : %d" , A[i][j], B[i][j], X);
      }
   } 
}