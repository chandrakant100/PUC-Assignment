//programm to find number of words  begins and end  with specific character
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0,count=0;
	printf("Enter your name:\n");
	scanf("%[^\n]",a);

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
			count++;
			word[m]='\0';
			if(count==2)
				printf("\nThe middle word of your name is:\n%s",word);
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			goto end;
		}
	end:
		printf("\nEnd");
		
return 0;
}
