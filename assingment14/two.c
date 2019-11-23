//program to print the line containing more than 10 characters
#include<stdio.h>
#include<string.h>
int main()
{

	char str[50][50];
	int i,j,num,l;
	printf("Enter the number of lines:\n");
	scanf("%d",&num);
	
	fgetc(stdin);
	printf("\nEnter the lines\n");
	for(i=0;i<num;i++)
		{
			fgets(str[i],50,stdin);
		}
	printf("\nThe lines with size greater than 10:\n");
	for(i=0;i<num;i++)
		{
			l=strlen(str[i]);
			if(l>10)
				puts(str[i]);
				//printf("\n");
		}
return 0;
}

