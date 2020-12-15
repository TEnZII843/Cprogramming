#include <stdio.h> 
int main( )
{
FILE *fp ;
char path[100];
char ch;
printf("Enter the file path: ");//file path is /home/user/Documents/Employee.txt
scanf("%s",path);
fp = fopen ( path, "r" ) ;

while ( 1 ){
	ch = fgetc ( fp ) ; 
	if ( ch == EOF )
		break ;
	printf ( "%c", ch ) ;
}
printf ( "\n" ) ;
fclose ( fp ) ; 
}