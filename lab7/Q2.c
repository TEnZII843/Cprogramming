#include <stdio.h>
int main(){
	int Enrollment,Enrollment1,password1,p,password3;
	signin:// to sign in
	printf("~~~|||~~~Sign in~~~|||~~~\n");
	printf("Enrollment number:");
	scanf("%d",&Enrollment);
	
	printf("Password:");
	scanf("%d",&password1);
	
	printf("Confirm password:");
	scanf("%d",&p);
	
	if (p==password1)
	{
		printf("Your signin is successful\n");
	}
	else{
		printf("Password doesnt match. Try again\n");
		printf("-----------------------------------------------------\n");
		goto signin;

	}
	printf(" ");

	login://for login
	printf("---------------------------------------------------------\n");
	printf("~~~|||~~~login~~~|||~~~\n");
	printf("Enrollment number:");
	scanf("%d",&Enrollment1);
	printf("Password:");
	scanf("%d",&password3);
	if (Enrollment1==Enrollment && password3==password1)
	{
		printf("login successful.");
	}
	else 
	{
		printf("check your enrollment number and password. Try again");
		printf("-----------------------------------------------------\n");
		goto login;
	}

}