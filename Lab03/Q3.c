#include <stdio.h>

int main(){
	float initial_amount;
	float credit;
	float debit;
	float balance;
	float add_amount;
	float sub_amount;

	printf("Enter your deposit amount: " );
	scanf("%f", &initial_amount);

	if (initial_amount>=1000)
	{
		printf("Your deposit is %f \n", initial_amount );
		printf("****Select one of the option: \n 1.Credit \n 2.Debit \n 3.balance enquiry \n" );
		int option;
		scanf(" %d", &option);

		switch(option){
			case 1:
				printf("Enter the amount you want to credit to you account : ");
				scanf("%f",&add_amount);
				balance = initial_amount + add_amount;
				printf("Your updated account balance is %f", balance );
			break;

			case 2:
				printf("Enter the amount you want to withdraw from your account : ");
				scanf("%f",&sub_amount);
				balance = initial_amount - sub_amount;
				printf("Your updated account balance is %f", balance );
			break;

			case 3:
				printf("Your account balance is %f \n ", initial_amount);
			break;	

			default:
				printf("invalid\n");
		}
	}
	else{
		printf("Your deposit must be greater than 1000 \n");
	}

	
}
