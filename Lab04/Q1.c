//1) What will be the output of the following program? Note down your understanding of
//every program, in few sentences.
//a
// #include<stdio.h>
// int main()
// {
// int i=3, *j, k;
// j = &i;
// printf("%d\n", i**j*i+*j);
// return 0;
// }

//b
// #include<stdio.h>
// int main()
// {
// int x=30, *y, *z;
// y=&x;
// //Address of x depends from pc-pc.
// //However, integer is 4 byte size
// z=y;
// *y++=*z++;
// x++;
// printf("x=%d, y=%d, z=%d\n",
// x, y, z);
// return 0;
//  }

//c
// #include<stdio.h>
// int main()
// {
// int ***r, **q, *p, i=8;
// p = &i;
// q = &p;
// r = &q;
// printf("%d, %d, %d\n", *p,
// **q, ***r);
// return 0;
//  }

//d
// #include<stdio.h>
// void fun(void *p);
// int i;
// int main()
// {
// void *vptr;
// vptr = &i;
// fun(vptr);
// return 0;
// }
// void fun(void *p)
// {
// int **q;
// q = (int**)&p;
// printf("%d\n", **q);
//  }


//e
// #include <stdio.h>
// int main()
// {
// int *ptr;
// int x;
// ptr = &x;
// *ptr = 0;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// *ptr += 5;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// (*ptr)++;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// return 0;
//  }

//f
// #include<stdio.h>
// int main()
// {
// char *str;
// str = "%s";
// printf(str, "K\n");
// return 0;
//  }