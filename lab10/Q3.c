#include<stdio.h>

struct students{
	int Student_id;
	char name[30];
	int date;
	int month;
	int year;
};
int main(){
	struct students details[5];
	for(int i = 0; i < 5; i++){
		printf("Details of Student %d", i+1 );
		printf("\nPlease enter your name :");
		scanf("%s",details[i].name);
		printf("\nPlease enter your Student ID :");
		scanf("%d",&details[i].Student_id);
		printf("\nPlease enter your date that you joined the college :");
		scanf("%d",&details[i].date);
		printf("\nPlease enter your month that you joined the college :");
		scanf("%d",&details[i].month);
		printf("\nPlease enter your year that you joined the college :");
		scanf("%d",&details[i].year);
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	}
	for(int i = 0; i < 5; i++){
		if((2020-details[i].year)>=3){
			printf("\nName :%s",details[i].name);
			printf("\nStudents ID :%d",details[i].Student_id);
			printf("\nDate :%d/%d/%d",details[i].date,details[i].month,details[i].year);
			printf("\n");
		}
		
	}
	return 0;
}
