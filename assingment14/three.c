//programm to search specific word in each line
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][50],word[20],ch[20];
	int i,j,num,k=0,m=0,l=0,count=0;
	printf("\nEnter the number of lines:\n");
	scanf("%d",&num);
	
	fgetc(stdin);
	for(i=0;i<num;i++)
		{
			printf("Enter the string %d:",i+1);
			fgets(str[i],50,stdin);
		}
	
	printf("\nEnter the searched word:\n");
	scanf("%s",ch);
	
	begin:
	for(i=l;i<num;i++)
		{
			start:
			for(j=k;str[i][j]!=' ';j++)
				{
				if(str[i][j]=='\0' || str[i][j]=='\n')
					goto beg;
				else
					word[m++]=str[i][j];
				}
			if(str[i][j]==' ')
				goto beg;

		}
	beg:
	word[m]='\0';
		if(str[i][j]==' ')
			{
				if(strcmp(word,ch)==0)
				{
				printf("\nThe searched word is:\n");
					printf("%s\n",word);
					count++;	
				}
				k=j+1;
				m=0;
				goto start;	
			}
		else if(str[i][j]=='\0' || str[i][j]=='\n')
			{
				if(strcmp(word,ch)==0)
					{
					printf("\nThe searched word is:\n");
					printf("%s",word);
					count++;
					}
					l=i+1;
					k=0;
					m=0;
				if(i!=num-1)
					goto begin; 
				else
					{
						if(count>=1)
							printf("\nNo. of times the word present is: %d",count);
						else
							printf("\nThe word is not present:");
						goto end;
					}
			}
		end:
			printf("\nEnd");
	
	
	
	
return 0;
}

