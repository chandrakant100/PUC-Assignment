//programm to find number of words  begins and end  with specific character
#include<stdio.h>
int main()
{

	char a[100],word[20],ch;
	int i,m=0,j=0,count=0;
	printf("Enter the string:\n");
	scanf("%[^\n]",a);
	
	printf("Enter the character want to search:");
	fgetc(stdin); //to remove input buffer
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
			if(word[0]==ch && word[m-1]==ch)
				count++;
			j=i+1;
			m=0;
			goto start;
			
		}
	else if(a[i]=='\0')
		{
			word[m]='\0';
                        if(word[0]==ch && word[m-1]==ch)
				count++;
			goto end;
		}
	end:
		if(count>=1)
			printf("\nNo. of words begins and ends  with %c is %d",ch,count);
		else
			printf("\nThe is no word begins and ends with %c",ch);
return 0;
}
