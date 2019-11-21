//programm to find number of words  begins with specific character
#include<stdio.h>
int main()
{

	char a[100];
	int i;
	printf("Enter your name:\n");
	scanf("%[^\n]",a);
	printf("\nThe first word of my name is:\n");
	for(i=0;a[i]!=' ';i++)
		{
			printf("%c",a[i]);
		}
return 0;
}
