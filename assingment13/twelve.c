//programm for search and replace a specific word
#include<stdio.h>
#include<string.h>
int main()
{

	char str1[100],str2[100],word[20],search[20],replace[20];
	
	int i,j=0,m=0,k=0,check=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",str1);
	fgetc(stdin);
	
	printf("\nEnter the word want to search:");
	scanf("%s",search);
	fflush(stdin);

	printf("\nEnter the replaced word:\n");
	scanf("%s",replace);
	

	start:
	for(i=j;str1[i]!=' ';i++)
		{
			if(str1[i]=='\0')
				break;
			else
				word[m++]=str1[i];
				
		}
		
		word[m]='\0';
			if(str1[i]==' ')
				{
				if(strcmp(word,search)==0)
					{
						check=1;
						fflush(stdin);
						strcat(str2,replace);
                                        	strcat(str2," ");
					}
				else
					{
					fflush(stdin);
					strcat(str2,word);
					strcat(str2," ");
					}
					j=i+1;
					m=0;
					goto start;
			}
		else if(str1[i]=='\0')
			{
				 if(strcmp(word,search)==0)
                                        {
						check=1;
                                                strcat(str2,replace);
						strcat(str2," ");
                                        }
                                else
                                        strcat(str2,word);
					strcat(str2," ");
                    			goto end;

			}
		end:
			if(check!=1)
				printf("\nNot present:");
		else
			fflush(stdout);
			puts(str2);
			
return 0;
}
