#include <stdio.h>

int main(){
	float marks;
	int yourmarks;
	printf("Enter your marks (0-100): " );
	scanf("%f", &marks);
	int b = marks /10;
	if (marks==100)
	{
		printf("Your grade is A+.");
	}
	if (marks>=101){
		printf("check your marks \n");
	}
// if (marks>=0 && marks <101)
// {
// 	if (marks<=100 || marks>=90){
// 		yourmarks=1;
// 		//printf("A+");
// 	}
// 	else if (marks==90 || marks>=80){
// 		yourmarks=2;
// 		//printf("A");
// 	}
// 	else if (marks==80 || marks>=70){
// 		yourmarks=3;
// 		//printf("B+");
// 	}
// 	else if (marks==70 || marks>=60){
// 		yourmarks=4;
// 		//printf("B");
// 	}
// 	else if (marks==60 || marks>=50){
// 		yourmarks=5;
// 		//printf("C+");
// 	}
// 	else if (marks==50 || marks>=40){
// 		yourmarks=6;
// 		//printf("C");	
// 	}
// 	else if (marks==40 || marks>=30){
// 		yourmarks=7;
// 		//printf("D");
// 	}
// 	else if (marks==30 || marks>=0){
// 		yourmarks=8;
// 		//printf("F");
// 	}
// 	else{
// 		printf("Invalid marks. \n" );
// 	}
// }	

	switch(b){
		case 9:
			printf("Your grade is A+.");
			break;

		case 8:
			printf("Your grade is A.");
			break;	

		case 7:
			printf("Your grade is B+.");
			break;

		case 6:
			printf("Your grade is B.");
			break;
	
		case 5:
			printf("Your grade is C+.");
			break;

		case 4:
			printf("Your grade is C.");
			break;	

		case 3:
			printf("Your grade is D.");
			break;	

		case 2:
			printf("Your grade is F.");
			break;	

		case 1:
			printf("Your grade is F.");
			break;	
	
		case 0:
			printf("Your grade is F.");
			break;	
	
     	default:
			printf("Your marks is invalid" );	
	}

}