//programm to print like:
//input:chandra kant jena
//output:c k jena
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0;
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
			word[m]='\0';
			printf("%c ",word[0]);
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			printf(" %s ",word);
			goto end;
		}
	end:
		printf("\nEnd");
		
return 0;
}
