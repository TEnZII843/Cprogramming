#include<stdio.h>
union employee{
	char name[30];
	int Student_id;
	int date;
	int month;
	int year;
};
int main(){
	union employee details[5];
	for(int i = 0; i < 5; i++){
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
		for(int j = i + 1; j < 5; j++){
			if(details[i].year > details[j].year){
				int temp = details[i].year;
				details[i].year = details[j].year;
				details[j].year = temp;
			}
		}
		printf("\nName :%s",details[i].name);
		printf("\nStudents ID :%d",details[i].Student_id);
		printf("\nDate :%d / %d / %d",details[i].date,details[i].month,details[i].year);
		printf("\n");
	}
	return 0;
}