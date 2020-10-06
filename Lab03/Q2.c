#include <stdio.h>

int main(){
	char AL;
	int alphabet;
	printf("Enter any alphabet;");
	scanf("%c",&AL);
	
	if (AL=='a'||AL=='e'||AL=='i'||AL=='o'||AL=='u')
	{
		alphabet=1;	
	}
	else if (AL=='A'||AL=='E'||AL=='I'||AL=='O'||AL=='U')
	{
		alphabet=1;
	}
	else{
		alphabet=2;
	}

	switch(alphabet){
		case 1:
			printf("%c is vowel. ",AL );
			break;

		case 2:
			printf("%c is not vowel." ,AL );
			break;
		
		default:
			printf("Check alphabet" );
	}			

}