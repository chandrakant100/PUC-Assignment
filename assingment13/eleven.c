//programm to print the word containing specific character
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",a);
	
	fgetc(stdin);
	printf("\nEnter the character want to search:");
	scanf("%c",&ch);

	start:
	for(i=j;a[i]!=' ';i++)
		{
			if(a[i]=='\0')
				break;
			else
				word[m++]=a[i];
		}
	if(a[i]==' ')
		{	
		word[m]='\0';
			for(i=0;word[i]!='\0';i++)
			{
				if(word[i]==ch){
					printf("%s",word);
					break;
						}
			}
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			for(i=0;word[i]!='\0';i++)
				{
                                if(word[i]==ch)
				printf(" %s",word);
				break;
				}
			goto end;
		}
	end:
		printf("\nEnd");
		
return 0;
}
