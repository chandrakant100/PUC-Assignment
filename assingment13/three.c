//programm to find number of words whose length is greater than 3
//To find no. Of words whose length is greater than 3
#include<stdio.h>
#include<string.h>
int main()
{

	char a[100],word[20];
	int i,m=0,j=0,count=0,l;
	printf("Enter the string:\n");
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
			l=strlen(word);
			if(l>3)
				count++;
			j=i+1;
			m=0;
			l=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			word[m]='\0';
                        l=0;
			l=strlen(word);
			if(l>3)
				count++;
			goto end;
		}
	end:
		if(count>=1)
			printf("\nNo. of words whose lenght is greater than 3 is %d",count);
		else
			printf("\nThe is no word whose length is greater than 3");
return 0;
}
