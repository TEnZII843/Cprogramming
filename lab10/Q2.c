#include <stdio.h>

union customerDetails{
	int accountNumber;
	char name[25];
	int currentAmount;
};

int main(){
	int no;
	int comp;
	int out;

	printf("How many details you want to enter: ");
	scanf("%d", &no);

	union customerDetails bank[no];

	

	for (int i = 0; i < no; ++i){
		printf("Enter your account number: ");
		scanf("%d", &bank[i].accountNumber);

		printf("Enter your name: ");
		scanf("%s", bank[i].name);

		printf("Enter your current amount in the account: ");
		scanf("%d", &bank[i].currentAmount);

		printf("\n\n");
	}

	int options;

	do{	
		printf("=================================BOB=======================================");
		printf("\n");
		printf("1. Display the details of customer(s) who have more than Nu.10000 in their account\n");
		printf("2. Deposit amount.\n");
		printf("3. Withdraw amount.\n");
		printf("\n");
		printf("Enter the option: ");
		scanf("%d", &options);

		switch(options){
			case 1:
				for (int i = 0; i < no; ++i){
					if (bank[i].currentAmount > 10000){
						printf("Account number: %d \n", bank[i].accountNumber);
						printf("Account holder name: %s \n", bank[i].name);
						printf("Total amount in saving: %d \n", bank[i].currentAmount);
						printf("\n\n");
					}
				}

				break;

			case 2:
				printf("Enter the account number of the user that you want to deposit: ");
				scanf("%d", &comp);

				for (int i = 0; i < no; ++i){
					if (comp == bank[i].accountNumber){
						int adding;
						printf("Enter the amount you want to Deposit: ");
						scanf("%d", &adding);
						printf("Amount of Nu. %d has deposited in %d account.\n", adding, bank[i].accountNumber);
						bank[i].currentAmount = bank[i].currentAmount + adding;
						printf("Total amount: %d", bank[i].currentAmount);
						printf("\n\n");
					}
					else{
						printf("No such account regestered till now.\n");
						printf("\n\n");
					}
				}

				break;

			case 3:
				printf("Enter the account number of the user that you want to withdraw: ");
				scanf("%d", &out);

				for (int i = 0; i < no; ++i){
					if (out == bank[i].accountNumber){
						int withdrawAmount;
						printf("Enter the amount you want to withdraw: ");
						scanf("%d", &withdrawAmount);

						if (bank[i].currentAmount >= withdrawAmount){
							bank[i].currentAmount = bank[i].currentAmount - withdrawAmount;
							printf("Balance amount: %d", bank[i].currentAmount);
							printf("\n\n");
						}
						else{
							printf("Insufficient Fund!!!\n");
							printf("\n\n");
						}
					}
				}

				break;

			default:
				printf("OPTION MISMATCH.\n");
				break;
		}
	}
	while(options > 0 && options < 3);{
		printf("Out of bound.");
	}
}