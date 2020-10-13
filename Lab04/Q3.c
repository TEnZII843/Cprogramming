// 3) WAP a program to find if the Year entered by the user through keyboard is a leap year
// or not. Apply Call by Reference concept.
#include <stdio.h>

int leapYear(int *check, int *x, int *y, int *z){
   if (*check % *x == 0){
      if (*check % *y == 0){
         if (*check % *z == 0){
            printf("It is a leap year.\n");
         }
         else{
            printf("Not a leap year.\n");
         }
      }
      else if (*check % *y != 0){
         printf("It is a leap year.\n");
      }
      else{
         printf("It is not a leap year.\n");
      }
   }
   else if(*check % *y == 0){
      if (*check % *z == 0){
         printf("It is a leap year.\n");
      }
      else{
         printf("It is not a leap year.\n");
      }
   }
   else{
      printf("It is not a leap year.\n");
   }
}


int main(){
   int year;
   int a = 4;
   int b = 100;
   int c = 400;
   printf("Enter the year: ");
   scanf("%d", &year);
   leapYear(&year, &a, &b, &c);

}