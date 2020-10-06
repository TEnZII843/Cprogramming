//5) WAP to check whether input alphabet is a vowel or not.
#include <stdio.h>

int main(){
	char AL;
	printf("Enter any alphabet;");
	scanf("%c",&AL);
	
	if (AL=='a'||AL=='e'||AL=='i'||AL=='o'||AL=='u')
	{
		printf("%c is vowel. ",AL );
	}
	else if (AL=='A'||AL=='E'||AL=='I'||AL=='O'||AL=='U')
	{
		printf("%c is vowel. ",AL );
	}
	else{
		printf("%c is not vowel." ,AL );
	}
}