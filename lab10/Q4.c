#include<stdio.h>
struct football
{
    int age,total_match,average_goal;
    char name[25];
}footballer[100],t;
 
void main()
{
    int i,j,n;
    printf("Enter the no of footballer: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("Enter the player name: ");
        scanf("%s",footballer[i].name);

        printf("Enter the player age: ");
        scanf("%d",&footballer[i].age);

        printf("Enter total_match played: ");
        scanf("%d",&footballer[i].total_match);

        printf("Enter the average_goal scored: ");
        scanf("%d",&footballer[i].average_goal); 

        printf("\n\n");   
    }  
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(footballer[j].average_goal>footballer[j+1].average_goal)
            {
                t=footballer[j];
                footballer[j]=footballer[j+1];
                footballer[j+1]=t;
            }
        }
    }
    
    printf("\nFootballer info in terms of average go scored from lowest to highest\n");
    printf("\nNAME\t\tAGE\t\tTotal_match\t\t Average_goal\n");
    printf("-------------------------------------------------------------------------------\n");
 
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t\t%d\t\t\t%d\n",footballer[i].name,footballer[i].age,footballer[i].total_match,footballer[i].average_goal);
    }
}