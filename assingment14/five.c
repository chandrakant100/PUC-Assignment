//programm to delete 5th line
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][50];
	int i,j,num;

	printf("Enter the number of lines:(greater the 6)\n");
	scanf("%d",&num);
	
	fgetc(stdin);
	for(i=0;i<num;i++)
		{
			printf("Enter the string %d:",i+1);
			fgets(str[i],50,stdin);
		}
	
	for(i=4;i<num;i++)
		strcpy(str[i],str[i+1]);	

	printf("\nAfter insertion:\n");
	for(i=0;i<num-1;i++)
		{
			printf("\nThe no. %d is:",i+1);
			puts(str[i]);	
		}
		
return 0;
}
