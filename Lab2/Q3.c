// 3) WAP to print the following pattern by using For-Loop.
// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
#include <stdio.h>
int main() {
   int i, j;
   int lines = 4;
   for (i = 0; i <= lines; i++) {
      for (j = 0; j <= i; j++) {
         printf(" %d", j);
      }
      printf("\n");
   }
   return 0;
}