//programme to find a specific character and its number of occurance
#include<stdio.h>
int main()
{
	char a[100],ch;
	int count=0,i;
	printf("Enter the string:\n");
	fgets(a,100,stdin);

	printf("\nEnter the character want to search:");
	scanf("%c",&ch);
	
	for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==ch)
				count++;
		}	
	if(count>=1){
		printf("\nThe specific character is present that is :%c",ch);
		printf("\nThe number of occurance of the character is %d",count);
			}
	else
		printf("\nThe character is not present:");
return 0;
}
