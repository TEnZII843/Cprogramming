#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
	int wordExist=0;
	int bufferLength = 255;
	char search[100];
	printf("Enter word you want to search: ");
	scanf("%s",search);
	char line1[bufferLength];

	char read[80]; //file path length
	int ch, character = 0, line = 0;
	fp = fopen("/home/user/Documents/Information.txt", "r"); //only read mode
	
	if (fp == NULL){
		printf("Can't open the file.\n" );
	}
	else{
		while(fgets(line1, bufferLength, fp))
			{
				char *ptr = strstr(line1, search);
				if (ptr != NULL) 
				{
					wordExist=1;
					break;
				}
			}
			if (wordExist==1)
			{
				printf("%s exists.",search);
			}
			else 
			{
				printf("%s doesn't exist.",search);
			}
	}
	if (fp == NULL){
		printf("Can't open the file.\n" );
	}	
	else{
		while ((ch = fgetc(fp)) != EOF)
		{
			character++;
			if (ch == '\n')
			line++;
		}
		
	fclose(fp);

	printf("\nNumber of characters = %d", character);
	printf("\nNumber of lines = %d\n", line);
	}
	return 0;
}