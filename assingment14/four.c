//programm to insert in second line
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][50],str1[50];
	int i,j,num;

	printf("Enter the number of lines:\n");
	scanf("%d",&num);
	
	fgetc(stdin);
	for(i=0;i<num;i++)
		{
			printf("Enter the string %d:",i+1);
			fgets(str[i],50,stdin);
		}
	printf("\nEnter the string want to insert:\n");
		scanf("%[^\n]",str1);
	
	for(i=num;i>=1;i--)
		strcpy(str[i],str[i-1]);	
		strcpy(str[1],str1);

	printf("\nAfter insertion:\n");
	for(i=0;i<=num;i++)
		{
			printf("\nThe no. %d is:",i+1);
			puts(str[i]);	
		}
		
return 0;
}
