// 2) WAP to print the following pattern by using For-Loop.
// *
// * *
// * * *
// * * * *
// * * * * *
#include <stdio.h>
int main() {
   int i, j;
   int lines = 5;
   for (i = 1; i <= lines; i++) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}