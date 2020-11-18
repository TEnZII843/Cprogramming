// 5.a
// #include <stdio.h>
// void main(){
// 	char s[]= "hello";
// 	char *p = s;
// 	printf("%c%c%c%c%c", p[0], s[1],s[2],s[3],s[4]);
// }
// Since S was not decleared as array there was an error. 
// Then we have to set p as the pointer for the array S.
// After declearing S as an array and p as the pointer there was no error.
// The I have printed all the characters in the array.

// 5.b
// # include <stdio.h>
// # include <stdlib.h>
// int main( ){
// 	int i = 0 ;
// 	i++ ;
// 	if ( i <= 5 ){
// 		printf ( "C is very easy\n" ) ;
// 		exit(0);
// 		main();	
// 	}

// return 0 ;
// }
// Using break in if condition has created the error in this program.
// Therefore to stop the execution of the program in infinite loop I have used exit function.


// 5.c
// # include <stdio.h>
// int i = 0 ;
// void val( );
// int main( ){
// 	printf ( "main's i = %d\n", i ) ;
// 	val( ) ;
// 	printf ( "main's i = %d\n", i ) ;
// 	val( ) ;
// 	return 0 ;
// }
// void val( ){
// 	i = 100 ;
// 	printf ( "val's i = %d\n", i ) ;
// 	i++ ;
// }
// In this question firstly from main function , i=0 Therefore main's i =0.
// After calling val()fucntion, i in val() function i=100.therefore val's i=100. 
// Then i is incremented and new i=101.
// Then in main fucntion main's i= 101 due to increment.
// finally again the val() function was called and val's i =100.
// Because the i in global has incremented but not in val() function.