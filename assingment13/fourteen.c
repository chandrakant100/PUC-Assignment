//programm to print the ascii code of the each character in a string
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	
	printf("\nThe ascii code of each character is:\n");
	for(i=0;str[i]!='\0';i++)
		{
			printf("%c\t%d\n",str[i],str[i]);

		}
return 0;
}
