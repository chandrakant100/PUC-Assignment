//programm to print the word containing specific alphabet
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0,k;
	printf("Enter the string:\n");
	scanf("%[^\n]",a);
	
	fgetc(stdin);
	printf("\nEnter the alphabet want to search:");
	scanf("%c",&ch);


	printf("\nThe words containing specific character are:\n");
	start:
	for(i=j;a[i]!=' ';i++)
		{
			if(a[i]=='\0')
				break;
			else
				word[m++]=a[i];
		}
	word[m]='\0';
	if(a[i]==' ')
		{	
			for(k=0;word[k]!='\0';k++)
			{
				if(word[k]==ch){
					printf("%s\n",word);
					break;
					}
			}
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			for(k=0;word[k]!='\0';k++)
				{
                                if(word[k]==ch)
				{
					printf("%s\n",word);
					break;
				}
				}
			goto end;
		}
	end:
		printf("\nEnd");
		
return 0;
}
