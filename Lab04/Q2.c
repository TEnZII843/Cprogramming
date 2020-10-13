//2) Write a C Program to swap 4-different elements using Call by Reference.
#include <stdio.h>

int swap(int *a,int *b,int *c,int *d)
{
    int num;
    num=*a;
    *a=*d;
    *d=*b;
    *b=*c;
    *c=num;
}
int main()
{
    int num1,num2,num3,num4;    
    printf(" Enter first number : ");
    scanf("%d",&num1);
    printf(" Enter second number : ");
    scanf("%d",&num2);
    printf(" Enter third number : ");
    scanf("%d",&num3);
    printf(" Enter forth number : ");
    scanf("%d",&num4);
    
    printf("\n The numbers before swapping are : ");
    printf(" %d %d %d %d",num1,num2,num3,num4);
    swap(&num1,&num2,&num3,&num4);
    printf("\n The numbers after swapping are : ");
    printf(" %d %d %d %d ",num1,num2,num3,num4);
    return 0;
}